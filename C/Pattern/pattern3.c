
#include <stdio.h>
int main()
{
    int i, j, rows, k = 0;
    printf("Enter the number of rows: \n");
    
    // taking input for number of rows
    scanf("%d", &rows);
    
    // Outer loop to handle number of rows
    for (i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            // Printing spaces
            printf("  ");
        }
        for(k=0;k<= (2*i - 1);k++)
        {
            printf("*");
        }
        // Ending line after each row
        printf("\n");
    }

  /*      *
        ***
      *****
    *******
  *********
***********     */
    return 0;
}
