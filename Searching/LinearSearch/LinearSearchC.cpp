#include <stdio.h>

int linearSearch(int *arr, int v, int length){
	for(int i=0;i<length;i++){
		if(arr[i]==v){
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[6]={5,2,4,6,1,3}, length=6;
	int v, ind;
	
	for(int i=0;i<6;i++)
		printf("%d\n",arr[i]);
		
	printf("Insert value: ");
	scanf("%d",&v);
	
	ind = linearSearch(arr,v,length);
	
	if(ind >= 0)
		printf("Value %d is in index %d",v,ind);
	else
		printf("Value %d does not appear in the array",v);
}
