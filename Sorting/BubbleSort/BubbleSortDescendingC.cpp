#include <stdio.h>

void bubbleSort(int * arr,int len){
    int aux;
    for (int i=0;i<len-1;i++)
        for (int j=len-1;j>i;j--)
            if (arr[j]>arr[j-1]){
                aux = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = aux;
            }

}

int main(){
    int arr[6]={5,2,4,6,1,3}, len = 6;
    bubbleSort(arr,len);
    for(int i=0;i<6;i++)
        printf("%d\n",arr[i]);
    return 0;
}
