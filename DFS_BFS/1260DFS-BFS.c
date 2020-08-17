#include<stdio.h>
#include<stdlib.h>

int line[1001][1001] = {0,};
int DFSvisit[1001]={0,};
int BFSvisit[1001]={0,};
int quee[1001];

void DFS(int n,int N){
    DFSvisit[n] = 1;
    printf("%d ",n);

    for(int i=1;i<=N;i++){
        if(line[n][i] == 1 && DFSvisit[i] == 0)
            DFS(i,N);
    }
}
void BFS(int n,int N){
    int front=0,rear=0,pop;

    printf("%d ",n);
    quee[0] = n;
    rear++;
    BFSvisit[n] = 1;

    while(front<rear){
        pop = quee[front];
        front++;

        for(int i=0;i<=N;i++){
            if(line[pop][i] == 1 && BFSvisit[i] == 0){
                printf("%d ",i);
                quee[rear] = i;
                rear++;
                BFSvisit[i] = 1;
            }
        }   
    }
}
int main(){
    int N,M,V;
    int a,b;
    scanf("%d %d %d",&N,&M,&V);
    for(int i=0;i<M;i++){
        scanf("%d %d",&a,&b);
        line[a][b] = line[b][a] = 1;
    }
    DFS(V,N);
    printf("\n");
    BFS(V,N);
}