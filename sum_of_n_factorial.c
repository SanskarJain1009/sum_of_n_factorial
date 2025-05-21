#include <stdio.h>

int sum(int n){
    if(n==1) return 1;
    else return sum(n-1)+fac(n);
}

int fac(int n){
    if(n==1) return 1;
    else return fac(n-1)*n;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Output: %d", sum(n));
    return 0;
}
