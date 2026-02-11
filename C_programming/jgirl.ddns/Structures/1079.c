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

    int high = 0;
    for (int i = 1; i < 3; i++) {
        if (pokemon[i].Lv > pokemon[high].Lv)
            high = i;
    }

    printf("Name: %s\n", pokemon[high].Name);
    printf("Lv: %d\n", pokemon[high].Lv);
    printf("HP: %d\n", pokemon[high].Hp);
        
    return 0;
}