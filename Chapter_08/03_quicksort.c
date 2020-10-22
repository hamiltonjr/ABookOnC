#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


// macros
#define swap( x, y )  { int t = x; x = y; y = t; }
#define order( x, y ) if (x > y) swap( x, y )
#define o2( x, y )    order( x, y )
#define o3( x, y, z ) o2( x, y ); o2( y, z ); o2( x, z );


// enum type
typedef enum { yes, no } yes_no;


// prototypes
static yes_no find_pivot( int *left, int *right, int *pivot_ptr );
static int *partition( int *left, int *right, int pivot);
void quicksort( int *left, int *right );
void show_array( int *a, int n ); 

        
int main()
{
    const int N = 12;
    int array[] = { 7, 4, 3, 5, 2, 5, 8, 2, 1, 9, -6, -3 };

    printf("\n\tBefore sorting:");
    show_array( array, N );

    quicksort( array, array + N - 1 );

    printf("\n\tAfter sorting:");
    show_array( array, N );

    return EXIT_SUCCESS;

}


// find pivot for quicksort
static yes_no find_pivot( int *left, int *right, int *pivot_ptr )
{
    int a, b, c, *p;

    a = *left;
    b = *( left + (right - left) / 2 );
    c = *right;

    o3( a, b, c );
    
    if (a < b)
    {
        *pivot_ptr = b;
        return yes;
    }
       
    if (b < c)
    {
        *pivot_ptr = c;
        return yes;
    }

    for ( p = left + 1; p <= right; ++p )
    {
       if ( *p != *left )
       {
           *pivot_ptr = ( *p < *left ) ? *left : *p;
           return yes;
       }
    }

    return no;
}


// partitions for quicksort
static int *partition( int *left, int *right, int pivot)
{

    while ( left <= right )
    {
        while ( *left < pivot )
        {
            ++left;
        }

        while ( *right >= pivot )
        {
            --right;
        }

        if ( left < right )
        {
            swap ( *left, *right );
            ++left;
            --right;
        }
    }

    return left;
}


// fast quichsort sorting algorithm
void quicksort( int *left, int *right )
{

    int *p, pivot;

    if ( find_pivot( left, right, &pivot ) == yes )
    {
        p = partition( left, right, pivot );
        quicksort( left, p - 1 );
        quicksort( p, right);
    }
}


// prints an array of integers
void show_array( int *a, int n )
{

    printf("\n\tarray = { %d", a[0]);
    for ( register size_t i = 1; i < n; ++i )
    {
        printf(", %d ", a[i]);
    }
    printf( "}\n\n");

}

