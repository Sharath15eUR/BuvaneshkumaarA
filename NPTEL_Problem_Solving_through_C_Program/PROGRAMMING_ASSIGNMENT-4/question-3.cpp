//Question//

//Write a program to find the factorial of a given number using while loop//

#include<stdio.h>
void main()
{
    int n;
    long int fact; 
    scanf("%d",&n);  


int i;
    for (int i = 1; i <= n; i++) {
        fact =fact * i;
    }

    printf("The factorial of %d is: %ld", n, fact);

}
