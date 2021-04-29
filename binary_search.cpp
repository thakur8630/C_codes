#include<stdio.h>
int main(){
	int arr[10],i,n,search,first,last,mid;
	printf("enter the size of the array...");
	scanf("%d",&n);
	printf("enter the elements in the array....");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched....");
	scanf("%d",&search);
	first=0;
	last=n-1;
	mid=first+last/2;
	while(first<=last){
		if(arr[mid]<search){
			first=mid+1;
		if(arr[mid]==search){
			printf("%d found at location %d.n",search,mid+1);
			break;
		}
	}
		else{
			last=mid-1;
			mid=first+last/2;
		}
		
	}
	if(first>last){
		printf("not found");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
