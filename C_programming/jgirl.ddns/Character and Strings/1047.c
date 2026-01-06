#include <stdio.h>
#include <string.h>
int main (void) {
    while (1) {
        char input[1024];
        fgets(input, sizeof(input), stdin);
        char *slash = strchr(input, '\n');
        if (slash)
            *slash = '\0';
        if (strcmp(input, "-1") == 0)
            return 0;
 
        int count = strlen(input);
 
        for (int i = 0; i < count; i++) {
            unsigned char c = (unsigned char) input[i];
            for (int bit = 6; bit >= 0; bit--){
                printf("%d", (c >> bit) & 1);
            }
            printf(",");
        }
        printf("\n");
    }
}