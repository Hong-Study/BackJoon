#include <stdio.h>
#include<math.h>

void Hanoi(int n, int a,int b,int c)
{
    if(n==1){
        printf("%d %d\n",a,c);
    }
    else{
        Hanoi(n-1,a,c,b);
        printf("%d %d\n",a,c);
        Hanoi(n-1,b,a,c);
    }
}
int main()
{
    int a,b;
    scanf("%d",&a);
    b = pow(2,a)-1;
    printf("%d\n", b);
    Hanoi(a,1,2,3);
}