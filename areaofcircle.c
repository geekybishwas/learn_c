// #include <stdio.h>
// int main()
// {
//     int a, b, c, x;
//     printf("Enter any numbers\n");
//     scanf("%d%d%d", &a, &b, &c);
//     x = (a > b && a > c) ? a : (b > a && b > c ? b : c);
//     printf("The largest numbers among three given numbers is %d", x);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    a % 2 == 0 ? printf("Even") : printf("Odd");
    return 0;
}