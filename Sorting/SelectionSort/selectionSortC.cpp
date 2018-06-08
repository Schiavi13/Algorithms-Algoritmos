#include <stdio.h>

void selectionSort(int *arr, int length){
	for (int i=0;i<(length-1);i++){
		int ind = i;
		
		for(int j=i;j<(length-1);j++){
			if(arr[j+1]<arr[ind]){
				ind = j+1;
			}
			
		}
		int min = arr[ind];
		arr[ind] = arr[i];
		arr[i] = min;
	}
}

int main()
{
	int arr[6]={5,2,4,6,1,3}, length=6;
	
	selectionSort(arr,length);
	for(int i=0;i<6;i++)
		printf("%d\n",arr[i]);
	return 0;
}
