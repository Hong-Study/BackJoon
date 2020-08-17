#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *num;
    int temp;
    int min=10000;
    int j;
    scanf("%d",&n);
    num = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n-1;i++){
        min = i;
        for(int j=i;j<n;j++){
            if(num[j] < num[min])
                min = j;
        }
        if(num[min] != num[i]){
            temp = num[i];
            num[i] = num[min];
            num[min] = temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",num[i]);
    }
}