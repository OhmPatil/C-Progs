#include <stdio.h>
#include <stdlib.h>

void traverseFunc() //Traversing Program
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d of %d: ", i + 1, size);
        scanf("%d", &array[i]);
    }

    printf("\nThe elements you entered are:\n");

    for (int i = 0; i < size; i++)
    {
        printf("Element %d: %d\n", i + 1, array[i]);
    }
}

void insertionAtLast() //Insertion at end of array
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d of %d: ", i + 1, size);
        scanf("%d", &array[i]);
    }
    int element;
    printf("Enter element you want to insert at last: ");
    scanf("%d", &element);

    size++;
    array[size - 1] = element;

    printf("\nArray after insertion:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: %d\n", i + 1, array[i]);
    }
}

void insertionAtStart() //Insertion at start of array
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d of %d: ", i + 1, size);
        scanf("%d", &array[i]);
    }
    int element;
    printf("Enter element you want to insert at start: ");
    scanf("%d", &element);

    size++;
    for (int i = size; i > 1; i--)
    {
        array[i - 1] = array[i - 2];
    }
    array[0] = element;

    printf("\nArray after insertion:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: %d\n", i + 1, array[i]);
    }
}

void insertAtPosition() //Insertion at given position
{
    int pos, size, element;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: \n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Element(%d): ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter position to insert element: ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &element);
    for (int i = size - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];
    arr[pos - 1] = element;
    printf("Array after insertion: \n");
    for (int i = 0; i <= size; i++)
        printf("Element %d: %d\n", i + 1, arr[i]);
}

void deleteFromEnd() //Deletion of last element
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d of %d: ", i + 1, size);
        scanf("%d", &array[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }

    printf("\n\nDeleting element from end.....\n");
    size--;
    array[size];

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}

void deleteFromStart() //Deletion of first element
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d of %d: ", i + 1, size);
        scanf("%d", &array[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }

    printf("\n\nDeleting element from beginning.....\n");
    for (int i = 0; i < size; i++)
    {
        array[i] = array[i + 1];
    }
    size--;
    array[size];

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}

void concatenation() //Concatenation of two arrays
{
    int size1, size2;
    printf("Enter size of FIRST array: ");
    scanf("%d", &size1);
    int array1[size1];
    printf("Enter elements for FIRST array: \n");
    for (int i = 0; i < size1; i++)
    {
        printf("Enter element %d of %d: ", i + 1, size1);
        scanf("%d", &array1[i]);
    }

    printf("\nEnter size of SECOND array: ");
    scanf("%d", &size2);
    int array2[size2];
    printf("Enter elements for SECOND array: \n");
    for (int i = 0; i < size2; i++)
    {
        printf("Enter element %d of %d: ", i + 1, size2);
        scanf("%d", &array2[i]);
    }

    printf("\nConcatenating......\n");
    array1[size1 + size2];
    for (int i = size1; i < size1 + size2; i++)
    {
        array1[i] = array2[i - size1];
    }
    printf("Array after concatenation: ");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d\t", array1[i]);
    }
}

void sort(int *a, int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void mergeAfterSort() //Merge two arrays after sorting them
{
    int size1, size2;
    printf("Enter size of FIRST array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements in FIRST array: \n");
    for (int i = 0; i < size1; i++)
    {
        printf("Element %d of %d: ", i + 1, size1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of SECOND array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements in SECOND array: \n");
    for (int i = 0; i < size2; i++)
    {
        printf("Element %d of %d: ", i + 1, size2);
        scanf("%d", &arr2[i]);
    }
    int arr3[size1 + size2];
    sort(arr1, size1);
    sort(arr2, size2);
    printf("\nFIRST array: ");
    for (int i = 0; i < size1; i++)
        printf("%d\t", arr1[i]);
    printf("\nSECOND array: ");
    for (int i = 0; i < size2; i++)
        printf("%d\t", arr2[i]);
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = size1; i < size1 + size2; i++)
    {
        arr3[i] = arr2[i - size1];
    }
    sort(arr3, size1 + size2);
    printf("\nMerging arrays.....\n");
    printf("\nAfter merging: ");
    for (int i = 0; i < size1 + size2; i++)
        printf("%d\t", arr3[i]);
}

void inversion() //Invert entered array
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int array[size];
    int end = size - 1;

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d of %d: ", i + 1, size);
        scanf("%d", &array[i]);
    }

    printf("Inverting.....\n");
    for (int i = 0; i < end; i++)
    {
        if (i < end)
        {
            int temp = array[i];
            array[i] = array[end];
            array[end] = temp;
            end--;
        }
    }
    printf("Array after inversion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}

void main()
{
    int choice;
    printf("\nChoose an option from the list :\n1. Traverse through array.\n2. Insert element at end of array.\n3. Insert element at start.\n4. Insert element at given position.\n5. Delete last element of array.\n6. Delete first element of array.\n7. Concatenate two arrays.\n8. Merge two arrays after sorting.\n9. Invert entered array.\n10. Exit\n\nEnter your choice(1-10) : ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice)
    {
    case 1:
        traverseFunc();
        break;
    case 2:
        insertionAtLast();
        break;
    case 3:
        insertionAtStart();
        break;
    case 4:
        insertAtPosition();
        break;
    case 5:
        deleteFromEnd();
        break;
    case 6:
        deleteFromStart();
        break;
    case 7:
        concatenation();
        break;
    case 8:
        mergeAfterSort();
        break;
    case 9:
        inversion();
        break;
    case 10:
        printf("Exiting....\n\n");
        break;

    default:
        printf("Enter valid choice !!\n\n");
        break;
    }
}
