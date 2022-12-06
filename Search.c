#include <stdio.h>


int BinarySearch(int arr[],int data, int size) 
{

	int mid;
	int leftpoint = 0;
	int rightpoint = size;
	
	while(leftpoint <rightpoint){ 
		mid = (leftpoint +rightpoint)/2;
		
		if(arr[mid] > data)
			rightpoint = mid;
		
		if(arr[mid] < data)	
			leftpoint = mid+1;
		
		if(arr[mid] == data){
			printf("the number %d is in index %d\n",data,mid);
			return mid;
		}
		
	}
	printf("the number couldnt find\n");
	
}


int LinearSearch(int array[], int data, int size ){ 
	int i = 0; 
	for(i = 0; i < size-1 ; i++ ) 
	{
		if(array[i] == data ) 
		{
			printf("The number %d is in index %d\n", data, i );
			return i;
		}
	}
	
	if(i == size-1){
		printf("The number couldnt find\n");
		return -1;
			
	}


}


int main(){

	int longArray[100000];
	int i = 0;
	for(;i<100000;i++)
		longArray[i] = i;
	

	int number = LinearSearch(longArray, 4123,100000); 
	int number1 = BinarySearch(longArray, 5236,100000); 

	return 0;
}
