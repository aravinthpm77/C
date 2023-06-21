#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coefficient;
    int exponent;
    struct Node *next;
}*Polynomial1, *Polynomial2, *Polynomial3;

void createPolynomial(struct Node **Polynomial, int numberOfTerms) {
    struct Node *temp, *rear;
    int i;

    *Polynomial = (struct Node *)malloc(sizeof(struct Node));
    (*Polynomial)->next = NULL;
    rear = *Polynomial;

    for (i = 0; i < numberOfTerms; i++) {
        temp = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the coefficient for term %d: ", i + 1);
        scanf("%d", &temp->coefficient);
        printf("Enter the exponent for term %d: ", i + 1);
        scanf("%d", &temp->exponent);
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
}

void displayPolynomial(struct Node *Polynomial) {
    struct Node *temp;
    temp = Polynomial->next;
    while (temp != NULL) {
        printf("%dx^%d", temp->coefficient, temp->exponent);
        temp = temp->next;
        if (temp != NULL) {
            if (temp->coefficient > 0) {
                printf(" + ");
            } else {
                printf(" ");
            }
        }
    }
    printf("\n");
}

void subtractPolynomials(struct Node *Polynomial1, struct Node *Polynomial2, struct Node *Polynomial3) {
    struct Node *temp1, *temp2, *temp3;
    temp1 = Polynomial1->next;
    temp2 = Polynomial2->next;
    temp3 = Polynomial3;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->exponent > temp2->exponent) {
            temp3->next = (struct Node *)malloc(sizeof(struct Node));
            temp3->next->coefficient = temp1->coefficient;
            temp3->next->exponent = temp1->exponent;
            temp3->next->next = NULL;
            temp1 = temp1->next;
        } else if (temp1->exponent < temp2->exponent) {
            temp3->next = (struct Node *)malloc(sizeof(struct Node));
            temp3->next->coefficient = -temp2->coefficient;
            temp3->next->exponent = temp2->exponent;
            temp3->next->next = NULL;
            temp2 = temp2->next;
        } else {
            temp3->next = (struct Node *)malloc(sizeof(struct Node));
            temp3->next->coefficient = temp1->coefficient - temp2->coefficient;
            temp3->next->exponent = temp1->exponent;
            temp3->next->next = NULL;
        }
    }
}

