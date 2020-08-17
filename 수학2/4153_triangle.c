#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
            break;
        a = pow(a,2);
        b = pow(b,2);
        c = pow(c,2);
        if(a==0 || b==0 || c==0 || a==c || b==c)
            printf("wrong\n");
        else if(c == (a+b) || a == (b+c) || b == (a+c))
            printf("right\n");
        else
            printf("wrong\n");
    }
}