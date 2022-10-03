#include<stdio.h>
void ArrayRotation(int arr[],int d,int size);
//d:is position to ratate the array.
int main()
{
	int arr[100],i,size,d;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the element in array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the position to rotate the array:");
	scanf("%d",&d);
	ArrayRotation(arr,d,size);
	return 0;
}
void ArrayRotation(int arr[],int d,int size){
	int temp[size],k,i;
	
	for(i=0;i<d;i++){
		temp[k]=arr[i];
		k++;
	}
    for(i=d;i<size;i++){
		temp[k]=arr[i];
		k++;
	}
	
	for(k=0;k<size;k++){
		printf("%d ",temp[k]);
	}
}