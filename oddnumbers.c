// #include <stdio.h>
// int main()
// {
//     printf("Even numbers from 500 to 1000\n");
//     int i = 500, sum = 0;
//     do
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d\n", i);
//             sum = sum + i;
//             i = i + 1;
//         }
//         i = i + 1;

//     } while (i <= 1000);
//     printf("The sum is %d", sum);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, sum = 0;
    printf("Even numbers from 500 to 1000\n");
    for (i = 500; i <= 1000; i = i + 1)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            sum = sum + i;
            i = i + 1;
        }
    }
    printf("The sum of odd numbers from 500 to 1000 is %d", sum);
    return 0;
}