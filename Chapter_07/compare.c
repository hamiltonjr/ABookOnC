#include "prs.h"


// compares player choice with computer choice for 
// decide who wins.
// param..: choices of player and computer.
// return.: status (win, tie or lose).
outcome compare( prs player_choice, prs machine_choice )
{

    outcome result;

    // tie request simpler analysis.
    if ( player_choice == machine_choice )
    {
        return ( tie );
    }

    // define result based in comparison.
    switch ( player_choice )
    {
        case paper:
            result = ( machine_choice == rock ) ? win : lose;
            break;

        case rock:
            result = ( machine_choice == scissors ) ? win : lose;
            break;

        case scissors:
            result = ( machine_choice == paper ) ? win : lose;
            break;

        default:
            printf("\n\tPROGRAMMER ERROR: unexpected choice!\n\n");
            exit( EXIT_FAILURE );
    }

    return ( result );
}

