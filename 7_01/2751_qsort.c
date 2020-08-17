#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1<num2)
        return -1;
    if(num1>num2)
        return 1;
    
    return 0;
}
int main(){
    int n;
    int *num;
    scanf("%d",&n);
    num = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    qsort(num, n,sizeof(int), compare);     //qsort 함수 이용

    for(int i=0;i<n;i++)
        printf("%d\n",num[i]);
    
    return 0;
}