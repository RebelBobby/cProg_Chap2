/*
Joseph Matulewicz
June 25 2022   */

#include <stdio.h>

int main() 
{//Declaration
    int num;

//inputs
    printf("Check even or odd\nEnter an int:\n");
    scanf("%d", &num);

//Processing Calc / output
    if(num % 2 != 0)
        printf("%d is not even.", num);
    else
        printf("%d is even.", num);
    
    return 0;
}

/*
Test run:

Check even or odd
Enter an int:
7
7 is not even.
*/