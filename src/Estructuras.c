/*
 ============================================================================
 Name        : Estructuras.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Coche {
	char matricula[7];
	char marca[50];
	char modelo[50];
	int cv;

};

int size(struct Coche taller[]) {
	return sizeof(taller) / sizeof(taller[0]);
}

int buscar(struct Coche taller[], char matricula[]) {
	int i = 0;
	do {
		if (strcasecmp(matricula, taller[i].matricula) == 0)
			return i;
	} while (++i < size(taller));
}

int main(void) {
	int i = 0;
	int num = 3;
	struct Coche taller[num];
	for (i = 0; i < num; i++) {
		printf("\nIntroduce los datos del coche %d", i + 1);
		printf("\nMatricula: ");
		gets(taller[i].matricula);
		printf("\nMarca: ");
		gets(taller[i].marca);
		printf("\nModelo: ");
		gets(taller[i].modelo);
		printf("\nCV: ");
		scanf("%d", &taller[i].cv);
		setbuf(stdin, NULL);

	}

	for (i = 0; i < num; i++) {
		printf("%s %s %s %d", taller[i].matricula, taller[i].marca,
				taller[i].modelo, taller[i].cv);
	}
	void ordenar(struct Coche taller[]) {
		int i, j;
		for (i = 0; i < 3; i++) {
			for (j = i + 1; j < 3; j++) {
				if (taller[i].cv < taller[j].cv) {
					struct Coche aux = taller[i];
					taller[i] = taller[j];
					taller[j] = aux;
				}
			}

		}

	}
	return EXIT_SUCCESS;
}
