#include<stdio.h>
int main(){
	int arr[5],i,j,n,search;
	printf("enter the size of the array..\n");
	scanf("%d",&n);
	printf("enter the elements in the array...\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the number to be searched\n");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(arr[i]==search){
		
			printf("%d is present at location %d.\n",search,i+1);
			break;
		}
		if(i==n){
			printf("element does not exit in this array...");
		}
	}
	
	
	return 0;
}
