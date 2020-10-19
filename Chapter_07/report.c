#include "prs.h"


// show result and compute total.
// param..: result and all pointers to counters 
// (pointers are needed because counters values
// are modified here).
void report_and_tabulate( outcome result, int *win_cnt_ptr,
        int *lose_cnt_ptr, int *tie_cnt_ptr )
{

    switch ( result )
    {
        case win:
            ++*win_cnt_ptr;
            printf( "%27sYou win.\n", " ");
            break;

        case lose:
            ++*lose_cnt_ptr;
            printf( "%27sYou lose.\n", "" );
            break;

        case tie:
            ++*tie_cnt_ptr;
            printf( "%27sA tie.\n", "" );
            break;

        default:
            printf( "\n\tPROGRAMMER ERROR: unexpected result.\n\n" );
            exit( EXIT_FAILURE );

    }
}

