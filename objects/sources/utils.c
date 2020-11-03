#include "../../includes/utils.h"
#define NCOLS 17
#define MAXWORDS 50

// swaps integer values.
void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}


// prints array of integers
void show_array(int *a, int n)
{
    printf("a = [");
    for (unsigned int i = 0; i < n - 1; ++i)
    {
        printf("%d, ", a[i]);
        if ((i != 0) && (i % NCOLS == 0))
        {
            printf("\n\t");
        }
    }
    printf("%d]\n\n", a[n - 1]);
}


// bubble sort
void bubble(int *a, int n)
{
    bool changed;

    for (unsigned int i = 0; i < n - 1; ++i)
    {
        changed = false;
        for (unsigned int j = n - 1; j > i; --j)
        {
            if (a[j - 1] > a[j])
            {
                swap(&a[j - 1], &a[j]);
                changed = true;
            }
        }

        if (!changed)
        {
            break;
        }
    }
}

// merge subarrays of integers 
void merge(int *a, int *b, int *c, int m, int n)
{
    int i = 0, j = 0, k = 0;

    // merge element by element
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        } else 
        {
            c[k++] = b[j++];
        }
    }

    // append remainder of a
    while (i < m)
    {
        c[k++] = a[i++];
    }

    // append remainder of b
    while (j < n)
    {
        c[k++] = b[j++];
    }
}


// sorts array of integers using mergesort
void mergesort(int *key, int n)
{
    int j, k, m, *w;

    // 
    for (m = 1; m < n; m *= 2)
        /* without body */;

    if (n < m)
    {
        printf("\tERROR: array size not a power of 2 - bye!\n");
        exit(EXIT_FAILURE);
    }

    // allocate memory for w.
    w = calloc(n, sizeof(int));
    assert(w != NULL);

    // merge 2 subarrays of key in an subarray of w.
    for (k = 1; k < n; k *= 2)
    {
        for (j = 0; j < n - k; j += 2 * k)
        {
            merge(key + j, key + j + k, w + j, k, k);
        }

        // write w back into key
        for (j = 0; j < n; ++j)
        {
            key[j] = w[j];
        }
    }

    // free memory
    free(w);
}

// sort words
void sort_words(char **w, int n)
{
    for (unsigned int i = 0; i < n; ++i)
    {
        for (unsigned int j = i + 1; j < n; ++j)
        {
            if (strcmp(w[i], w[j]) > 0)
            {
                char aux[MAXWORDS];
                strcpy(aux, w[j]);
                strcpy(w[j],w[i]);
                strcpy(w[i], aux);
            }
        }
    }
}

// show a list of words
void show_words(char **w, int n)
{
    for (unsigned int i = 0; i < n; ++i)
    {
        printf("\t%s\n", w[i]);
    }
}

