// #include <stdio.h>
// int main()
// {
//     int i;
//     for (i = 20; i <= 30; i = i + 1)
//     {
//         printf("%d\n", i %= 0);
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int i;
    for (i = 20; i <= 30; i = i + 1)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int counter;
//     printf("Even numbers between 1 to 100\n");
//     for (counter = 1; counter <= 100; counter++)
//     {
//         if (counter % 2 == 0)
//         {
//             printf("%d ", counter);
//         }
//     }
//     return 0;
// }