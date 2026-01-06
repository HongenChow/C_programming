#include <stdio.h>
#include <string.h>
int main (void) {
    char find[1024];
    scanf("%s", find);
    *find += 32;

    char book[1024][1024];
    int count = 0;
    while (1) {
        char input[1024];
        scanf("%s", input);

        if (strcmp(input, "q") == 0)
            break;

        strcpy(book[count++], input);
    }

    for (int i = 0; i < count; i++)
        if (strcmp(find, book[i]) == 0) {
            printf("Yes %d", i + 1);
            return 0;
        }

    printf("No %d", count);
    return 0;
}