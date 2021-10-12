#include <stdio.h>

void main()
{
    int array[100], *max, size;

    printf("\nEnter size of array: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d of %d: ", i + 1, size);
        scanf("%d", &array[i]);
    }

    max = array;
    *max = *array;

    for (int i = 1; i < size; i++)
    {
        if (*(array + i) > *max)
        {
            *max = *(array + i);
        }
    }

    printf("\nMaximum number is: %d\n\n", *max);
}