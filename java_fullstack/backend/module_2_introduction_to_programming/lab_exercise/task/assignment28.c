#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[200];
    char longestWord[50] = "";
    char currentWord[50];
    int i = 0, j = 0;
    int maxLen = 0, wordCount = 0;

   
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

   
    while (1) {
        char ch = sentence[i];

       
        if (isspace(ch) || ch == '\0' || ispunct(ch)) {
            if (j > 0) { 
                currentWord[j] = '\0';  
                wordCount++;

                
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(longestWord, currentWord);
                }

                j = 0; 
            }

            if (ch == '\0') break; 
        }
        else {
            currentWord[j++] = ch; 
        }

        i++;
    }

    printf("\nTotal words: %d\n", wordCount);
    printf("Longest word: %s (Length: %d)\n", longestWord, maxLen);

}

