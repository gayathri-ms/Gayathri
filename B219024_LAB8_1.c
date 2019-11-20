

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITES 4
#define NUM_CARDS  13   /* number of cards in each suite */

void ShowCard(int card);
void ShowDeck(int deck[]);
void Shuffle(int deck[]);
void Sort(int deck[]);
void Swap(int deck[], int first, int second);

int main()
{
    int deck[NUM_SUITES*NUM_CARDS];

    /* Initialize random number generator */

    srand( time(NULL) );
    
    Shuffle(deck);
    ShowDeck(deck);

    printf("\n\n");

    Sort(deck);
    ShowDeck(deck);
}


void ShowCard(int card)
{
  

    switch( card / NUM_CARDS )
    {
        case 0:
            printf("C ");
            break;
        case 1:
            printf("D ");
            break;
        case 2:
            printf("H ");
            break;
        case 3:
            printf("S ");
            break;
    }


    if( (card % NUM_CARDS) < 9 )
    {
        printf("%d", (card % NUM_CARDS)+2);
    }
    else
    {
        switch( card % NUM_CARDS )
        {
            case 9:
                printf("J");
                break;
            case 10:
                printf("Q");
                break;
            case 11:
                printf("K");
                break;
            case 12:
                printf("A");
                break;
        }
    }
}


void ShowDeck(int deck[])
{
    int suite, card;
    
    for(suite = 0; suite < NUM_SUITES; suite++)
    {
        for(card = 0; card < NUM_CARDS; card++)
        {
            ShowCard( deck[suite*NUM_CARDS + card] );
            printf("\t");
        }
        printf("\n");
    }
}



void Swap(int deck[], int first, int second)
{
    int temp = deck[first];
    deck[first] = deck[second];
    deck[second] = temp;



void Shuffle(int deck[])
{
    int card, choice;

    for(card = 0; card < (NUM_SUITES * NUM_CARDS); card++)
    {
        deck[card] = card;
    }
    
    for(card = (NUM_SUITES * NUM_CARDS)-1; card > 1; card--)
    {
        choice = rand() % card;

        Swap(deck, card, choice);
    }
}



void Sort(int deck[])
{
    int firstCard, card;

    for(firstCard = 0; firstCard < (NUM_CARDS * NUM_SUITES - 1); firstCard++)
    {
        for(card = firstCard+1; card < (NUM_CARDS * NUM_SUITES); card++)
        {
            if( deck[card] < deck[firstCard] )
            {
                Swap(deck, card, firstCard);
            }
        }
    }
}

