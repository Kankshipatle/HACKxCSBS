// C program to find the non repeating character in the string

#include <stdio.h>
#include <string.h>

// Function to find the position of the first non repeating character
char nonRepeatingChar(char s[]) 
{
    int n = strlen(s);

    // check over each character in the string does it repeat or not
    int i,j;
    for (i = 0; i < n; ++i)
    {
        int found = 0;

        // Check if the character repeats in the rest of the string
        for (j = 0; j < n; ++j) 
        {
            if (i != j && s[i] == s[j]) 
            {
                found = 1;
                break;
            }
        }
        // If character does not repeat then return it
        if (found == 0)
            return s[i];
    }

    // If no repeated character is found then return '$' sign
    return '$';
}

int main() 
{
    char s1[] = "swiss";
    char s2[] = "assam";
    char s3[] = "porsche";
    
    printf("\n%c", nonRepeatingChar(s1));
    printf("\n%c", nonRepeatingChar(s2));
    printf("\n%c", nonRepeatingChar(s3));
    return 0;
}