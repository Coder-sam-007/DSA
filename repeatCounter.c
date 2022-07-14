#include <stdio.h>
int main()
{
    int myArr[12] = {1, 2, 3, 2, 4, 5, 2, 4, 2, 4, 5, 3};

    printf("my array is: ");

    for (int i = 0; i < 12; i++)
    {
        printf(" %d  ", myArr[i]);
    }
    int num;

    printf("\n\nEnter the number you want to check the repeatation of: ");
    scanf("%d", &num);

    int count = 0;

    for (int i = 0; i < 12; i++)
    {
        if (myArr[i] == num)
        {
            count++;
        }
    }

    printf("\nIn the above array %d is repeated %d times", num, count);

    return 0;
}
