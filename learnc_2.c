#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//! Local Scope with Functions
/*void myFunction()
{
    int x = 5;
    printf("%d",x); // The variable printed, x, will only be usable in this function, 
}*/

int sum(int k);

int main()
{
    //! Recursion
    int result = sum(10);
    printf("%d", result);
    return 0;
}

int sum(int k)
{
    if (k>0)
    {
        return k + sum(k-1); //* if k > 0 , then add k to k-1 (10+sum(9) -> 10 + (9+sum(8)) -> ...)
    } else {
        return 0;
    }
}