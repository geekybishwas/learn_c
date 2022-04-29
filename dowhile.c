// #include <stdio.h>

// int main()
// {

//     /* local variable definition */
//     int a = 10, sum = 0;

//     /* do loop execution */
//     do
//     {
//         printf("value of a: %d\n", a);
//         a = a + 1;
//         sum = sum + a;
//     } while (a < 20);
//     printf("%d", sum);

//     return 0;
// }
// exit()
#include <stdio.h>
int main()
{
    int i = 100, sum = 0;
    do
    {
        printf("%d\n", i);
        sum = sum + i;
        i = i + 1;
    } while (i <= 200);
    printf("%d", sum);
    return 0;
}