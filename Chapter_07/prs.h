#ifndef PRS_H
#define PRS_H

#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// enum type: commands of player
enum prs
{
     paper, rock, scissors, game, help, instructions, quit 
};
typedef enum prs prs;


// enum type: status of game
enum outcome
{
    win, lose, tie, error
};
typedef enum outcome outcome;


// prototypes
outcome compare( prs player_choice, prs matching_choice );
void prn_final_status( int win_cnt, int lose_cnt );
void prn_game_status( int win_cnt, int lose_cnt, int tie_cnt );
void prn_help();
void prn_instructions();
prs select_by_machine();
prs select_by_player();
void report_and_tabulate( outcome result, int *win_cnt_ptr, int *lose_cnt_ptr, int *tie_cnt_ptr );

#endif // PRS_H

