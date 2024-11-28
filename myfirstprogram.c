// needed in order to include input and output 
// like printf (header file library)
#include <stdio.h>

/* int main(){  // "main" function that runs anything inside of it
// similar to Java

    printf("Hello World\n"); //printf to print to console 
    printf("I am learning C\n"); // \n prints a new line
    printf("And it is awesome");
    return 0; // ends the main function
}
*/ 

/* int main(){
    int myNum = 15;
    // OR
    int myNum2;
    myNum2 = 20;

    float myFloat = 10.23; // float type
    char myChar = 'a'; // char type

    // Format Specifiers
    printf("%d\n",myNum);
    printf("%f\n", myFloat);
    printf("%c\n", myChar);

    // Addition 
    int x = 5;
    int y = 9;
    int sumxy = x + y;
    printf("%d\n",sumxy);

    // Declaring multiple variables

    return 0;
}
*/

/*
The escape sequences:
\n allows for a new line
\t creates a horizontal tab
\\ inserts a backslash character
\" inserts a double quote character
*/

// int main(){printf("Hello World!");return 0;} 
// <-- Other way to write the above

/*int main(){
    // Declaring multiple variables
    //int x = 5, y = 6, z = 50;
    // printf("%d\n", x+y+z);

    // ex 1
    int studentID = 770777;
    int studentAge = 18;
    float feesDue = 199.20;
    char studentGrade = 'B';

    printf("The student with "
   "ID Number %d and age %d owes %f. "
    "Their grade is a %c\n", studentID, studentAge, feesDue, studentGrade);


    // area of a rectangle
    int length = 4; 
    int width = 6;
    int area;

    area =  length * width;
    printf("%d is the area of a %d by %d Rectangle\n",area, length,width);

    // Using Strings
    char myText[] = "Hello World";
    printf("%s\n", myText);

    // type conversions

    // implicit (automatic)
    int x = 5;
    int y = 6;
    float sum = x / y;

    // explicit conversion (manual)
    float sum2 = (float) y / x;

    printf("%.1f and %f", sum2, sum);

    // constants
    const int myNum3 = 15; // the variable "myNum3" will always be 15
    const int BIRTHYEAR = 2006; // good practice to capitalize constants
    
    return 0;
}

// Data Types:

int - uses %d or %i (integer) - 2 or 4 bytes
float - uses %f or %F (float) - 4 bytes
double - uses %lf (double) - 8 bytes
char - uses %c (character) - 1 byte;
String - uses %s (String) 
*/

//! Functions

 //* Declaring your own function:
float toCelcius(float fahrenheit){return (5.0/9.0)*(fahrenheit-32.0);}

/*int main() // main() is the function used to execute code.
{
    printf("Hello World!\n"); // printf() is a function used to output text
    printf("%d\n",calculateSum(6,9)); // calling a function
    return 0;
}*/

//* Example using toCelcius:
int main()
{
    float fahrenheit = 29;
    float result = toCelcius(fahrenheit);

    printf("%.2f degrees Fahrenheit in Celcius is %.2f\n", fahrenheit, result);
}




