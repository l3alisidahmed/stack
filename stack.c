#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    int nbr_n, cpt;

    // nbr_n: size of your pile      //cpt: calculer how node in your pile

    printf("how manny node do you want: ");
    scanf("%d", &nbr_n);

    myStack *head = (myStack *)malloc(sizeof(myStack)); // head: pointeur qui pointe sur le premiere node in your pile
    printf("give the value: ");
    scanf("%d", &head->data);
    head->next = NULL;

    cpt = 0;

    /*_____________________remplir votr pile_____________________*/

    while (!(estPlieneP(cpt, nbr_n - 1)))
    {
        head = pushP(head);
        cpt++;
    }

    /*_____________________affiche votr pile_____________________*/

    while (!(estVideP(head)))
    {
        printf("%d", nodeTopP(head));
        head = popP(head);
    }

    return 0;
}