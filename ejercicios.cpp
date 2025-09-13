//
// Created by duque on 10/09/2025.
//
#include <iostream>
#include "ejercicios.h"
#include <windows.h> //Para poder permitir los caracteres especiales
#include <vector> //Para poder hacer listas
#include <string>


/*
 *REALIZADO POR SANTIAGO SANCHEZ GIRALDO
 */

//Ejercicio 6-------------------------------------------------------------------------------------------

void fibonacci() {
    //Como la secuencia de fibunnacci crece muy rapido, es decir, basicamente definir la variable con int puede que de problemas por que la secuencia fibonacci crece muy rapidamente .
    int n;
    std::cout << "Ingrese la cantidad de valores (n) para iniciar la secuencia de fibonacci"<<std::endl;
    std::cin >> n;
    long long a = 0;
    long long b = 1;
    std::cout << "\nLos primero " << n << " numeros de Fibonacci son:\n ";
    // Generamos el el bucle para que empiece a recorre la secuencia

    for (int i = 0; i <= n; i++) {
        if (i > 0) {
            //agregamos este condicional que si i >0 , empiece a poner comas en los numeros generados
            std::cout<< ", ";
        }
        //std::cout << a imprime la secuencia de fibonacci
        std::cout << a;
        //Calculamos el siguiente numero de la secuencia
        long long siguiente = a + b;
        //Actualizamos valores cuando se hace la iteracion
        a = b;
        b = siguiente;

    }
    std::cout << std::endl; //salto de linea
}

//Ejercicio 5--------------------------------------------------------------------------------------------
/*NOTA : Profesor la verdad hice el mejor intento de hacer este punto, pero no pude encontrar la manera de hacerlo
 *sin ayuda de la IA, profe si lees esto, porfavor explica este ejercicio bien, no llegue a compreder como se usa,
 *en su totalidad.
 */
void palabra() {

    // 1. LEER LA PALABRA
    std::string palabra;
    std::cout << "Ingresa una palabra en minúsculas: ";
    std::cin >> palabra;

    bool encontrado = false; // Nos dirá si ya encontramos el carácter final

    // 2. BUCLE "DETECTIVE" PRINCIPAL (recorre cada letra con el índice 'i')
    for (int i = 0; i < palabra.length(); ++i) {

        char letraActual = palabra[i];
        bool seRepite = false; // Bandera para saber si la letraActual tiene copias

        // 3. BUCLE "AYUDANTE" (recorre la palabra de nuevo con el índice 'j' para buscar copias)
        for (int j = 0; j < palabra.length(); ++j) {

            // No queremos comparar una letra consigo misma.
            // Si i y j son iguales, estamos en la misma posición, así que la saltamos.
            if (i == j) {
                continue;
            }

            // Si encontramos una copia en otra posición...
            if (letraActual == palabra[j]) {
                seRepite = true; // Levantamos la bandera
                break; // ¡Ya no necesitamos seguir buscando! Salimos del bucle ayudante.
            }
        }

        // 4. VERIFICAR EL RESULTADO
        // Si el bucle ayudante terminó y NUNCA levantó la bandera "seRepite"...
        if (seRepite == false) {
            std::cout << "El primer carácter que no se repite es: " << letraActual << std::endl;
            encontrado = true; // Avisamos que ya terminamos
            break; // Salimos del bucle principal porque ya tenemos la respuesta
        }
    }

    // 5. MENSAJE FINAL
    // Si el bucle principal terminó y nunca encontramos un carácter único...
    if (encontrado == false) {
        std::cout << "Todos los caracteres de la palabra se repiten." << std::endl;
    }
}

//Ejercicio 4---------------------------------------------------------------------------------------------

//Apartado de precios  constantes de los productos
const int cafe = 2000;
const int avena = 3000;
const int leche = 6000;

void mostrarOpciones()
{
    std::cout << "\nBienvenido al selector de productos escoja un producto porfavor" << std::endl;
    std::cout << "1.Cafe"  << std::endl;
    std::cout << "2.Avena" << std::endl;
    std::cout << "3.Cafe" << std::endl;
    std::cout << "-1. Salir\n";    std::cout << "Seleccione una opcion: ";



}
void leerOpcionesProductos()
{
    int OpcionProducto;
    std::cin >> OpcionProducto;
    while (OpcionProducto < -1 || OpcionProducto > 3)
    {
        std::cout << "Opcion invalida. Intente de nuevo (1-4): ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cin >> OpcionProducto;
    }
}




void menuPrincipalDescuentos() {

    std::cout << "Bienvenidos al apartado de Compra de productos" << std::endl;
    std::cout << "1. Productos en venta:" << std::endl;
    std::cout << "2.Total a pagar con descuentos: " << std::endl;
    std::cout << "-1. Salir\n";    std::cout << "Seleccione una opcion: ";
}


int leerOpcionDescuentos() {
        int opcion;
        std::cin >> opcion;
        while (opcion < -1 || opcion > 2)
        {
            std::cout << "Opcion invalida. Intente de nuevo (1-2): ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cin >> opcion;
        }
        return opcion;
}
//Principal de lectura
void descuentos() {
    int opcion = 0;
    int unidadesCafe = 0;
    int unidadesAvena = 0;
    int unidadesLeche = 0;
    int totalSinDescuento = 0;
    double subTotalCafe = 0.0;
    double subTotalAvena = 0.0;
    double subTotalLeche = 0.0;


    do
    {
        menuPrincipalDescuentos();
        opcion = leerOpcionDescuentos();
        switch (opcion)
        {
        case 1:
            {
                int OpcionProducto = 0;

                std::cout << "\nHas seleccionado el Menu de Productos" << std::endl;

                do {
                    std::cout << "\nBienvenido al selector de productos escoja un producto porfavor" << std::endl;
                    std::cout << "\n"<< std::endl;

                    std::cout << "1.Cafe" << std::endl;
                    std::cout << "2.Avena" << std::endl;
                    std::cout << "3.Leche " << std::endl;
                    std::cout << "-1. Salir\n";    std::cout << "Seleccione un producto: ";
                    std::cin >> OpcionProducto;
                    switch (OpcionProducto)
                    {
                    case 1:
                        {
                            int cantidadCafe;
                            std::cout << "Precio Cafe: " << cafe << std::endl;
                            std::cout << "\nIngrese la cantidad de unidades de cafe(Unidades pequeños): " << std::endl;
                            std::cin >> cantidadCafe;
                            unidadesCafe += cantidadCafe;
                            break;


                        }
                    case 2:
                        {
                            int cantidadAvena;
                            std::cout << "Precio Avena: " << avena << std::endl;
                            std::cout << "\nIngrese la cantidad de unidades de leche(Unidades pequeños): " << std::endl;
                            std::cin >> cantidadAvena;
                            unidadesAvena += cantidadAvena;
                            break;
                        }
                    case 3:
                        {
                            int cantidadLeche;
                            std::cout << "Precio Leche: " << leche << std::endl;
                            std::cout << "\nIngrese la cantidad de unidades de leche(Unidades pequeñas): " << std::endl;
                            std::cin >> cantidadLeche;
                            unidadesLeche+= cantidadLeche;
                            break;
                        }

                        case -1: {
                            std::cout << "\n Regresando al menu productos!!";
                            break;

                        }

                    }

                }
                while (OpcionProducto != -1 );
            }
            case 2: {
                //Total sin descuento
                totalSinDescuento = (unidadesCafe*cafe) + (unidadesAvena*avena) + (unidadesLeche*leche);

                //Apartado de descuento del cafe

                if (unidadesCafe >= 1 && unidadesCafe <= 10) {
                // 0% de descuento
                    subTotalCafe = unidadesCafe * cafe;
                } else if (unidadesCafe >= 11 && unidadesCafe <= 20) {
                // 5% de descuento
                    subTotalCafe = (unidadesCafe * cafe) * 0.95;
                } else if (unidadesCafe >= 21 && unidadesCafe <= 50) {
                // 10% de descuento
                    subTotalCafe = (unidadesCafe * cafe) * 0.90;
                } else if (unidadesCafe > 50) {
                // 15% de descuento
                    subTotalCafe = (unidadesCafe * cafe) * 0.85;
                }


                //Apartado de descuento de la avena

                if (unidadesAvena >= 1 && unidadesAvena <= 10) {
                // 0% de descuento
                    subTotalAvena = unidadesAvena * avena;
                } else if (unidadesAvena >= 11 && unidadesAvena <= 20) {
                // 5% de descuento
                    subTotalAvena = (unidadesAvena * avena) * 0.95;
                } else if (unidadesAvena >= 21 && unidadesAvena <= 50) {
                // 10% de descuento
                    subTotalAvena = (unidadesAvena * avena) * 0.90;
                } else if (unidadesAvena > 50) {
                // 15% de descuento
                    subTotalAvena = (unidadesAvena * avena) * 0.85;
                }

                //Apartado total de leche
                if (unidadesLeche >= 1 && unidadesLeche <= 10) {
                // 0% de descuento
                    subTotalLeche = unidadesLeche * leche;
                } else if (unidadesLeche >= 11 && unidadesLeche <= 20) {
                // 5% de descuento
                    subTotalLeche = (unidadesLeche * leche) * 0.95;
                } else if (unidadesLeche >= 21 && unidadesLeche <= 50) {
                // 10% de descuento
                    subTotalLeche = (unidadesLeche * leche) * 0.90;
                } else if (unidadesLeche > 50) {
                // 15% de descuento
                    subTotalLeche = (unidadesLeche * leche) * 0.85;
                }

                //Valor Final a pagar
                double precioTotal = subTotalCafe + subTotalAvena + subTotalLeche;



                std::cout << "\n -------RESUMEN DE LA COMPRA-----";


                std::cout <<"\nCafe: " << unidadesCafe << " Subtotal: $" << subTotalCafe << std::endl;
                std::cout << "\nAvena: " << unidadesAvena <<" Subtotal: $" << subTotalAvena<< std::endl;
                std::cout << "\nLeche: " << unidadesLeche << " Subtotal: $" << subTotalLeche << std::endl;
                std::cout << "\n Total sin descuento: " << totalSinDescuento << std::endl;
                std::cout << "\nPrecio total: " << precioTotal << std::endl;

                break;











            }
        }


    }
    while (opcion != -1 );


}









//ejercicio 3 ----------------------------------------------------------------------------------------------------------------------------
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

// Ejercicio 1 de las calificaciones -----------------------------------------------------------------------------------------------------------------
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



