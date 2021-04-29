#include<stdio.h>
int main(){
	int amt,rate,time,inter;
	printf("enter the amount:   ");
	scanf("%d/n",&amt);
	printf("enter the rate..");
	scanf("%d/n",&rate);
	printf("enter the time..");
	scanf("%d/n",&time);
	inter=amt*rate*time/100;
	printf("your total interest is : %d", inter);
	
	
	
	
	
	return 0;
}
