#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

int main(){
    int M,N=1;
    int num[10001];
    int count;
    int j=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&M);
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
        for(int i=M/2,j=M/2;i<=M;i++){
            if(num[i]){
                if(num[M-i]){
                    if(i>(M-i))
                        printf("%d %d\n",M-i,i);
                    else if(i == (M-i))
                        printf("%d %d\n",i,i);
                    else
                        printf("%d %d\n",i,M-i);
                    break;
                }
            }
            else if(num[j]){
                if(num[M-j]){
                    if(j>(M-j))
                        printf("%d %d\n",M-j,j);
                    else if(j == (M-j))
                        printf("%d %d\n",j,j);
                    else
                        printf("%d %d\n",j,M-j);
                    break;
                }
            }
            j--;
        }
    }
}