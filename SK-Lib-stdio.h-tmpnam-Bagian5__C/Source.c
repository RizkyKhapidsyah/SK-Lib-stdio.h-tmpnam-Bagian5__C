#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    char* name1 = tmpnam(NULL);
    printf("temporary file name: %s\n", name1);

    char name2[L_tmpnam];
    
    if (tmpnam(name2)) {
        printf("temporary file name: %s\n", name2);
    }

    _getch();
    return 0;
}