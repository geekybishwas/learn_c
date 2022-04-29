#include <stdio.h>
int main()
{
    int i = 100, sum = 0;
    while (i <= 200)
    {
        printf("%d\n", i);
        sum = sum + i;
        i = i + 1;
        printf("%d is the sum\n", sum);
    }
    printf("%d is the sum\n", sum);
    return 0;
}