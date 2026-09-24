#include <stdio.h>

int main() {
    int zone, speed;
    int fine = 0;

    printf("Zone type (1 - School Zone, 2 - Highway, 3 - Residential Area): ");
    scanf("%d", &zone);

    printf("Enter Speed: ");
    scanf("%d", &speed);

    switch (zone) {
        case 1: 
            if (speed > 50) {
                printf("Double Fine!\n");
                fine = 2000; 
            } else if (speed > 30) {
                printf("U Crossed The Speed Line\n");
                fine = 1000;
            }
            break;

        case 2: 
            if (speed > 120) {
                printf("Double Fine!\n");
                fine = 4000;
            } else if (speed > 100) {
                printf("U Crossed The Speed Line\n");
                fine = 2000; 
            }
            break;

        case 3: 
            if (speed > 70) {
                printf("Double Fine!\n");
                fine = 3000; 
            } else if (speed > 50) {
                printf("U Crossed The Speed Line\n");
                fine = 1500; 
            }
            break;

        default:
            printf("INVALID ZONE TYPE!\n");
            return 0;
    }

    printf("\nThe fine is: %d\n", fine);

    
}

