//Question - 1

//Write a C Program to Count Number of Uppercase and Lowercase Letters in a given string. The given string may be a word or a sentence.

#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);
  for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            upper++;
        } else if (ch[i] >= 'a' && ch[i] <= 'z') {
            lower++;
        }
    }
printf("Uppercase Letters : %d\n", upper); 
   printf("Lowercase Letters : %d", lower); 
 
   return (0);
}
