#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;

} myStack;

// fonction pushP qui va remplir la pile

myStack *pushP(myStack *tete)
{
    myStack *new = (myStack *)malloc(sizeof(myStack));
    printf("give the value: ");
    scanf("%d", &new->data);
    new->next = tete;
    tete = new;

    return tete;
}

// fonction popP: delete the node in your pile

myStack *popP(myStack *tete)
{
    myStack *ptr = tete;

    tete = ptr->next;
    free(ptr);
    ptr = NULL;

    return tete;
}

// nodeTopP: sommet de pile

int nodeTopP(myStack *tete)
{
    return tete->data;
}

// estVideP: c' est une fonction verifier est ce que la pile recoit NULL

int estVideP(myStack *h)
{
    if (h == NULL)
        return 1;
    else
        return 0;
}

// estPlieneP: c'est une fonction qui verfier est ce que la pile il est pliene??

int estPlieneP(int cpt, int taille)
{
    if (cpt == taille)
        return 1;
    else
        return 0;
}
