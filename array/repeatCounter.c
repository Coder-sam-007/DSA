#include <stdio.h>
#include <stdlib.h>

int main()
{

    int myArr[10] = {1, 2, 5, 4, 3, 3, 4, 5, 1, 2};
    int size = sizeof(myArr) / sizeof(myArr[0]);
    int myArr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int countArr[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    printf("Your array is:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArr[i]);
    }

    printf("\n\nIn the above array the repeated elements are:\n\n");

    int count = 0, k;

    for (int j = 0; j < size; j++)
    {
        for (k = 0; k < size; k++)
        {
            if (myArr[j] == myArr[k])
            {
                countArr[j]++;
            }
        }
        for (int i = 0; i < size; i++)
        {
            if (myArr[j] == myArr2[i])
            {
                myArr2[j] = myArr[j];
            }
        }
        if (myArr2[j] <= 10)
        {
            printf(" the element %d is repeated %d times\n", myArr2[j], countArr[j]);
        }
    }

    return 0;
}