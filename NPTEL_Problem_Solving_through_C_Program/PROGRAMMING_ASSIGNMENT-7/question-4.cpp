//Question - 4

//Write a C program to print Largest and Smallest Word from a given sentence. If there are two or more words of same length, then the first one is considered. 

//A single letter in the sentence is also consider as a word

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
    
scanf("%[^\n]s", str);

char smallestWord[100] = {0}, largestWord[100] = {0};
    char currentWord[100] = {0}, maxWord[100] = {0}, minWord[100] = {0};
    
    int i = 0, j = 0;
    
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            currentWord[j++] = str[i];
        } else {
            currentWord[j] = '\0';
            
            if (strlen(currentWord) > 0) {
                if (strlen(currentWord) < strlen(minWord) || strlen(minWord) == 0) {
                    strcpy(minWord, currentWord);
                }
                if (strlen(currentWord) > strlen(maxWord)) {
                    strcpy(maxWord, currentWord);
                }
            }
            
            j = 0;
        }
        i++;
    }
    
    currentWord[j] = '\0';
    if (strlen(currentWord) > 0) {
        if (strlen(currentWord) < strlen(minWord) || strlen(minWord) == 0) {
            strcpy(minWord, currentWord);
        }
        if (strlen(currentWord) > strlen(maxWord)) {
            strcpy(maxWord, currentWord);
        }
    }
  printf("Largest word is: %s\n", maxWord);
    printf("Smallest word is: %s", minWord);
  
    
    return 0;
}
