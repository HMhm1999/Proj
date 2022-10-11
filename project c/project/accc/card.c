#include "card.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

EN_cardError_t getCardHolderName(ST_cardData_t* cardData)
{
    uint8_t card_holder_name[25];
    printf(" Enter Your name: ");
    _flushall();
    scanf("%[^\n]", card_holder_name);


    if ( strlen(card_holder_name) < 20 || strlen(card_holder_name) > 24  || card_holder_name == NULL)
    {   printf(" wrong name ");
    return WRONG_NAME;
}
    strcpy(cardData->cardHolderName, card_holder_name);

    return OK;
}




EN_cardError_t getCardExpiryDate(ST_cardData_t* cardData)
{
    uint8_t card_expiry_data[6];
    printf(" Enter  expiry date: ");
    _flushall();

    scanf("%s", card_expiry_data);

    if (strlen(card_expiry_data) != 5  ||  card_expiry_data[2] != '/' || card_expiry_data == NULL)
    {
        printf(" wrong date ");
        return WRONG_EXP_DATE;

    }
        
    strcpy(cardData->cardExpirationDate, card_expiry_data);

    return OK;

}










EN_cardError_t getCardPAN(ST_cardData_t* cardData)
{
    uint8_t accountNumber[20];

    printf("Enter your PAN: ");
    _flushall();

    scanf("%s", accountNumber);

    if (strlen(accountNumber) > 19 || strlen(accountNumber) < 16 || accountNumber == NULL)
    {  printf(" wrong date ");
    return WRONG_PAN;
}
    strcpy(cardData->primaryAccountNumber, accountNumber);

    return OK;
}