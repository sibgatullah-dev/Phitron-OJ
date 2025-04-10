//You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.

#include <stdio.h>
int main(){
    int A;
    long long int B;
    double C;
    char D;
    scanf("%d %lld %lf", &A, &B, &C); 
    scanf(" %c", &D); 
    printf("%d\n%lld\n%.2lf\n%c\n", A, B, C, D); 
    return 0;
}