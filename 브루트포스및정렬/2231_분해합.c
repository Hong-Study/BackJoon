#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int num=0;
    int a=1,b,max=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        a = i;
        while(a!=0){
            b = a%10;
            a = a/10;
            num += b;
        }
        if((i+num) == n){
            max = i;
            break;
        }
        num = 0;
    }
    printf("%d\n",max);
}