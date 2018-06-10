#include <stdio.h>
#include <iostream>

using namespace std;

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
		cout<<arr[i]<<endl;
		
	cout<<"Insert value: ";
	cin>>v;
	
	ind = linearSearch(arr,v,length);
	
	if(ind >= 0)
		cout<<"Value "<<v<<" is in index "<<ind;
	else
		cout<<"Value "<<v<<" does not appear in the array";
}
