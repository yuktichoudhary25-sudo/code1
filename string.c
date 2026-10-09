#include <stdio.h>
#include <string.h>
#include <ctype.h> // Required for tolower()

int main() {
    int v = 0, c = 0, s = 0, d = 0, i;
    char str1[100];
    
    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin); // Replaced unsafe gets() with fgets()
    
    // Remove the trailing newline character added by fgets, if present
    str1[strcspn(str1, "\n")] = '\0';

    for (i = 0; str1[i] != '\0'; i++) {
        char ch = tolower(str1[i]); // Fixed variable declaration and logic
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            v++;
        } else if (ch >= 'a' && ch <= 'z') { // Used else if to exclude vowels from consonants
            c++;
        } else if (ch >= '0' && ch <= '9') {
            d++;
        } else if (ch == ' ') { // Fixed condition ' ' which was always true
            s++;
        }
    }
    
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("Spaces: %d\n", s);
    printf("Digits: %d\n", d);
    
    return 0;
}
