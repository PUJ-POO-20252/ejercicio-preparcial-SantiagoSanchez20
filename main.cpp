#include <iostream>

#include "ejercicios.h"
#include "windows.h"





//Ignorar este mensaje, ando configurando el repositorio, por que este fue creado personal y acabo de cambiar de repositorio


void mostrarMenuPrincipal()
{
    std::cout << "===== Ejercicios Practicas=====\n";
    std::cout << "1. Calificaciones\n";
    std::cout << "2. Encuesta de cine\n";
    std::cout << "3. Secuencia de numeros ascedentes\n";
    std::cout << "4. Tienda\n";
    std::cout << "5. Palabra \n";
    std::cout << "6. Fibonacci\n";
    std::cout << "-1. Salir\n";    std::cout << "Seleccione una opcion: ";
}

int leerOpcionMenu()
{
    int opcion;
    std::cin >> opcion;
    while (opcion < -1 || opcion > 6)
    {
        std::cout << "Opcion invalida. Intente de nuevo (1-6): ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cin >> opcion;
    }
    return opcion;
}



int main(){
    SetConsoleOutputCP(65001);
    float CantidadNotas;
    int cantidadPersonas;
    int numero;

    int opcion = 0;
    do
    {
        mostrarMenuPrincipal();
        opcion = leerOpcionMenu();

        switch (opcion)
        {
        case 1:{
                calificaciones(CantidadNotas);
                break;
        }

        case 2:{
              Encuesta(cantidadPersonas);
              break;
        }
        case 3:{
            ascedente(numero);
                    break;
        }
        case 4:{
                descuentos();
                break;
        }
                case 5: {
            palabra();
            break;
        }
            case 6 : {
            fibonacci();
            break;
        }

        case -1:
            {
                std::cout << "\nSaliendo del programa.....\n";
                break;
            }
        }
    }
    while (opcion != -1);

    return 0;
}
