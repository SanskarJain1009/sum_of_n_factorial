#include <stdio.h>

int sum(int n){
    int sum = 0;
    for(int i = 1; i<= n; i++)
    {
        int fac = 1;
        for(int j= i;j>0;j--)
        {
            fac = fac * j;
        }
        sum = sum + fac;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Output: %d", sum(n));
    return 0;
}
