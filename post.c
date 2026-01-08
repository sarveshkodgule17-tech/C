#include<stdio.h>

int main()
{
    int i =1;
    int j ,temp;

    temp = i;
    ++i;
    i = temp;

    printf("%d\n",i);
}