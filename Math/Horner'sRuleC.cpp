#include <stdio.h>

int HornersRule(int * coef, int x, int n){
    int y=0;
    for(int i=n;i>=0;i--)
        y=coef[i]+(x*y);
    return y;
}

int main(){
    int coeficientes[3]={3,5,7}, x=3, len=2, p;
    p = HornersRule(coeficientes,x,len);
    printf("S from k=0 to %d for asubk*%d^k = %d\n",len,x,p);
    return 0;
}
