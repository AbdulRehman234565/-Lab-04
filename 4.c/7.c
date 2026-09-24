#include <stdio.h>

int main() {
    int plan, minutes_used;
    int total_bill = 0;

    printf("Select a Plan (1, 2, 3, or 4): ");
    scanf("%d", &plan);

    printf("Enter the total minutes used: ");
    scanf("%d", &minutes_used);

    switch (plan) {
        case 1:
            if (minutes_used > 1000) {
                total_bill = 500 + ((minutes_used - 1000) * 2);
            } else {
                total_bill = 500;
            }
            break;

        case 2:
            if (minutes_used > 2000) {
                total_bill = 800 + ((minutes_used - 2000) * 2);
            } else {
                total_bill = 800;
            }
            break;

        case 3:
            total_bill = 1200;
            break;

        case 4:
            total_bill = minutes_used * 1;
            break;

        default:
            printf("Invalid plan selection!\n");
    }

    printf("Your Total Bill is: Rs. %d\n", total_bill);

    return 0;
}

