#include<stdio.h>

int main()
{
    int a,b,c;
    
    printf("Enter the side a\n");
    scanf("%d",&a);

    printf("Enter the side b\n");
    scanf("%d",&b);

    printf("Enter the side c\n");
    scanf("%d",&c);

    if (a==b && b ==c)
    {
        printf("Triangle is equilitral");
    }
    else if (a==b || b==c || c==a)
    {
        printf("Triangle is isoceles");
    }
    else
    {
        printf("Triangle is scalane");
    }
    
    
}