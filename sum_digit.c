#include<stdio.h>
int sum_digit();
int main(){
	sum_digit();
	return 0;
}
int sum_digit(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	int sum=0;
	while(num>0){
	 int R=num%10;
		sum=sum+R;
		num=num/10;
	}
	printf("the sum of given digit is : %d",sum);
	
}
