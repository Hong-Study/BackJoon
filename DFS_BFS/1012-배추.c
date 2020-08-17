#include<stdio.h>
#include<string.h>
int map[50][50] = {0, };
int visit[50][50] = {0, };
int num = 0;
int vectX[4] = { 0,0,1,-1 };
int vectY[4] = { 1,-1,0,0 };

void DFS(int a,int b,int x1,int y1){
    int nex, ney;

    visit[a][b] = 1;

    for(int i=0;i<4;i++){
        nex = a+vectX[i];
        ney = b+vectY[i];
        if (nex >= 0 && nex < y1 && ney >= 0 && ney < x1){
            if(map[nex][ney] == 1 && visit[nex][ney] == 0)
                DFS(nex,ney,x1,y1);
        }
    }
}

int main(){
    int x,y;
    int T;
    int M,N,K;
    
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d %d",&M,&N,&K);
        for(int j=0;j<K;j++){
            scanf("%d %d",&y,&x);
            map[x][y] = 1;
        }
        for(int a = 0; a < N ; a++){
            for(int b = 0; b < M; b++){
                if(map[a][b] == 1 && visit[a][b] == 0){
                    DFS(a,b,M,N);
                    num++;
                }
            }
        }
        printf("%d\n",num);
        num = 0;
        memset(map,0,sizeof(map));
        memset(visit,0,sizeof(visit));
    }
}