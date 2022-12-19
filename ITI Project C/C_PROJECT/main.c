#include "STU.h"

int quit = 0; 
int i;
int choice;
int option, delete, update;

void Main_Menu()
{
    

    printf("\n\t\t\t\t**********************************************\n");
    printf("\t\t\t\t\t  Badr School Management System   \n");
    printf("\n\t\t\t\t**********************************************\n");
    printf("\t\t\t\t\tchoose one of the following options:\n");
    printf("\t\t\t\t\tadd new student              Enter '1'\n");
    printf("\t\t\t\t\tview all Students            Enter '2'\n");
    printf("\t\t\t\t\tDelete a  Student            Enter '3'\n");
    printf("\t\t\t\t\tUpdate Student               Enter '4'\n");
    printf("\t\t\t\t\tRank Student                 Enter '5'\n");
    printf("\t\t\t\t\tStudent Score                Enter '6'\n");
    printf("\t\t\t\t\tExist the School App         Enter '7'\n");
    printf("\t\t\t\t**********************************************\n");

    printf("---> Your choice is :\n");
    scanf("%d", &choice);
    fflush(stdin);
}
void main()
{
    while (!quit)
    {
        Main_Menu();
       
        switch (choice)
        {
        case (1):
            NEW_STUDENT(&ARR_STRUCT[counter]);
            break;

        case (2):
            LIST_STUDENT();
            break;

        case (3):
            
            DELETE_STUDENT();
            break;

        case (4):
            if (counter == 0)
            {
                printf("the list is empty there is no student to edit\n\n");
            }
            else
            {
                printf("enter Sudent num you want to update\n");
                scanf("%d", &update);
                EDIT_STUDENT(&(ARR_STRUCT[update]), 0);
            }
            break;

        case (5):
            RANK_STUDENT();
            break;

        case (6):
             SCORE_STUDENT();

            break;

        case (7): 
            quit = 1;
            break;

        default:
            printf("Invalid Num. Enter number again\n");
            break;
        }
    }
}
