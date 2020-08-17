#include<stdio.h>
int Pibonachi(int n){
    if(n == 1)
        return 1;
    if(n == 0)
        return 0;
    return Pibonachi(n-1) + Pibonachi(n-2); 
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",Pibonachi(a));
}