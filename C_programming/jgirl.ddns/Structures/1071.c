#include <stdio.h>
struct Employee
{
    char Name[20];
    char Phone[11];
    int id;
};

void readEmployee (struct Employee *employee) {
    scanf("%s", employee -> Name);
    scanf("%s", employee -> Phone);
    scanf("%d", &(employee -> id));
}

void foundemployee(int foundcode, struct Employee *ptr) {
    for (int i = 0; i < 3; i++) {
        if (ptr -> id == foundcode) {
            printf("found\n");
            printf("Name: %s\n", ptr -> Name);
            printf("Phone: %s\n", ptr -> Phone);
            printf("Id: %d", ptr -> id);
            return;
        }
        ptr++; 
    }
    printf("not found");
    return;
}

int main (void) {
    struct Employee employee[3];
    for (int i = 0; i < 3; i++)
        readEmployee(&employee[i]);

    int foundcode;
    scanf("%d", &foundcode);
    struct Employee *ptr = employee;
    foundemployee(foundcode, ptr);
    return 0;
}