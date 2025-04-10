#include <stdio.h>
int main(){
    int A;
    long long int B;
    double C;
    char D;
    scanf("%d %lld %lf", &A, &B, &C); 
    scanf(" %c", &D); 
    printf("%d\n%lld\n%lf\n%c\n", A, B, C, D); 
    return 0;
}