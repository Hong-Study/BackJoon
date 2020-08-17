#include<stdio.h>
#include<math.h>

#define TRUE 1
#define FALSE 0

int main(){
    int x,y,w,h;
    int a[4];
    int min;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    min = x;
    a[0] = x;
    a[1] = y;
    a[2] = w-x;
    a[3] = h-y;
    for(int i=0;i<4;i++){
        if(min > a[i])
            min = a[i];
    }
    printf("%d\n",min);
}