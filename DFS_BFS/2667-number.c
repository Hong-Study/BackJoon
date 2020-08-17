#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int **house;
int **visit;
int x = 0;
int count[1001] = {0,};
int vectX[4] = { 0,0,1,-1 };
int vectY[4] = { 1,-1,0,0 };

void DFS(int a,int b,int v){
    int nex, ney;

    count[x]++;
    visit[a][b] = 1;
    for(int i=0;i<4;i++){
        nex = a+vectX[i];
        ney = b+vectY[i];
        if (nex >= 0 && nex < v && ney >= 0 && ney < v){
            if(house[nex][ney] == 1 && visit[nex][ney] == 0)
                DFS(nex,ney,v);
        }
    }
}

int main(){
    int N;
    char num[30];
    char c;
    int temp;
    scanf("%d",&N);
    house = (int**)malloc(sizeof(int*)*N);
    visit = (int**)malloc(sizeof(int*)*N);
    for(int i=0;i<N;i++){
        house[i] = (int*)malloc(sizeof(int)*N);
        visit[i] = (int*)malloc(sizeof(int)*N);
    }
    
    for(int i=0;i<N;i++){
        scanf("%s",num);
        for(int j=0;j<N;j++){   
            c = num[j];
            house[i][j] = atoi(&c);
            visit[i][j] = 0;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(house[i][j] == 1 && visit[i][j] == 0){
                DFS(i,j,N);
                x++;
            }
        }
    }

    printf("%d\n",x);
    for(int i = 0 ; i < x ; i ++) {             //정렬
        for(int j = i ; j < x ; j ++) {
            if(count[j]<count[i]) {
                temp = count[i];
                count[i] = count[j];
                count[j] = temp;
            }
        }
    }
    for(int i=0;i<x;i++){
        printf("%d\n",count[i]);
    }
}

//뭐가 틀렸을까?