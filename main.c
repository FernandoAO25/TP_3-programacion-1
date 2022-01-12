#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#include "abm.h"
#include "funciones.h"
#include "html.h"
#include "validar.h"

int main()
{
    Pelicula datosDePelicula;
    int opcion = 0;
    char auxMenu[MAX];

    do
    {
        mostrarMenu();

        printf("Ingrese una opcion del menu: ");
        scanf("%s", &auxMenu);

        if (validarNumero(auxMenu) == 0)
        {
            system("cls");
            printf("\nLO INGRESADO NO ES UN NUMERO!!\n");
        }
        else
        {
            opcion = atoi(auxMenu);

            switch (opcion)
            {
            case 1:
                system("cls");
                printf("Entre al case 1\n");

                alta(&datosDePelicula);

                break;
            case 2:
                system("cls");
                printf("Entre al case 2\n");
                baja();

                break;
            case 3:
                system("cls");
                printf("Entre al case 3");
                modificar();
                break;
            case 4:
                system("cls");
                printf("Entre al case 4\n");
                generarPage();
                printf("Apretar para abrir page\n");
                system("pause");
                system("index.html");
                break;
            case 5:
                system("cls");
                readArchive();
                 break;
            case 6:
              opcion = 6;
                break;
            default:
                system("cls");
                printf("\nNO ES OPCION DEL MENU\n");
            }
        }

    } while (opcion != 6);

    return 0;
}

