#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main (void) {
    char correct[16], guess[16];
    scanf("%s %s", correct, guess);

    int length = strlen(correct);
    int A = 0, B = 0;
    char exist_alphabet[16];
    int exist_number[16] = {0};
    int exist_count = 0;
    for (int i = 0; i < length; i++) {
        bool jump = false;
        for (int j = 0; j < exist_count; j++)
            if (correct[i] == exist_alphabet[j]) {
                exist_number[j]++;
                jump = true;
                break;
            }
        if (!jump) {
        exist_alphabet[exist_count] = correct[i];
        exist_number[exist_count++]++; 
        }
    }

    for (int i = 0; i < length; i++) 
        if (correct[i] == guess[i]) {
            A++;
            for (int j = 0; j < exist_count; j++)
                if (exist_alphabet[j] == guess[i]) {
                    exist_number[j]--;
                    if (exist_number == 0)
                        exist_count--;
                    break;    
                }
        }
    
    for (int i = 0; i < length; i++)
        for (int j = 0; j < exist_count; j++)
            if (correct[i] != guess[i] && guess[i] == exist_alphabet[j] && exist_number[j] != 0) {  
                exist_number[j]--;
                B++;      
                break;      
            }       
    

    printf("%dA%dB", A, B);
    return 0;
}