#include <stdio.h>
int main (void) {
    char id[10];
    scanf("%s", id);

    int result = 0;
    if (id[0] >= 'a' && id[0] <= 'z')
        id[0] -= 32;
    switch(id[0]) {
        case 'A': { result = 1; break;}
        case 'B': { result = 10; break;}
        case 'C': { result = 19; break;}
        case 'D': { result = 28; break;}
        case 'E': { result = 37; break;}
        case 'F': { result = 46; break;}
        case 'G': { result = 55; break;}
        case 'H': { result = 64; break;}
        case 'I': { result = 39; break;}
        case 'J': { result = 73; break;}
        case 'K': { result = 82; break;}
        case 'L': { result = 2; break;}
        case 'M': { result = 11; break;}
        case 'N': { result = 20; break;}
        case 'O': { result = 48; break;}
        case 'P': { result = 29; break;}
        case 'Q': { result = 38; break;}
        case 'R': { result = 47; break;}
        case 'S': { result = 56; break;}
        case 'T': { result = 65; break;}
        case 'U': { result = 74; break;}
        case 'V': { result = 83; break;}
        case 'W': { result = 21; break;}
        case 'X': { result = 3; break;}
        case 'Y': { result = 12; break;}
        case 'Z': { result = 30; break;}
    }

    for (int i = 8; i >= 0; i--) {
        if (i != 0)
            result += ((id[9 - i] - '0') * i);
        else
            result += ((id[9 - i] - '0') * 1);
    }

    if (result % 10 == 0)
        printf("real");
    else
        printf("fake");
    return 0;
}