#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, count;
    int *num;
    int max = 0;
    int cn = 0;
    int answer[3];
    scanf("%d %d",&n,&count);
    num = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                cn = num[i]+num[j]+num[k];
                if(cn == count){
                    max = count;
                    break;
                }
                else if(cn > max && cn < count){
                    max = cn;
                    break;
                }
            }
        }
    }
    printf("%d\n",max);
}