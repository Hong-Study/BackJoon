#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int an = 666;
    int count;
    scanf("%d",&n);
    count = n/10;
    if(n%10 == 0)
        printf("%d",9);
    else if(n%10 != 1)
        printf("%d",n%10-1);
    if(n%10 == 0)
        count -= 1;
    for(int i=0;i<count+3;i++){
        printf("%d",6);
    }
    printf("\n");
    /*
    if(n/11 != 0){
        an = an*pow(10,n/10);
        j = pow(10,n/10-1);
        for(int i=0;i<n/10;i++){
            an += 6*j;
            j/=10;
        }
    }
    if(n == 10)
        j = 0;
    else{
        an = an + ((n%10-1)*(pow(10,n/10+3)));
    }
    printf("%d\n",an);
    */
}