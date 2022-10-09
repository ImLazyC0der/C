#include<stdio.h>
long int MultiplyNum(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, MultiplyNum(n));
    return 0;
}

long int MultiplyNum(int n) {
    if (n>=1)
        return n*MultiplyNum(n-1);
    else
        return 1;
}
