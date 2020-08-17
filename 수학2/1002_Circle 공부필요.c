#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int x1,y1,r1,x2,y2,r2;
    int count;
    double d;
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
        d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));

        if(x1 == x2 && y1 == y2){
            if(r1 == r2)
                printf("-1\n");
            else
                printf("0\n");
        }
        else if(abs(r2-r1) < d && d< (r1+r2))
            printf("2\n");
        else if(abs(r2-r1) == d || d==(r1+r2))
            printf("1\n");
        else
            printf("0\n");
    }
}