#include "../includes/utils.h"
#define MAXWORD 50
#define N 300

int main()
{
    char word[MAXWORD];
    char *w[N];
    unsigned int n, i;

    // overture
    printf("\n");
    printf("\t=========================================\n");
    printf("\t      SORTING WORDS USING BUBBLE SORT    \n");
    printf("\t=========================================\n");
    printf("\tThis program reads stdin and saves words \n");
    printf("\tand sort it using Bubble Sort Algirithm. \n");

    for (i = 0; scanf("%s", word) == 1; ++i)
    {
        int len = strlen(word);

        // aboid too many words
        if (i >= N)
        {
            printf("ERROR: too many words.\n");
            exit(EXIT_FAILURE);
        }

        // avoid too long words
        if (len >= MAXWORD)
        {
            printf("ERROR: too big word.\n");
            exit(EXIT_FAILURE);
        }

        // allocate memory for words 
        // and avoid null pointer
        w[i] = calloc(len + 1, sizeof(char));
        if (w[i] == NULL)
        {
            printf("ERROR: out of memory.\n");
            exit(EXIT_FAILURE);
        }

        // add word into the list
        strcpy(w[i], word);
    } 

    // sort the list and show
    n = i;
    printf("\n\t This is the words before sorting...   \n");
    show_words(w, n);

    printf("\n\t This is the words after sorting...    \n");
    sort_words(w, n);
    show_words(w, n);

    printf("\n\t=======================================\n\n");
    return EXIT_SUCCESS;
}

