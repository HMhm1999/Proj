#ifndef STU_H
#define STU_H
#include "BIT_Math.h"
#include "STD_Types.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STU_NUM 15

/*Counter : for counting the elements
  num_cpy : This integer gives you the system ID
  */
int counter, num_cpy;
/*declaring the struct */
typedef struct
{
    uint8 STU_NAME[60];    // Name of the student
    uint8 STU_ADDRESS[50]; // Address of the student
    uint8 STU_DOB[50];     // Date of birth
    uint32 STU_ID;         // the id of the school
    uint32 STU_PHONE_NUM;  // the phone number
    uint32 SCORE;          // Score of the stundet
    uint16 num;            // the number of the student that will be used in functions such as delete student and edit student
} STU_t;
STU_t ARR_STRUCT[STU_NUM];

void NEW_STUDENT(STU_t *obj);
void DELETE_STUDENT();
void LIST_STUDENT();
void EDIT_STUDENT(STU_t *obj, int x);
void RANK_STUDENT();
void SCORE_STUDENT();
#endif
