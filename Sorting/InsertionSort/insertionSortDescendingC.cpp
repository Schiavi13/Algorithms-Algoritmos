#include <stdio.h>
#include <iostream>

using namespace std;

void insertionSort(int *arr,int length)    
{
	for(int j=1;j<length;j++)
	{
		int key=arr[j], i=j-1;	
		
		while(i>=0 && arr[i]<key)		 
		{                               
			arr[i+1]=arr[i];	
							
			i=i-1;			
		}
		arr[i+1]=key;				
	}
}

int main()
{
	int arr[6]={5,2,4,6,1,3}, length=6;
	
	insertionSort(arr,length);
	for(int i=0;i<6;i++)
		printf("%d\n",arr[i]);
	return 0;
}
