#include <stdio.h> 

int binarySearch(int * arr, int item, int izq, int der){
    int pivote = (izq+der)/2;
    if(izq>der)
        return -1;
    if(item==arr[pivote])
        return pivote;
    if(item<arr[pivote])
        return binarySearch(arr,item,izq,pivote-1);
    return binarySearch(arr,item,pivote+1,der);
}

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int pos, elemento = 2;
    pos = binarySearch(arr,elemento,0,7);
    return 0;
}
