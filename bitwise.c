#include<stdio.h>

int main()
{
    int result = 25 & 15;     /// binary coversion of 25 and 15   25 - 1 1 0 0 1
                              ///                                 15 - 0 1 1 1 1
                              ///                                  9   0 1 0 0 1

    printf("the result is %d",result);
    return 0;
}