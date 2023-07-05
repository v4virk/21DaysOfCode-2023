//calculate power using pow function using header file cmath

#include<stdio.h>
#include<math.h>

int main(){
    int x;
    printf("enter the number:\t");
    scanf("%d", &x);

    int k;
    printf("enter the power:\t");
    scanf("%d", &k);

    int c = root(x);
    printf("the power of the no: %d is %d\n",x,c);

}