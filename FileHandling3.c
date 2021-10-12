#include <stdio.h>
#include <string.h>

void main()
{
    char str[300];

    FILE *myfile = fopen("C:\\Users\\ohmpa\\Documents\\VScode\\C\\Files\\Reverse.txt", "w"); //writing original data to file
    printf("\n\nWriting data to file.....\n");
    fputs("I am learning file handling.", myfile);
    fclose(myfile);

    printf("Reading data from file.....\n");
    myfile = fopen("C:\\Users\\ohmpa\\Documents\\VScode\\C\\Files\\Reverse.txt", "r"); //reading data from file
    fgets(str, 100, myfile);
    fclose(myfile);

    printf("Writing reversed data to file.....\n\n");
    myfile = fopen("C:\\Users\\ohmpa\\Documents\\VScode\\C\\Files\\Reverse.txt", "w"); //writing reversed data to file
    fprintf(myfile, "Original content: %s", str);
    fprintf(myfile, "\nReversed content: %s", strrev(str));
    fclose(myfile);
}