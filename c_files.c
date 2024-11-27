#include <stdio.h>

//! Files
/**/

// Declaring a pointer of the type FILE
int main()
{
    FILE *fptr; // FILE type with a pointer to the variable fptr

    fptr = fopen("filename.txt", "r"); // open a file , filename.txt, and read (r) - *can also use w, and a for write and append respectfully*

    fclose(fptr); // Good practice to close the file.

    // * Creating a file if it does not exist.

    fptr = fopen("filename2.txt", "w");
   
    //* Writing text to a file
    fprintf(fptr, "Some Text.");
    fclose(fptr);
    // Writing to the file if it already exists will delete old content and insert new.
    fptr = fopen("filename2.txt","w");
    fprintf(fptr, "Different Text.");
    fclose(fptr);

    //* Appending new content to the end of the file
    fptr = fopen("filename.txt", "a"); // the "a" mode will also create a new file with appended content if the file does not exist.
    fprintf(fptr,"\n Happy Song - BMTH");
    fclose(fptr);

    // * Reading a file
    fptr = fopen("filename.txt", "r"); // open the file in read mode
    char str[100]; // declare a string that can hold up to 100 characters (or enough as you think needed for the file reading)

    // fgets(str, 100, fptr); - first parameter says where to store the content, second specifies max size, and third requires a file pointer that is used to read the file (fptr)
    //* Keep in mind this only reads the first line ^

    printf("%s\n", str); // print the newly filled string

    //* To get multiple lines throughout, we can use a while loop:
    while (fgets(str,100,fptr))
    {
        printf("%s\n", str);
    }

    fclose(fptr); // close the file

    //? Good practice to look for unreadable file errors by using a conditional to check:
    /*if (fptr == NULL)
    {
        printf("Not able to open the file.");
    }
    */



    return 0;
}