#include <stdio.h>

int main(){
    int temp, pressure;
    
    printf("Enter temperature : ");
    scanf("%d", &temp);
    
    printf("Enter pressure : ");
    scanf("%d", &pressure);
    
    if(temp > 100 || pressure > 250)
    {
        printf("Machine Shut Down"); 
    }
    else if(temp >= 85 && pressure >= 200){
        printf("Warning");
    }
    else {
        printf("Nothing Happens");
    }
}

