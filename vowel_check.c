#include <stdio.h>
int main() {
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
    {
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("Character is a vowel");
        else 
            printf("Character is a consonant");
   else
        printf("The input is not an alphabet");
    return 0;
}
