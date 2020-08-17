#include<stdio.h>
#include<stdlib.h>
#define Max_num 10000
int main(){
    int n;
    int num;
    int count[Max_num+1] = {0, };
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        count[num]++;
    }
    for(int i=0;i<=Max_num;i++){
        if(count[i]){
            for(int j=0;j<count[i];j++){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}