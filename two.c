#include<stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter first number\n");
    scanf("%d", &a);

    printf("Enter the second number\n");
    scanf("%d", &b);

    a = a*b; 
    b= a/b;    // withput 3rd variable
    a= a/b;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
