#include<stdio.h>
int main(){
int amount,ms,city,deliverycharge;
char cod;
printf("ENTER ORDER AMOUNT : ");
scanf("%d",&amount);
printf("ENTER Membership status(1 or 0) : ");
scanf("%d",&ms);
printf("ENTER city status(1 or 0) : ");
scanf("%d",&city);
if(amount>3000 || ms==1){
	printf("Free  Delivery!");
}
else if(amount<50000 && city==1)
{
	printf("delivery is available");
	deliverycharge = 500;
	
}

	
}
