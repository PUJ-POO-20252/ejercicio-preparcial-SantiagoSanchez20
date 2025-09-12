#include <iostream>

#include "ejercicios.h"
#include "windows.h"







void mostrarMenuPrincipal()
{
    std::cout << "===== TecnoCafe - Menu Principal =====\n";
    std::cout << "1. Calificaciones\n";
    std::cout << "2. Encuesta de cine\n";
    std::cout << "3. Secuencia de numeros ascedentes\n";
    std::cout << "4. Proximamente....\n";
    std::cout << "-1. Salir\n";    std::cout << "Seleccione una opcion: ";
}

int leerOpcionMenu()
{
    int opcion;
    std::cin >> opcion;
    while (opcion < -1 || opcion > 4)
    {
        std::cout << "Opcion invalida. Intente de nuevo (1-4): ";
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
