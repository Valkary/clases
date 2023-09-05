#include "iostream"

using namespace std;
int numDatos;
int arreglo[100];

void pedirNumDatos()
{
    while (true)
    {
        cout << "Introduzca numero de datos:";
        cin >> numDatos;
        if (numDatos > 100)
        {
            cout << "NO";
        }
        else
        {
            return;
        }
    }
}

void chamba()
{
    int vuelta = 0;

    // ir a cada posicion del arreglo hasta numDatos y asignarle un valor a la posicion

    for (vuelta; vuelta < numDatos; vuelta++)
    {
        cout << "Introduzca valor" << vuelta;
        cin >> arreglo[vuelta];
    }
}

void imprimirArreglo()
{
    int nmms = 0;
    for (nmms; nmms < numDatos; nmms++) {
        cout << arreglo[nmms] << endl;

    }
}

int encontrarCTM() {
    int max = arreglo[0];
    int max_pos = 0;

    for (int i = 1; i < numDatos; i++) {
        if (arreglo[i] > max) {
            max = arreglo[i];
            max_pos = i;
        }
    }

    return max_pos;
}

int main()
{
    pedirNumDatos();
    chamba();
    imprimirArreglo();

    int max_pos = encontrarCTM();

    cout << "Base mas peligrosa encontrada en: " << max_pos << " y el valor de la base es de " << arreglo[max_pos] << endl;
}