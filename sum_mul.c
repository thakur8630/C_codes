#include<stdio.h>
int sum_array();
int multi_array();
int main(){
	int choice;
	printf("1-you can sum of array on here....\n");
	printf("2-you can do multiplication on there....\n");
	printf("#####.......enter your choice.....#####");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			sum_array();
			break;
		case 2:
			multi_array();
			break;
	}
	
	return 0;
}
int sum_array(){
	int arr1[10][10],arr2[10][10],sum[10][10],i,j,range;
	printf("enter the range of the array...\n");
	scanf("%d",&range);
	printf("enter the element in the array1...\n");
	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter the range of array2...");
	scanf("%d",&range);
	printf("enter the element in the array2...");
	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
			scanf("%d",&arr2[i][j]);
		}
	
}

	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
          sum[10][10]=arr1[i][j]+arr2[i][j];
}
}
    for(i=0;i<range;i++){
		for(j=0;j<range;j++){
		
			printf("sum of the array is : \t%d",sum[i][j]);
}
}
}

int multi_array(){
		int arr1[10][10],arr2[10][10],multi[10][10],i,j,range;
	printf("enter the range of the array...\n");
	scanf("%d",&range);
	printf("enter the element in the array1...\n");
	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter the range of array2...");
	scanf("%d",&range);
	printf("enter the element in the array2...");
	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
			scanf("%d",&arr2[i][j]);
		}
	
}
	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
		
        multi[10][10]=arr1[i][j]*arr2[i][j];
    }
}
	for(i=0;i<range;i++){
		for(j=0;j<range;j++){
			printf("multiplication of array is of the array is : \t%d",multi[i][j]);
}
}
	
	
}




