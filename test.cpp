#include "iostream"
using namespace std;

/*
<tipo de dato> <nombre de la funcion>(<parametros>) {
    procedimiento...
    return x;
}
*/

/*

for (<declarar iterador>; <declarar condicion>; <iterar>) {
    procedimiento...
}
*/

// Menu de 4 opciones - INFINITO
// Opcion 1: calcular el area rectangulo
// Opcion 2: triangulo
// Opcion 3: circulo
// Opcion 4: salir

float calcRec(float base, float altura)
{
    float areaRec = base * altura;
    return areaRec;
}

float calcTri(float base, float altura)
{
    float areaTri = base * altura / 2;
    return areaTri;
}

float calcCir(float radio)
{
    float areaCir = 3.14 * radio * radio;
    return areaCir;
}

void menu()
{
    int opcion;

    while (true)
    {
        std::cout << "Menu de opciones:" << std::endl;
        std::cout << "[1] Area rectangulo" << std::endl;
        std::cout << "[2] Area triangulo" << std::endl;
        std::cout << "[3] Area circulo" << std::endl;
        std::cout << "[4] Area salir" << std::endl;
        std::cout << "Opcion seleccionada: ";

        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            float base;
            float altura;
            std::cout << "Introduzca base" << std::endl;
            std::cin >> base;
            std::cout << "Introduzca altura" << std::endl;
            std::cin >> altura;
            float area = calcRec(base, altura);
            std::cout << "El area es de:" << area << std::endl;
            break;
        }
        case 2:
        {
            float base;
            float altura;
            std::cout << "Introduzca base" << std::endl;
            std::cin >> base;
            std::cout << "Introduzca altura" << std::endl;
            std::cin >> altura;
            float area = calcTri(base, altura);
            std::cout << "El area es de:" << area << std::endl;
            break;
        }
        case 3:
        {
            float radio;
            std::cout << "Introduzca radio" << std::endl;
            std::cin >> radio;
            float area = calcCir(radio);
            std::cout << "El area es de:" << area << std::endl;
            break;
        }
        case 4:
        {
            std::cout << "Gracias! Saliendo del programa..." << std::endl;
            break;
        }
        default:
            std::cout << "Opcion invalida! Selecciona otra >:(" << std::endl;
            break;
        }

        if (opcion == 4)
        {
            break;
        }
    }
}

int main()
{
    menu();

    return 0;
}