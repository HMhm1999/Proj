#include "STU.h"
/*Declaring Nothing : Nothing is for deleting equalizing the element we want to delete with*/
STU_t Nothing = {
    "none",
    'none',
    'none',
    0,
    0,
    0};
int comparator(const void *p, const void *q)
{
    return strcmp(((STU_t *)p)->STU_NAME,
                  ((STU_t *)q)->STU_NAME);
}
/*declaring helping integers(counter : counting the elements we submitted , num_cpy:) */
counter = 0;
num_cpy = 0;

/*Editing the students*/
void EDIT_STUDENT(STU_t *obj, int x)
{

    NEW_STUDENT(&(ARR_STRUCT[x]));
    int *ptr;
    ptr = &counter;
    --*ptr;
}

/*Ranking the students*/
void RANK_STUDENT()
{
    STU_t Compare = {'none',
                     'none',
                     'none',
                     0,
                     0,
                     0};
    if (counter == 0)
    {
        printf("no student in the list\n\n");
    }
    else
    {
        for (int i = 0; i <= counter; i++)
        {
            for (int j = i; j < counter; j++)
            {
                if (((ARR_STRUCT[i].SCORE) < (ARR_STRUCT[j].SCORE)))
                {
                    Compare = ARR_STRUCT[i];
                    ARR_STRUCT[i] = ARR_STRUCT[j];
                    ARR_STRUCT[j] = Compare;
                }
            }
        }
        printf("no student in the list\n");
    }
}

/*function to score the students*/
void SCORE_STUDENT()
{
    if (counter == 0)
    {
        printf("no student in the list\n\n");
    }
    else
    {
        for (int i = 0; i < counter; i++)
        {
            // printf("%d",counter);
            printf("enter student score %d\n", i);

            SCORE_SINGLE_STUDENT(&ARR_STRUCT[i]);
            // scanf("%d", &(ARR_STRUCT[i]->SCORE));
        }
    }
}

/*working on single student*/
void SCORE_SINGLE_STUDENT(STU_t *obj)
{
    fflush(stdin);
    scanf("%d", (&obj->SCORE));
}

/*Declaring New stundents*/
void NEW_STUDENT(STU_t *obj)
{

    printf("Enter Student Name\n");
    fflush(stdin);
    scanf("%[^\n]s", &obj->STU_NAME);
    printf("Enter Student Date of Birth\n");
    fflush(stdin);
    gets(obj->STU_DOB);
    printf("Enter Student Address\n");
    fflush(stdin);
    scanf("%[^\n]s", &obj->STU_ADDRESS);
    printf("Enter Student ID\n");
    fflush(stdin);
    scanf("%d", &obj->STU_ID);
    printf("Enter Student Phone Num\n");
    fflush(stdin);
    scanf("%u", &obj->STU_PHONE_NUM);
    printf("New Student is Recorded,Go to list to view their System ID\n");
    counter++;
    num_cpy++;
    obj->num = num_cpy;
}

/*deleting the students*/
void DELETE_STUDENT()
{
    
    int flag = 0 ; 
	int a; //a stores the id of the student to be deleted 
	printf("Enter The ID of Student that you want to delete :\n");
	scanf("%d" , &a);
	fflush(stdin);
    for (int k = 0; k <= STU_NUM; k++) 
	{
        if (a == ARR_STRUCT[k].STU_ID)  //if the id exists in the struct 
		{
    ARR_STRUCT[k].STU_NAME[0] = '\0';
    *ARR_STRUCT[k].STU_ADDRESS = '\0';
    *ARR_STRUCT[k].STU_DOB = '\0';
    ARR_STRUCT[k].STU_ID = 0;
    ARR_STRUCT[k].STU_PHONE_NUM = 0;
    ARR_STRUCT[k].SCORE = 0;
      break;
        }
    }
    if (flag!=0)
    {
        printf("The Student is removed Successfully\n");
    }
    else
    {   
        printf("The Id Was Not Founded");
    }        
}



/*printing the students*/
void PRINT_STUDENT(STU_t *obj)
{
    if (counter == 0)
    {
        printf("no student in the list\n\n");
    }

    else if (obj->STU_NAME[0] != '\0')
    {
        printf("student num(system id)   %d\n", obj->num);
        printf("Id :    %s\n", obj->STU_NAME);
        printf("Address :    %s\n", obj->STU_ADDRESS);
        printf("Date of birth :   %s\n", obj->STU_DOB);
        printf("School ID :   %d\n", obj->STU_ID);
        printf("Phone number :   0%u\n", obj->STU_PHONE_NUM);
        printf("Score is :   %u\n", obj->SCORE);
    }
    else
    {
    
    }
}

/*Listing the students in all conditions*/
void LIST_STUDENT()
{
    if (counter == 0)
    {
        printf("no student in the list\n\n");
    }
    else
    {
        for (int i = 0; i < counter; i++)
        {

            PRINT_STUDENT((&ARR_STRUCT[i]));
        }
    }
}
