#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int findIndex(int arr[], int size, int element)
{
    int index;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            index = i + 1;
        }
    }

    return index;
}

void delete (int arr[], int size, int index)
{

    for (int i = index; i <= size; i++)
    {
        arr[i - 1] = arr[i];
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    display(arr, size);

    int element;
    printf("\nEnter any of the element from the above array you want to delete: ");
    scanf("%d", &element);

    int index = findIndex(arr, size, element);

    delete (arr, size, index);

    printf("After deletion the array is:\n");
    size--;
    display(arr, size);

    return 0;
}