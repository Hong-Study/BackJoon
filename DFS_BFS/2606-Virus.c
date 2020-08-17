#include<stdio.h>

int graph[101][101] = {0,};
int visit[101] = {1,1,0};
int num = 0;

void Virus(int n,int v){
    for(int i=1;i<=v;i++){
        if(graph[n][i] == 1 && visit[i] == 0){
            num++;
            visit[i] = 1;
            Virus(i,v);
        }
    }
}

int main(){
    int Com;
    int a,b;
    int V;

    scanf("%d",&Com);
    scanf("%d",&V);

    for(int i=1;i<=V;i++){
        scanf("%d %d",&a,&b);
        graph[a][b] = graph[b][a] = 1;
    }
    Virus(1,Com);
    printf("%d\n",num);
}