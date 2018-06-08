#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void insertionSort(int *arr,int tamano)    
{
	for(int j=1;j<tamano;j++)
	{
		int clave=arr[j], i=j-1;	
		
		while(i>=0 && arr[i]<clave)		//cambio para ordenarlos inversamente	que el anterior sea menor
		{                               
			arr[i+1]=arr[i];	 
							
			i=i-1;			
		}
		arr[i+1]=clave;				
	}
}

int main()
{
	int arr[6]={5,2,4,6,1,3}, tamano=6;
	
	insertionSort(arr,tamano);
	for(int i=0;i<6;i++)
		cout<<arr[i]<<endl;
	return 0;
}
