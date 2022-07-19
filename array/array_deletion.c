#include <stdio.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void delete (int arr[], int size, int index)
{

    for (int i = 0; i <= index; i++)
    {
        /* code */
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    display(arr, size);

    int index;
    printf("Enter the index of the array element you want to delete: ");
    scanf("%d", &index);

    delete (arr, size, index) 
    
    return 0;
}