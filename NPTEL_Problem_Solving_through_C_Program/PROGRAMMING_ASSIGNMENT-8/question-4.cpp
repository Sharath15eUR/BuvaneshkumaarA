//Question

//Write a C Program to reverse a given word using function. e.g. INDIA should be printed as AIDNI

#include<stdio.h>
#include<string.h>

void reverse(char[], int, int);
    int main()
    {
        char str1[20];
        scanf("%s", str1); 
     

        reverse(str1, strlen(str1), 0);
        printf("The string after reversing is: %s", str1);
        return 0;
}
 
void reverse(char str1[], int len, int i)
{
  char temp;
  for(int i=0; i<len/2; i++)
  {
    temp = str1[i];
    str1[i] = str1[len-i-1];
    str1[len-i-1] = temp;
  }
  str1[len]='\0';
}
