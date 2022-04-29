#include <stdio.h>
int main()
{
    int sum = 0;
    int counter[10];
    int count = 10;
    float average;
    printf("Enter any 10 grades\n");
    for (int i = 0; i < count; i++)
    {
        printf("%2u>", i + 1);
        scanf("%d", &counter[i]);
        sum = +counter[i];
    }
    average = sum / count;
    printf("The average value of it is %f \n", average);
    return 0;
}