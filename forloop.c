#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 100; i <= 120; i = i + 1)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
