#ifndef SORT_H
#define SORT_H

// headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// constants
#define ALPHABET_SIZE 26
#define N 11    // maximum for float array 
#define M 32    // maximum for char array

// macros
#define fractional_part(x) ( x - (int)x )
#define random_char()  ( rand() % ALPHABET_SIZE + 'a' ) 
#define random_float() ( rand() % 100 / 10.0 )

#define FILL(array, sz, type)             \
    if ( strcmp(type, "char") == 0 )      \
    {                                     \
        for ( i = 0; i < sz; ++i)         \
        {                                 \
            array[i] = random_char();     \
        }                                 \
    } else                                \
    {                                     \
        for ( i = 0; i < sz; ++i)         \
        {                                 \
            array[i] = random_float();    \
        }                                 \
    }                                     \

#define PRINT(array, sz, ctrl_s)          \
    for ( i = 0; i < sz; ++i)             \
    {                                     \
        printf(ctrl_s, array[i]);         \
    }                                     \
    putchar( '\n' );                      \

// prototypes
int compare_fractional_part( const void *, const void * );
int lexico( const void *, const void *);

#endif // SORT_H

