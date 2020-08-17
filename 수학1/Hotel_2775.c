#include<stdio.h>
void number(int k,int n){
    int num[15][14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    if(n == 1){
        printf("1\n");
        return;
    }
    else{
        for(int i=1;i<=k;i++){
            for(int j=0;j<n;j++){
                if(j==0)
                    num[i][j] = 1;
                else
                    num[i][j] = num[i-1][j] + num[i][j-1];
            }
        }
    }
    printf("%d\n",num[k][n-1]);
}
int main(){
    int count,k,n;
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        scanf("%d",&k);
        scanf("%d",&n);
        number(k,n);
    }
}