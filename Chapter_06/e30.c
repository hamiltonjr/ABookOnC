#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define ALPHABET_SIZE 26 

// prototypes
void encode(char *p, char *e);
void decode(char *e, char *p);
int search(char *s, char c);


// encryption table
char encoded[] = 
    "LjJHIbwGXWvgAthMzrxVuPcBToksKZmeQNlfnSyYaRCEqFiODpdU"; 


int main()
{
    char plain[] = "I love apples";
    char enc[15];


    // initialize enc with zeroes
    memset(enc, 0, 15);


    // encode and show
    encode(plain, enc);
    printf("\n\tPlain text...: %s\n", plain);
    printf("\tEncoded text.: %s\n", enc);


    // decode back and show
    decode(enc, plain);
    printf("\n\tEncoded text.: %s\n", enc);
    printf("\tPlain text...: %s\n\n", plain);


    return EXIT_SUCCESS;

}




void encode(char *p, char *e)
{
    int len = strlen(p);
    register size_t i;

    for (i = 0; i < len; ++i)
    {
        char c = p[i];
        if (c >= 'A' && c <= 'Z')
        {
            e[i] = encoded[c - 'A'];
        } else if (c >= 'a' && c <= 'z')
        {
            e[i] = encoded[ALPHABET_SIZE + c - 'a'];
        } else
        {
            e[i] = c;
        }
    }

    encoded[i] = '\0';
}



void decode(char *e, char *p)
{
    int len = strlen(e);
    register size_t i, j;

    for (i = 0; i < len; ++i)
    {
        char c = e[i];

        // only alphabetic are decoded
        if (!isalpha(c))
        {
            p[i] = c;
            continue;
        }

        
        // search encoded
        j = 0;
        while (encoded[j] != c) j++;

            
        // decode
        if (0 <= j && j < ALPHABET_SIZE)
        {
            p[i] = j + 'A';
        } else if (ALPHABET_SIZE <= j && j < 2*ALPHABET_SIZE)
        {
            p[i] = j - ALPHABET_SIZE + 'a';
        }
    }
}

