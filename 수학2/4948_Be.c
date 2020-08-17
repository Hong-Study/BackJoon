#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

int main(){
    int M,N=1;
    int num[246913];
    int count;
    int result = 0;
    while(N != 0){
        scanf("%d",&N);
        if(N == 0)
            break;
        M = N*2;
        for(int i=0;i<=M;i++){
            num[i] = TRUE;
        }
        num[1] = FALSE;

        for(int i=2;i<=M;i++){
            if(num[i]){
                count = i*i;
                if(count > M)
                    break;
                while(count<=M){
                    num[count] = FALSE;
                    count += i;
                }
            }
        }
        for(int i=N+1;i<=M;i++){
            if(num[i])
                result++;
        }
        printf("%d\n",result);
        result = 0;
    }
    
}