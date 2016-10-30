/*
*
* Test all command and block's of C
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    printf("argv[0] is: %s\n", argv[0]);
    printf("Hello %s\n", argv[1]);

 /*  Logical condition  */   
    if (argc == 2)
    {
        printf("Hello %s\n", argv[1]);
    }
    else
    {
        printf("Hello you!\n");
    }


/*    char s1[]="Hello world!";
    char s2[];
    printf ("%s\n", s1);
    
    printf("Input your sting: ");
    gets(s2);
    printf("your sting: %s", s2);
*/

    int i, j, n;   
    for (i=0; i<argc; i++)
    {
        printf("%s\n", argv[i]);
        for(j=0, n=strlen(argv[i]); j<n; j++)
        {
            printf("%c\n", argv[i][j]);
        }
    printf("\n");
    }

/* ASCII symbols    */  
    {
        printf("ASCII: %c, \t number = %i\n", (char) i, i);
    }

        
    return 0;
}
