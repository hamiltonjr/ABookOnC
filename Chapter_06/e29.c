/**
 * Exercise 29.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAXWORDS 100
#define WORDLEN 10

/**
 *
 */


// lists of words
char eng_words[MAXWORDS][WORDLEN];
char port_words[MAXWORDS][WORDLEN];


int main()
{
    unsigned int i;
    char word[WORDLEN];


  
    // open english words file
    FILE *fp_eng;
    if ((fp_eng = fopen("english.txt", "r")) == NULL)
    {
        printf("ERROR: english words file cannot be open\n");
        exit(EXIT_FAILURE);
    }


    // read english word file and save in memory
    i = 0;
    while (!feof(fp_eng))
    {
        fscanf(fp_eng, "%s\n", word);
        strcpy(eng_words[i], word);
        i++;
    }


    fclose(fp_eng);


    // open portuguese words file
    FILE *fp_port;
    if ((fp_port = fopen("portuguese.txt", "r")) == NULL)
    {
        printf("ERROR: portuguese words file cannot be open\n");
        exit(EXIT_FAILURE);
    }
    

    // read portuguese word file and save in memory
    i = 0;
    while (!feof(fp_port))
    {
        fscanf(fp_port, "%s\n", word);
        strcpy(port_words[i], word);
        i++;
    }
    
    
    fclose(fp_port);

    /* TEST TEST TEST
    printf("%d words read.\n", i+1);
    for (i = 0; i < MAXWORDS; ++i)
    {
        printf("%d: %s   ->   %s\n", i+1, eng_words[i], port_words[i]);
    }
    TEST TEST TEST */


    // read data from stdin
    while (scanf("%s ", word) != EOF)
    {
        // search english word for find index
        // portuguese tranlation fo this word
        // is in the same index
        bool found = false;
        for (i = 0; i < MAXWORDS; ++i)
        {
            // if word is in eng_words, i is
            // the index
            if (strcmp(eng_words[i], word) == 0)
            {
                printf("%s ", port_words[i]);
                found = true;
                break;
            }
        }

        // if not found put ---
        // dictionary is limited
        if (!found)
        {
            printf("--- ");
        }
    
    }


    // the end
    return EXIT_SUCCESS;

}

