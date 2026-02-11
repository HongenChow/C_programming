#include <stdio.h>
#include <stdbool.h>
typedef struct pokemon {
    char Name[100];
    int Lv;
    int Hp;
} Pokemon;

int main (void) {
    Pokemon pokemon[3];
    for (int i = 0; i < 3; i++) {
        scanf("%s", pokemon[i].Name);
        scanf("%d%d", &pokemon[i].Lv, &pokemon[i].Hp);
    }
    
    int n;
    scanf("%d", &n);

    bool found = false;
    for (int i = 0; i < 3; i++) 
        if (pokemon[i].Lv >= n) {
            found = true;
            printf("Name: %s\n", pokemon[i].Name);
            printf("Lv: %d\n", pokemon[i].Lv);
            printf("HP: %d\n\n", pokemon[i].Hp);
        }
    if (!found)
        printf("not found");
    return 0;
}