//Question//

//Write a C Program to calculates the area (floating point number with two decimal places) of a Circle given it’s radius (integer value).  The value of Pi is 3.14.//

#include <stdio.h>
#define PI 3.14
void main()
{
    int radius;
    float area;
   
    scanf("%d", &radius);
	area = PI * radius * radius;
printf("Area of a circle = %5.2f", area);
}
