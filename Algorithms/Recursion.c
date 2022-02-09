/*  Recursion: Recursion is a process in which a function calls itself
    directly or indirectly.
    Explain: https://www.youtube.com/watch?v=kepBmgvWNDw
    
    Example:
           int fun()
           {
              ....
              fun();
           }

    Output: 3
*/

#include<stdio.h>
int main()
{
    int n = 3;
    printf("%d", fun(n)); // Function Call.
    return 0;
}

// Function is fun().
int fun(int n)
{
    if (n == 1)
        return 1;  // return 1 means it returns the 1 times in the function.
    else
        return 1 + fun(n - 1);
}
