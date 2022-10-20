#include <conio.h>
#include <stdio.h>
#include <windows.h>

int main() {

    int max = -1;
    int min = 99999;
    int num, resto, pivote;
    int par = 0, impar = 0;
    int suma = 0, media;

    SetConsoleOutputCP(65001);

    for (int i = 1; i <= 10; i++) {
        printf("Introduce un número: ");
        scanf("%d", &num);

        pivote = num;

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }

        resto = pivote % 2;

        if (resto == 0) {
            par++;
        } else {
            impar++;
        }

        suma = suma + num;
        media = suma / 10;

    }

    printf("---------------------------- \n");
    printf("El número mayor es: %d \n", max);
    printf("El número mas pequeño es: %d \n", min);
    printf("---------------------------- \n");
    printf("Hay %d números pares.\n", par);
    printf("Hay %d números impares. \n", impar);
    printf("---------------------------- \n");
    printf("La media es: %d \n", media);

    system("pause");

}