#include <stdio.h>
#include <iostream>

using namespace std;

void merge(int *arr, int p, int q, int r){
	int n1 = q-p+1;
	int n2 = r-q;
	int L[n1], R[n2];
	
	for(int i=0;i<n1;i++)
		L[i] = arr[p+i];
		
	for(int j=0;j<n2;j++)
		R[j] = arr[q+j+1];	
	
	int i = 0;
	int j = 0;
	int k = p;
	
	while(i<n1 && j<n2){
		if(L[i] >= R[j]){
			arr[k] = L[i];
			i = i+1;
		}
		else{
			arr[k] = R[j];
			j = j+1;
		}
		
		k = k+1;
	}
	
	while(i<n1){
		arr[k] = L[i];
		i = i+1;
		k = k+1;
	}
	
	while(j<n2){
		arr[k] = R[j];
		j = j+1;
		k = k+1;
	}
	
}

void mergeSort(int *arr, int p, int r){
	if(p<r){
		int q = (r+p)/2;
		mergeSort(arr,p,q);
		mergeSort(arr,q+1,r);
		merge(arr,p,q,r);
	}	
}

int main()
{
	int arr[6]={5,2,4,6,1,3}, length=6;
	
	mergeSort(arr,0,length-1);
	for(int i=0;i<6;i++)
		cout<<arr[i]<<endl;
	return 0;
}
