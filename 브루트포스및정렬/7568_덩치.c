#include<stdio.h>
#include<stdlib.h>

typedef struct _Health{
    int weight;
    int height;
    int num;
}Health;

int main(){
    Health* p[50];
    int n;
    int king=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        p[i] = malloc(sizeof(Health));
    }
    for(int i=0;i<n;i++){
        scanf("%d %d",&p[i]->weight, &p[i]->height);
        p[i]->num = 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j)
                continue;
            else if(p[i]->weight < p[j]->weight && p[i]->height < p[j]->height){
                p[i]->num++;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",p[i]->num);
    }
    printf("\n");
}