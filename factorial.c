#include<stdio.h>
long int factorial(int n);
int main() {
    int a;
    printf("Enter a positive integer: ");
    scanf("%d",&a);
    printf("Factorial of %d = %ld",a, factorial(a));
    return 0;
}

long int factorial(int a) {
    if (a>=1)
        return a*multiplyNumbers(a-1);
    else
        return 1;
}
