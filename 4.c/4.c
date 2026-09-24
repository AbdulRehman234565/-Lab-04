#include<stdio.h>
int main(){
	int pass,grade,credithrs;
	printf("DID U  PASS? (1 for passed, 0 for not passed) : ");
	scanf("%d",&pass);
	printf("enter  ur grade");
	scanf("%d",&grade);
		printf("enter  ur credit hours : ");
	scanf("%d",&credithrs);
	if(pass==1 && grade>=2.5 && credithrs>=30){
		printf("You Are Eligible");
		
	}
	else{
		printf("Not Eligible ");
	}
	
}

