/*
Learning C from W3Schools
*/


#include <stdio.h> // header file for getting input and output
#include <stdbool.h> // header file for importing booleans
#include <string.h> // header file for string functions for operations

/*int main(){
    // ! arithmetic operators
    int sum1 = 100 + 50;
    int difference = sum1 - 250;
    int multiplication = difference * sum1;
    int division = 50/5;
    int modulus = 15/2;
    int incremential = modulus++;
    int decrement = incremential--;

    // all operators are fairly similar to Java. && for and, || Or, and ! for Not.

    // ! Booleans
    
    bool isProgrammingFun = true; // returns 1 (true)
    bool isFishTasty = false; // returns 0 (false)

    printf("%d %d\n", isProgrammingFun, isFishTasty);

    //examples
    int myAge = 18;
    int votingAge = 18;

    //! condition statements

    if (myAge>=votingAge)
    {
        printf("Old enough to vote!");
    } else{
        printf("Not old enough to vote.");
    }

    //* Short Hand If 
    
    //instead of:
    int time = 20;
    if (time<18){
        printf("Good day");
    } else {
        printf("Good evening");
    } // you can write this instead:

    int time2 = 30;
    (time<30) ? printf("Good Day.") : printf("Good evening");
    // (condition) ? expressionTrue : expressionFalse;



    return 0;
}
*/

// int main()
// {
   /* //! switch statements (like java)
    // example:

    int day = 6; 

    switch(day)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday");  
            break;
        default:      
            printf("Invalid day of the week");
            break;
    }

    //! While and Do-While Loop:
    // while (condition) {code block};
    // do {code block} while(condition);
    // examples :                                                                          
    int i = 0;

    while (i < 10)
    {
        printf("%d",i);
        i++;
    }
    
    do 
    {
        printf("%d",i);
        i++;
    } while(i < 5);


    //! For loops and Breaks/Continues

    int j;
    for (j = 0; j < 10; j++)
    {
        if (j ==6)
        {
            break;
        }
        printf("%d\n",j);
    }

    //! Arrays and Elements of Array    
    int my_num_array[] = {1,2,3,4,5}; // initializing an array

    printf("%d\n", my_num_array[2]); // accessing the [2nd element\3rd Number]

    // changing array elements
    my_num_array[3] = 73;

    // loop through array
    int k = 0;

    for (k=0; k<4; k++)
    {
        printf("%d \n", my_num_array[k]);
    }

    // set array size
    int myNumArrS[4];

    // getting an array size
    printf("%lu\n", sizeof(my_num_array)); //* returns the byte size rather than the amount of elements - uses lu for unsigned long int

    //you can use sizeof to get an array length:
    int length = sizeof(my_num_array) / sizeof(my_num_array[0]); // works by taking the bytesize of the entire array and dividing it over the size of one individual array element to get the total amount of elements
    int num = 0;
    for (num=0; num < length; num++)
    {
        printf("%d\n", my_num_array[num]);
    }
    */

   /* //! Two Dimensional Arrays (matrices)
    // type variable[rows][columns] = { {row 0 column values}, {row 1 column values} };
    int matrix[2][3] = { {1,2,3}, {3,4,5,6} };

    // getting an element of a matrix - 
    printf("%d\n", matrix[0][2]); // matrix[row value][column value]

    // looping through a 2D array
    int num2,num3;

    for (num2=0; num2 < 2; num2++)
    {
        for (num3=0; num3 < 3; num3++)
        {
            printf("%d ", matrix[num2][num3]);
        }
    }
    */
   /*
    // ! Creating Strings

    char greetings[] = "Hello World!";

    printf("%c\n", greetings[0]);

    // looping through a string

    int length = sizeof(greetings) / sizeof(greetings[0]);
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%c\n", greetings[i]);
    }

    // * String Functions - need to include string header file
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet)); //strlen function gets string length

    char str1[20] = "Hello ";
    char str2[] = "World!";

    strcat(str1,str2); // concatenates the two strings and saves to the first given

    printf("%s\n", str1);

    char string1[] = "Hello";
    char string2[] = "Hello";
    char string3[] = "Hi";

    printf("%d\n", strcmp(str1,str2)); // strcmp compares the first string to the second, returns 0 if equal and otherwise if not equal


}
*/

int main()
{
   /* //! Getting user input
    int myNum; // initialize a variable to store the user number

    printf("Type a number: \n"); // asking user to type a number

    scanf("%d", &myNum); // use scanf method to get user input and save to variable

    printf("The number given was: %d", myNum); // printing out the obtained number

    // * multiple inputs
    char myChar;
    printf("Type a number and a character and press enter: \n");

    scanf("%d %c", &myNum, &myChar);

    // * Taking String Input and scanf Limitations
    // scanf sees spaces as terminating characters

    // Create a string
    char firstName[30];

    // Ask the user to input some text
    printf("Enter your first name: \n");

    // Get and save the text
    scanf("%s", firstName);

    // Output the text
    printf("Hello %s", firstName);

    // ---------------------------

    // * Use fgets to read a line of text with arguments: sizeof(string_name),stdin
    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    // Type your full name: John Doe
    // Hello John Doe
*/
    //! Memory Address
    int myAge = 18;
    printf("%p\n", &myAge); // use %p (pointer value format specifier), &myAge is often called a pointer
    // uses the & reference operator, the result represents where the variable is stored  (in hexadecimal form)

    int* ptr = &myAge; //* use * operator to make a pointer, variable "ptr", the pointer stores the address of myAge
    printf("%p\n", ptr); // result of this matches with previous as we match the two

    // Dereference:
    printf("%d\n", *ptr);
    

    //! 
    return 0;
}