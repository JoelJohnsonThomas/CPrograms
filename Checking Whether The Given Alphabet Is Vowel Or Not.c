# include<stdio.h>
int main()
{
    char c ;
    printf("Enter Any Alphabet:\n");
    scanf("%c",&c);
    switch(c)
    {    
    case 'a':
    case 'A':
        printf("%c is a vowel\n",c);
        break;
    case 'e':
    case 'E':
        printf("%c is a vowel\n",c);
        break;
    case 'i':
    case 'I':
        printf("%c is a vowel\n",c);
        break;
    case 'o':
    case 'O':
        printf("%c is a vowel\n",c);
        break;
    case 'u':
    case 'U':
        printf("%c is a vowel\n",c);
        break;
    default:
        printf("%c is not a vowel",c);
        break;
    
    }        


}
