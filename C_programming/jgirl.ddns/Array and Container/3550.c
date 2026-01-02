#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main (void) {
    char name[100][64];
    int score[100];
    int count = 0;
    int error_count[100];
    while (1) {
        char input_name[64];
        int input_score;
        scanf("%s", input_name);
        if (strcmp(input_name, "q") == 0)
            break;
        scanf("%d", &input_score);
        strcpy(name[count], input_name);
        score[count] = input_score;
        error_count[count] = 0;
        count++;
    }
 
    char *keyword[] = {"戶頭","銀行","下單","帳號","匯","欠款","檢察官","警察","提款機","點數","發票","援交","酒店","股票","投資","顧問","課程","專員","平台"};
    int keyword_count = sizeof(keyword) / sizeof(keyword[0]);
    char input_name2[64];
    char input_msg[1024];
    while (scanf("%s", input_name2) == 1) {
        if (strcmp(input_name2, "q") == 0)
            break;
 
        scanf(" %[^\n]", input_msg);
        for (int i = 0; i < count; i++) {
            if (strcmp(name[i], input_name2) == 0) {
                for (int k = 0; k < keyword_count; k++) {
                    char *p = input_msg;
                    while ((p = strstr(p, keyword[k])) != NULL) {
                        error_count[i]++;
                        p += strlen(keyword[k]);    
                    }
                }
                if (error_count[i] > 2 || score[i] <= 3) {
                            printf("小心詐騙!\n");
                }    
            }
        }
    }
 
    for (int i = 0; i < count; i++)
        if (error_count[i] >= 3 || score[i] <= 3)
            printf("%s\n", name[i]);
    return 0;
}