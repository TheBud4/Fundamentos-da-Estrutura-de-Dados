/* 
[PONTEIRO COM STRUCT] Escreva um programa em C que define uma struct para
representar um ponto cartesiano (x, y), leia dois pontos e calcule a dista ncia entre os
pontos.
O calculo da distancia entre os dois pontos deve ser implementado como uma funçao.
Utilize um tipo de dado heterogeneo (struct) para representar o ponto cartesiano
(ponto2D).
*/
#include <stdio.h>
#include <math.h>

struct pnt_car{
    int x, y;

};

void dist(struct pnt_car *pt){

    float *eixo_x = (float *) malloc(sizeof(float));
    float *eixo_y = (float *) malloc(sizeof(float));

    *eixo_x  = pow(   ((pt)->x - (pt+1)->x), 2);
    *eixo_y  = pow(   ((pt)->y - (pt+1)->y), 2);


    printf("%f", pow(*eixo_x + *eixo_y, 0.5) );

}

void main(){

    struct pnt_car xy;
    struct pnt_car *pt_xy = (struct pnt_car *) malloc(sizeof(struct pnt_car) * 2);

    for(int i=0;i<2;i++){
        scanf("%d %d", &(pt_xy+i)->x, &(pt_xy+i)->y);
    }

    dist(pt_xy);
}
