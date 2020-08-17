#include<stdio.h>
typedef struct Point{
    int x;
    int y;
}point;
int main(){
    int count;
    int x;
    int y;
    point temp;
    point p1[100000];

    scanf("%d",&count);
    for(int i=0;i<count;i++){
        scanf("%d %d",&x,&y);
        p1[i].x = x;
        p1[i].y = y;
    }
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){
            if(p1[i].x > p1[j].x){
                temp = p1[j];
                p1[j] = p1[i];
                p1[i] = temp;
            }
        }
        if(p1[i].x == p1[i-1].x){
                if(p1[i].y < p1[i-1].y){
                    temp = p1[i];
                    p1[i] = p1[i-1];
                    p1[i-1] = temp; 
                }
            }
    }
    for(int i=0;i<count;i++){
        printf("%d %d\n",p1[i].x,p1[i].y);
    }
}
//시간초과 뜬다 시벌?