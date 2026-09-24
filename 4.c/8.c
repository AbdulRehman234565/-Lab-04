#include <stdio.h>

int main(){
    float CGPA;
    int INCOME;
    
    printf("Enter CGPA : ");
    scanf("%f", &CGPA);
    
    printf("MONTHLY INCOME : ");
    scanf("%d", &INCOME);
    
    if(CGPA > 3.7 && INCOME < 50000)
    {
        printf("Full Scholarship");
    }
    else if(CGPA > 3.3 && INCOME < 100000)
    {
        printf("Half Scholarship");
    }
    else {
        printf("No Scholarship"); // Corrected typo from "Scholorhsip"
    }
}

