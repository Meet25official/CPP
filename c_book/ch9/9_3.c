// Write a progaram to extract a portion of a character string and print the extracted string. Assume that m characters are extracted, starting with the nth character.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int n, m;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter the starting position (n): ");
    scanf("%d", &n);
    printf("Enter the number of characters to extract (m): ");
    scanf("%d", &m);
    char extracted[m+1];
    strncpy(extracted, str + n - 1, m);
    extracted[m] = '\0';
    printf("Extracted string: %s\n", extracted);
    return 0;
}