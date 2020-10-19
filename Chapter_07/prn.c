#include "prs.h"

// show player situation at the end of game.
// param..: victories and looses of player.
void prn_final_status( int win_cnt, int lose_cnt )
{

    if ( win_cnt > lose_cnt )
    {
        printf("\n\tCONGRATULATIONS! - you won!\n\n");
    } else if ( win_cnt == lose_cnt )
    {
        printf("\n\tA DRAW! - you tried!\n\n");
    } else
    {
        printf("\n\tSORRY! -  you lost!\n\n");
    }

}

// show current player situation.
// param..: victories / ties / looses.
void prn_game_status( int win_cnt, int lose_cnt, int tie_cnt )
{

    // compute totsl of games
    int total = win_cnt + lose_cnt + tie_cnt;

    // show game status
    printf("\n\t---------------------------------------------\n");
    printf("\tGAME STATUS\n");
    printf("\t---------------------------------------------\n");
    printf("\tWin...: %4d\n", win_cnt);
    printf("\tLose..: %4d\n", lose_cnt);
    printf("\tTie...: %4d\n", tie_cnt);
    printf("\tTotal.: %4d\n", total);
    printf("\t---------------------------------------------\n\n");

}


// show game help.
void prn_help()
{

    printf("\n\t---------------------------------------------\n");
    printf("\tHELP\n");
    printf("\t---------------------------------------------\n");
    printf("\tThe following characters can be used for input:\n");
    printf("\t\t p - for paper\n");
    printf("\t\t r - for rock\n");
    printf("\t\t s - for scissors\n");
    printf("\t\t g - print the game status\n");
    printf("\t\t h - print this help\n");
    printf("\t\t i - print the instructions\n");
    printf("\t\t q - quit\n\n");
    printf("\t---------------------------------------------\n\n");

}


// show game instructions.
void    prn_instructions()
{

    printf("\n\t---------------------------------------------\n");
    printf("\tPAPER, ROCK, scissors                         \n");
    printf("\t---------------------------------------------\n");
    printf("\tIn ths game, p is for paper, r is for rock   \n");
    printf("\tand s is for scissors.                        \n");
    printf("\tThe player and the machine can choose one of \n");
    printf("\tths options. If the two choices are the same,\n");
    printf("\tthen the game is a tie. Otherwise:           \n");
    printf("\tpaper cover the rock (a win for paper),      \n");
    printf("\trock breaks the scissors (a win for rock),    \n");
    printf("\tscissors cut the paper (a win for scissors).   \n\n");
    printf("\tThere are other allowable inputs:            \n");
    printf("\tg for game status (the number of wins so far,\n");
    printf("\th for help,                                  \n");
    printf("\ti for instructions,                          \n");
    printf("\tq to quit.                                   \n");
    printf("\tThe game is played repeatly q is typed.      \n\n");
    printf("\tGood luck!                                   \n");
    printf("\t---------------------------------------------\n\n");

}

