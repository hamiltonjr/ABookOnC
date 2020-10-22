#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#define N 11


// define type when
enum when { before, after };
typedef enum when when;


// prototypes
int cmp( const void *vp, const void *vq );
void fill_array( double *a, int n ); 
void prn_array( when val, double *a, int n );


int main()
{
    
    double a[N];

    // fill array with random doubles
    fill_array( a, N );

    // show array before sorting
    prn_array( before, a, N );

    // sorting
    qsort( a, N, sizeof(double), cmp );

    // show array after sorting
    prn_array( after, a, N );

    return EXIT_SUCCESS;

}


// 
int cmp( const void *vp, const void *vq )
{
    
    const double *p = vp;
    const double *q = vq;
    double diff = *p - *q;

    // ascending order
    return (( diff < 0 ) ? (( diff == 0 ) ? -1 : 0 ) : +1 );

    // descending order
    // return (( diff >= 0 ) ? (( diff > 0 ) ? -1 : 0 ) : +1 );

}


// 
void fill_array( double *a, int n ) 
{
    
    srand(time(NULL));

    for (register size_t i = 0; i < n; ++i)
    {
        a[i] = ( rand() % 1001 ) / 10.0;
    }

}

void prn_array( when val, double *a, int n )
{

    printf("%s\n%s%s\n", "---",
            (( val == before ) ? "Before " : "After " ), "sorting:");
    
    for (register size_t i = 0; i < n; ++i)
    {
       if ( i % 6 == 0 ) 
       {
           putchar( '\n' );
       }
       printf("%10.1f", a[i] );
    }

    putchar( '\n' );

}

