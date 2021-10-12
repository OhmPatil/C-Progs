#include <stdio.h>

void main()
{
    int marks, number_of_students;
    char name[50];

    printf("\nEnter number of students: ");
    scanf("%d", &number_of_students);

    FILE *myfile = fopen("C:\\Users\\ohmpa\\Documents\\VScode\\C\\Files\\StudentData.txt", "w");
    printf("\n");

    for (int i = 0; i < number_of_students; i++)
    {
        printf("Enter student name: ");
        scanf("%s", &name);
        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(myfile, "%d. %s - %d\n", i + 1, name, marks);
    }
    fclose(myfile);
}