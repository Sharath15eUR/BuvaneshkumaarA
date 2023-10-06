//Question//

//Write a C program to count total number of digits of an Integer number (N).//

#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N); 
    int temp, count; 
count=0;
    temp=N;
    while(temp>0)
    {
        count++;
        temp/=10;
    }
     printf("The number %d contains %d digits.",N,count);
}
