#include <stdio.h>

int main() {
    char st_name[100][50], nameword[10];
    int i, flag = 1;

    for (i = 1;; i++) {
        printf("input name-surname : ");
        gets(st_name[i]);
        if (st_name[i][0] == '*')
            break;
    }

    printf("===================\n");
    printf("input search char : ");
    scanf("%s", nameword); // Use scanf to read a string

    for (i = 1; i < 100; i++) { // Start from 1, not 0
        if (st_name[i][0] == '*')
            break;
        if (st_name[i][0] == nameword[0]) {
            printf("name %d is %s\n", flag, st_name[i]); // Add \n to print a newline
            flag++;
        }
    }

    return 0;
}
