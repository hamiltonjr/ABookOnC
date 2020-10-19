#include "prs.h"

int main()
{
    // scores
    int win_cnt = 0, lose_cnt = 0, tie_cnt = 0;

    // choices of players
    prs player_choice, machine_choice;

    // result
    outcome result;

    // seed the random number generator
    srand(time(NULL));

    // initializing with showing instructions
    prn_instructions();

    // play until player choose to quit
    while (( player_choice = select_by_player() ) != quit ) 
    {
        // options
        switch ( player_choice )
        {
            case paper:
            case rock:
            case scissors:
                machine_choice = select_by_machine();
                result = compare( player_choice, machine_choice );
                report_and_tabulate( result, &win_cnt, 
                   &lose_cnt, &tie_cnt );
                break;

            case game:
                prn_game_status( win_cnt, lose_cnt, tie_cnt );
                break;

            case instructions:
                prn_instructions();
                break;

            case help:
                prn_help();
                break;

            default:
                printf( "\n\tERROR: cannot get to it!\n\n" );
                exit( EXIT_FAILURE );

        }
    }

    // at the end, results and player status
    prn_game_status( win_cnt, lose_cnt, tie_cnt );
    prn_final_status( win_cnt, lose_cnt );
    return ( EXIT_SUCCESS );

}

