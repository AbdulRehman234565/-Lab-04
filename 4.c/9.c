#include <stdio.h>
int main(){
    int people, weight;
    printf("Enter No of people : ");
    scanf("%d", &people);
    printf("Enter Total weight : ");
    scanf("%d", &weight);
    
    if(people <= 10 && weight <= 1000)
    {
        printf("Operate Successfully");
    }
    else if(people > 10 && weight <= 1000)
    {
        printf("exceeding the people limit");
    }
    else if(people <= 10 && weight > 1000)
    {
        printf("Overweight");
    }
    else if(people > 10 && weight > 1000)
    {
        printf("Both Are Exceeding");
    }
}

