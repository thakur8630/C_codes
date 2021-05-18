#include<stdio.h>
int deposit_money();
int withdrawl_money();
int money=1000;
int main(){
	int choice;
	printf("1-deposit money in account\n");
	printf("2-withdrawl money \n");
	printf("enter your choice......");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			deposit_money();
			break;
		case 2:
			withdrawl_money();
			break;
	}
	return 0;
}
int deposit_money(){
	int ammount;
	printf("enter the ammount to be deposit....");
	scanf("%d",&ammount);
	if(ammount>50000){
		printf("sorry we could not deposit your ammount....\n");
	}
	else{
		money=money+ammount;
		printf("now your account balance is %d",money);		
	}
}
int withdrawl_money(){
	int ammount;
	printf("your account balance is : %d",money);
	printf("enter your ammount to be withdrawl....\n");
	scanf("%d",&ammount);
	if(ammount<200){
		printf("you can not withdrawl your money becouse your money is less then from 200...\n");
		
	}
	else{
		money=money-ammount;
		printf("your money has withdrawled...\n");
		printf("Now your accountt balance is %d",money);
		
	}
}
