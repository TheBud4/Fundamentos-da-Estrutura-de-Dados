/*
4. [PONTEIRO COM STRUCT] Escreva um programa em C que leia duas datas (dia, me s e
ano) e calcule a diferença de dias entre as duas datas. O ca lculo da diferença de dias entre
as datas deve ser implementado como uma funça o.
Utilize um tipo de dado heterogeneo (struct) para representar a data
*/

#include <stdio.h>

struct dat {
    int dia;
    int mes;
    int ano;

};


void date_diff(struct dat* pt_d1) {

    printf("%d", ((pt_d1)->dia + (pt_d1)->mes * 30 + (pt_d1)->ano * 365) - ((pt_d1 + 1)->dia + (pt_d1 + 1)->mes * 30 + (pt_d1 + 1)->ano * 365));

}

void main() {
    int i = 0;
    struct dat* pt_data;
    pt_data = (struct dat*)malloc(2 * sizeof(struct dat));


    for ( i = 0; i < 2; i++) {
        printf("Data no tipo dd mm aa: ");
        scanf("%d %d %d", &(pt_data + i)->dia, &(pt_data + i)->mes, &(pt_data + i)->ano);
    }

    date_diff(pt_data);

}

