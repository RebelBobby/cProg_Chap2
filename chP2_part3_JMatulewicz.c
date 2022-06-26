/*
Joseph Matulewicz
June 25 2022   */

#include <stdio.h>

//Function per assignment
int rectArea(int len, int wid)
{
    return len * wid;
}


int main()
{//Declarations
    int len;
    int wid;
    int area;

//Input
    printf("\nRectangle Area\nEnter length and width: ");
    scanf("%d %d", &len,&wid);

//Processing calc
    area = rectArea(len, wid);

//Output    
    printf("The area of %d by %d rectangle is %d.\n", len,wid,area);

    return 0;
}

/*Test Run 1:

Rectangle Area
Enter length and width: 6 10
The area of 6 by 10 rectangle is 60.

Test Run 2:
Rectangle Area
Enter length and width: 43 3
The area of 43 by 3 rectangle is 129.

*/


