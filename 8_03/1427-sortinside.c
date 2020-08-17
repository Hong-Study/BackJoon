#include<stdio.h>

int main(){
    int a;
    int k=0;
    int num[10];
    int temp;
    scanf("%d",&a);

    while(a != 0){
        num[k] = a%10;
        a/=10;
        k++;
    }
    for(int i = 0 ; i < k-1 ; i ++) {
        for(int j = i+1 ; j < k ; j ++) {
            if(num[i] < num[j]) {
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
         
    for(int i = 0 ; i <  k ; i ++) {
        printf("%d",num[i]);
    }
}