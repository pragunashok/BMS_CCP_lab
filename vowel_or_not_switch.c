#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Hello world!\n");
    printf("Enter the character to check whether character is vowel or consonant\n\n");
    scanf("%c", &c);
    switch(c)
    {
        case 'a':
        {
            printf("It is a vowel\n\n");
            break;
        }
        case 'e':
        {
            printf("It is a vowel\n\n");
            break;
        }
        case 'i':
        {
            printf("It is a vowel\n\n");
            break;
        }
        case 'o':
        {
            printf("It is a vowel\n\n");
            break;
        }
        case 'u':
        {
            printf("It is a vowel\n\n");
            break;
        }
        default :
        {
            printf("It is a consonant\n\n");
        }
    }
    return 0;
}
