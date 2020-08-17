#include<stdio.h>
#include<math.h>

#define TRUE 1
#define FALSE 0

int main(){
    int a[3][2];
    int x,y;
    for(int i=0;i<3;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    if(a[0][0] == a[1][0])
        x = a[2][0];
    else if(a[0][0] == a[2][0])
        x = a[1][0];
    else if(a[1][0] == a[2][0])
        x = a[0][0];

    if(a[0][1] == a[1][1])
        y = a[2][1];
    else if(a[0][1] == a[2][1])
        y = a[1][1];
    else if(a[1][1] == a[2][1])
        y = a[0][1];

    printf("%d %d\n",x,y);
}