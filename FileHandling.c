#include <stdio.h>

void main()
{
    FILE *myfile;

    char content[100];

    myfile = fopen("C:\\Users\\ohmpa\\Documents\\VScode\\C\\Files\\textfile.txt", "r"); //Opening file
    printf("\nFile successfully opened in read mode....\n");

    fgets(content, 100, myfile); //Reading data from file
    fclose(myfile);
    printf("\nContent of the file: \n");
    printf(content);
    printf("\n\n");
}