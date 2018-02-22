/*
 * =====================================================================================
 *
 *       Filename:  hwpam6.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/15/2018 09:39:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bo Christensen (), BowmanChristensen@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
// constants
const int NUM_PLAYERS = 5;
// Functions Prototypes
void MyRoster(int jerseyNum[] , int playerRank[]);
void MyMenu(void);
// Main Function
int main(){
int i;
int j;
char option;
int index;

// 1.0) define arrays for vaules
int jerseyNum[NUM_PLAYERS];
int playerRank[NUM_PLAYERS];    
// 1.1) capture input
    for( i = 0; i < NUM_PLAYERS; ++i )
        {
        printf("Enter player %d's jersey number:\n", i+1);
        scanf("%d", &jerseyNum[i]);
        printf("Enter player %d's rating:\n", i+1);
        scanf("%d", &playerRank[i]);
        printf("\n");
        }
// 1.2) outputting  roster
    MyRoster(jerseyNum, playerRank);
 // 2.0) display menu
    MyMenu();
    scanf(" %c", &option);
    while(option != 'q')
        {
        // 3.0) Implement the "Output roster" menu option. 
        if (option == 'o')
            {
            MyRoster(jerseyNum, playerRank);
            }
    // 4.0) Implement the "Update player rating" menu option. 
        if (option == 'u')
            {
    // Prompt the user for a player's jersey number.
            printf("Enter a jersey number: \n");
            scanf("%d", &j);
         for( i = 0; i < NUM_PLAYERS; ++i )
            {
            if( j == jerseyNum[i])
                index = i;
            }
    // Prompt again for a new rating for the player, 
            printf("Enter a new rating for player: \n");
      // change that player's rating.
            scanf("%d", &playerRank[index]);
            }

    // (5) Implement the "Output players above a rating" menu option. 
        if (option == 'a')
        {
    // Prompt the user for a rating. 
             printf("Enter a rating: \n");
            scanf("%d", &j);
            printf("ABOVE %d\n", j);
    // Print the jersey # and rating number for anything above.
            for( i = 0; i < NUM_PLAYERS; ++i )
                {
                    if(playerRank[i] > j)
                    {
                        printf("Player %d -- Jersey number: %d, Rating: %d\n"
                             , i+1, jerseyNum[i], playerRank[i]);
                    }
                } 
        }   
    // (6) Implement the "Replace player" menu option. 
        if (option == 'r')
             {
    // Prompt the user for the jersey number of the player to replace. 
                printf("Enter a jersey number: \n");
                scanf("%d", &j);
                for( i = 0; i < NUM_PLAYERS; ++i )
                {
                    if( j == jerseyNum[i])
                     index = i;
                }
    // Prompt for a new jersey and rating, 
                printf("Enter a new jersey for player: \n");
                scanf("%d", &jerseyNum[index]);
                 printf("Enter a new rating for player: \n");
                scanf("%d", &playerRank[index]);
             }
// while loop conclusion
         MyMenu();
    scanf(" %c", &option);
// end of while loop
        }
    return 0;
}
// Function Definitions

// Function display Roster
    void MyRoster(int jerseyNum[] , int playerRank[])
    {
    int i = 0;
        printf("ROSTER\n");
        for( i = 0; i < NUM_PLAYERS; ++i )
            {
                printf("Player %d -- Jersey number: %d, Rating: %d\n"
                        , i+1, jerseyNum[i], playerRank[i]);
            } 

    return;
    }
// Function display menu
    void MyMenu(void)
    {
        printf("\nMENU\nu - Update player rating\na - Output players above a rating\nr - Replace player\no - Output roster\nq - Quit\n");
        printf("\nChoose an option:\n");

    return;
    }




