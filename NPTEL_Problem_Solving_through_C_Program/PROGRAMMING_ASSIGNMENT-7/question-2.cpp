//Question - 2

//Write a C program to find the sum of all elements of each row of a matrix.

#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); 
    scanf("%d",&c); 

    for(i=0;i< r;i++) 
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
 for (i = 0; i < r; i++) {
        int rowSum = 0;
        for (j = 0; j < c; j++) {
            rowSum += matrix[i][j];
        }
       printf("%d\n", rowSum);
    }

    return 0;
}
}

