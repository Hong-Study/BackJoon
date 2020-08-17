#include<stdio.h>
#define PI 3.14159265358979
int main(){
    double R, S1, S2;
    scanf("%lf", &R);
    S1 = PI * R * R;
    S2 = R * R * 2;
 
    printf("%.6f\n", S1);
    printf("%.6f\n", S2);
    return 0;
}