#include<stdio.h>
#include<stdlib.h>
int main(){
    int num = 4001;
    int a;
    int count;
    int tos=0;
    int bin[8001] = {0,};

    int second = 0;
    int mos = 0;
    int to = 0;
    int max = 0;
    int min = 4000;
    double result = 0;
    
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        scanf("%d",&a);
        if(max<a)
            max = a;
        else if(min>a)
            min = a;
        result += a;
        if(a == 0)
            bin[0]++;
        else
            bin[a]++;
    }
    result = result/(double)count;
    count += count%2;
    count /= 2;
    for(int i=0;i<8001;i++){
        if(bin[i] != 0 && num == 4001){
            tos += bin[i];
            if(tos >= count){
                num = i;
            }
        }
        if(bin[i] == to)
            second += 1;
        if(bin[i] !=0 && bin[i] > to){
            to = bin[i];
            mos = i;
            second = 0;
        }
        else if(bin[i] !=0 && bin[i] == to && second == 1){
            mos = i;
        }
    }
    printf("\n");
    printf("%.0f\n%d\n%d\n%d\n",result,num,mos,max-min);
}