#include <stdio.h>
typedef struct pokemon {
    char Name[100];
    int Lv;
    int Hp;
} Pokemon;

int main (void) {
    Pokemon pokemon[2];
    for (int i = 0; i < 2; i++) {
        scanf("%s", pokemon[i].Name);
        scanf("%d%d", &pokemon[i].Lv, &pokemon[i].Hp);
    }
    
    for (int i = 0; i < 2; i++) {
        printf("Name: %s\n", pokemon[i].Name);
        printf("Lv: %d\n", pokemon[i].Lv);
        printf("HP: %d\n\n", pokemon[i].Hp);
    }
    return 0;
}