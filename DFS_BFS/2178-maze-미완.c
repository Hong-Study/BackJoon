#include<stdio.h>
#include<stdlib.h>

int map[100][100] = {0,};
int queea[10001] = {0,};
int queeb[10001] = {0,};
int vectX[4] = { 0,0,1,-1 };
int vectY[4] = { 1,-1,0,0 };

void BFS(int x,int y){
    int front=0,rear=0,popa,popb;
    int nex, ney;

    while(front<rear){
        popa = queea[front];
        popb = queeb[front];
        front++;
        for(int i=0;i<4;i++){
            nex = popa+vectX[i];
            ney = popb+vectY[i];
            if(nex == x-1 && ney == (y-1)){
                map[nex][ney] = map[popa][popb]+1;
                return;
            }
            if (nex >= 0 && nex < y && ney >= 0 && ney < x){
                if(map[nex][ney] == 1){
                    queea[rear] = nex;
                    queeb[rear] = ney;
                    rear++;
                    map[nex][ney] = map[popa][popb]+1;
                }
            }
        }
    }
}

int main(){
    int N,M;
    char num[101];
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++){
        scanf("%s",num);
        for(int j=0;j<M;j++){
            char c = num[j];
            map[i][j] = atoi(&c);
        }
    }

    BFS(N,M);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%d ",map[i][j]);
        }
        printf("\n");
    }
    printf("%d\n",map[N-1][M-1]);
}