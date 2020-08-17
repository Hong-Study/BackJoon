#include<stdio.h>

int Factorial(int n){
    if(n == 0)
        return 1;
    else if(n < 2)
        return n;
    else
        return n*Factorial(n-1);
}
int main(){
    int a;

    scanf("%d",&a);

    printf("%d\n",Factorial(a));
}