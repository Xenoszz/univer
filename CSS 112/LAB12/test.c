#include <stdio.h>

int main() {
    int dd, mm, yy;

    printf("Enter purchase date (dd mm yyyy): ");
    scanf("%d %d %d", &dd, &mm, &yy);

    // Assuming 75 days credit term
    const int creditTerm = 75;
    const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Adjust the date using a for loop
    for (int i = 0; i < creditTerm; i++) {
        dd++;

        if (dd > daysInMonth[mm]) {
            dd = 1;
            mm++;

            if (mm > 12) {
                mm = 1;
                yy++;
            }
        }
    }
    printf("Due date: %d %d %d\n", dd, mm, yy);


    return 0;
}
