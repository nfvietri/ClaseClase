/*
 ============================================================================
 Name        : Clase_03.c
 Author      : Mauro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int cantNros;
int pedirNumerosYCalcular(int *maximo, int *minimo, float *promedio);

int main(void) {
	int maximo;
	int minimo;
	float promedio;
	int cantidadNumeros;
	printf("Cuantos numeros desea ingresar? \n");
	scanf("%d", &cantNros);
	if (calcularMaxMinProm(&maximo,&minimo,&promedio)==0){
		printf("Maximo: %d  Minimo: %d  Promedio: %.2f ",maximo,minimo,promedio);
	}else{
		printf("Error.");
	}
	return 0;
}

int calcularMaxMinProm(int *maximo, int *minimo, float *promedio)
{
	int retorno = 0;
	int numero;
	int acumulador = 0;
	int maximoAuxiliar;
	int minimoAuxiliar;

	for(int i = 0;i<cantNros;i++){

            printf("Ingrese un numero \n");
            scanf("%d", &numero);

            if(i==0){
                maximoAuxiliar = numero;
                minimoAuxiliar = numero;
            } else {
                if(numero > maximoAuxiliar){
                    maximoAuxiliar = numero;
                }
                if(numero < minimoAuxiliar){
                    minimoAuxiliar = numero;
                }

            }
            acumulador = acumulador + numero;
	}


	*maximo = maximoAuxiliar;
	*minimo = minimoAuxiliar;
	*promedio = (float) acumulador / (float) cantNros;
	return retorno;
}


