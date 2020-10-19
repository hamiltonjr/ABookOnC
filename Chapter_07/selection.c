#include "prs.h"


// get selection of computer.
// return.: paper, rock or scissors.
prs select_by_machine()
{
    return ((prs)(rand() % 3));
}


// get selection of player.
// return.: paper, rock, scissors, instructions, 
// help or quit.
prs select_by_player()
{
    prs player_choice;
    char c;


    // input of player
    printf("\n\tInput: ");


    // trim spaces
    while (isspace(c = getchar()));


    // player choices
    switch(c)
    {
        case 'p':
            player_choice = paper;
            break;

        case 'r':
            player_choice = rock;
            break;

        case 's':
            player_choice = scissors;
            break;
        
        case 'g':
            player_choice = game;
            break;

        case 'i':
            player_choice = instructions;
            break;

        case 'q':
            player_choice = quit;
            break;

        default:
            player_choice = help;
            break;
    }

    return ( player_choice );

}

