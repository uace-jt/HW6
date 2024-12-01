#include <stdio.h>
#include <stdlib.h>

struct card {
    const char* face;
    const char* suit;
};

int main()
{
    struct card aCard;
    struct card* cardPtr;

    aCard.face = "Ace";
    aCard.suit = "Spades";

    cardPtr = &aCard;

    
    printf("%s of %s\n", aCard.face, aCard.suit);       
    printf("%s of %s\n", cardPtr->face, cardPtr->suit); 
    printf("%s of %s\n", (*cardPtr).face, (*cardPtr).suit);

    system("pause");
    return 0;
}
