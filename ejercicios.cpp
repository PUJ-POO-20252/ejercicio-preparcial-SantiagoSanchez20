//
// Created by duque on 10/09/2025.
//
#include <iostream>
#include "ejercicios.h"
#include <windows.h> //Para poder permitir los caracteres especiales
#include <vector> //Para poder hacer listas

void ascedente(int& numero) {


    std::cout << "\n ----------Bienvenidos al programa de la secuencia ascedente---------- \n" << std::endl;
    std::cout << "\n Digite la cantidad de numeros para la secuencia (n): " <<std::endl;
    std::cin >> numero;

    if (numero == 0) {
        std::cout << "Se necesita un numero mayor que 0, para iniciar la secuencia!!!" << std::endl;
        return; // si cumple sigue la secuencia
    }
    int numeroAnterior;
    int NumeroActual;
    std::vector<int> numerosGuardados;


    // Manejar el primer numero separado para poder empezar a comparar
    std::cout << "Digite el primer numero: " << std::endl;
    std::cin >> numeroAnterior;

    numerosGuardados.push_back(numeroAnterior);//Guardamos el valor inicial para luego mostrarlo en pantalla , vector es un tipo de
    // lista donde almacena los numeros, en la secuencia.
    //Ciclo para pedir el numero siguiente y compara con el anterior para saber si es ascedente
    for (int i = 1; i < numero; i++) {
        std::cout << "Digite el numero No: " << i+1 <<std::endl;
        std::cin >> NumeroActual;
        if (NumeroActual < numeroAnterior) {
            std::cout << "\n !Error! El numero que acabas de ingresar no es mayor, que el numero anterior digitado" << NumeroActual;
            std::cout << "La secuencia se ha roto, intentalo de nuevo";
            return;
        }
        numerosGuardados.push_back(NumeroActual);
        numeroAnterior = NumeroActual;


        }
    std::cout << "\n ------Proceso terminado-------" << std::endl;
    std::cout << "\n Felicidades, la lista de los numeros ingresados son en forma ascedente son: " << std::endl;
    for (int numeros : numerosGuardados) { //Ciclo para recorrer la lista numeroGuardados, donde este almacena los numero digitados
        //realizados por el usuario.
        std::cout << numeros << std::endl;
    }

}

//Funcion para hacer la encuesta del ejercicio 2
void Encuesta(int& cantidadPersonas){
    // SetConsolo permite los caracteres especiales
    SetConsoleOutputCP(65001);

    int edad; //variable para pedir en consola
    cantidadPersonas = 0;  // variable tipo contador
    int calificacion;
    float SumaCali;
    int rangoEdad;
    int calificacionPerfecta = 0; // Contador para calificacion si es 10

    std::cout << "\n -----Bienvenidos a la encuesta de sastifaccion del cine---------\n";

    // Ciclo While que recorre lo que hay dentro de este preguntando la edad y su respectiva calificacion. Termina hasta que edad sea 0.
    while  (true){
        std::cout <<"Ingrese la edad del No " << cantidadPersonas + 1 << std::endl;
        std::cin >> edad;
        if (edad >= 18 && edad <= 25){
            //Aumentamos contador de rango Edad
            rangoEdad++;

        }

        // Condicion para mostrar resultados
        if (edad == 0)
        {
            float PromedioCalificacion = SumaCali/cantidadPersonas; // agarra lo que se guarda en la variable cantidadPersonas para hacer el promedio
            std::cout << "Cerrando programa mostrando resultados......\n";
            std::cout << "Cantidad de personas encuestadas son: \n" << cantidadPersonas << std::endl;
            std::cout << "El promedio de las calificaciones son: \n" << PromedioCalificacion << std::endl;
            std::cout << " Cantidad de encuestados entre 18 y 25 años:\n " << rangoEdad << std::endl;
            std::cout << "Cantidad de calificacion perfecta (10): " << calificacionPerfecta << std::endl;

            break;
        }
        std::cout << "Ingrese la calificacion del No" << cantidadPersonas + 1 << std::endl;
        std::cin >> calificacion;

        // Condicional para calificacion perfecta si es 10
        if (calificacion == 10)
        {
            calificacionPerfecta++; // suma si en el caso de que la calificacion sea 10
        }
        //suma la cantidad de notas queu vaya ingresando el usuario en suma SumaCali.
        SumaCali += calificacion;
        //Suma 1 cada vez que se cumpla la condicion mientras sea diferente de 0
        cantidadPersonas++;
    }

}

// Ejercicio 1 de las calificaciones
void calificaciones( float& CantidadNotas){


    //Se crean variables tipo contador como acumuladores dentro del for.
    int Aprobados = 0;
    int Reprobados = 0;
    int Excelente = 0;

    //Variables para Guardar valores ingresados por el usuario.
    //SumaNotas es un contador que va sumando cada valor dada por el usuario
    float NotaActual;
    float SumaNotas;

    std::cout << "\n -----Bienvenidos al programa de calificaciones de los estudiantes -------\n" << std::endl;

    std::cout << "Ingrese la cantidad de estudiantes del curso: " << std::endl;
    //Pide en consola la cantidad de estudiantes.
    std::cin >> CantidadNotas;

    for (int i = 0; i < CantidadNotas; i++){
        std::cout << "Ingrese la nota del estudiante No" << i + 1 << std::endl;
        std::cin >> NotaActual;
        SumaNotas += NotaActual;

        if (NotaActual > 3.0){

            Aprobados++;
        }else
        {
            Reprobados++;
        }

        if (NotaActual >= 4.5){
            Excelente++;
        }
    }


    if (CantidadNotas > 0){

        float promedio = SumaNotas / CantidadNotas;
        std::cout << "Cantidad de Estudiantes Aprobados son:\n " << Aprobados << std::endl;
        std::cout << "Cantiadad de Estudiantes Reprobados son:\n" << Reprobados << std::endl;
        std::cout << "Cantidad de Estudiantes Excelente son:\n" << Excelente << std::endl;
        std::cout << "El promedio del curso es: " << promedio << std::endl;
    }else
    {
        std::cout << "No se han ingresado la cantidad de notas " << std::endl;
    }



}



