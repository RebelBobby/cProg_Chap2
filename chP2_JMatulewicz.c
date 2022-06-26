/*
Joseph Matulewicz
June 25 2022   */

#include <stdio.h>

int main() 
{//Declaration:
    int num1; 
    int num2;
    int qtnt;
    int rmndr;
//Input
    printf("Enter 2 int's to see their qtnt and rmndr:\n");
    scanf("%d %d", &num1,&num2);
//Processing calc
    qtnt = num1 / num2;
    rmndr = num1 % num2;
//Output
    printf("%d/%d has value %d\n", num1,num2,qtnt);
    printf("%d%%%d has value %d\n", num1,num2,rmndr);
    return 0;
}

/*
Test Run 1:

Enter 2 int's to see their qtnt and rmndr:
13 4
13/4 has value 3
13%4 has value 1

Test Run 2:

Enter 2 int's to see their qtnt and rmndr:
13 5
13/5 has value 2
13%5 has value 3




*/