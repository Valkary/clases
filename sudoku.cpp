#include "iostream"

using namespace std;

int sudoku[9][9] = {
    {7, 0, 1, 0, 0, 8, 0, 0, 0},
    {0, 5, 0, 0, 0, 6, 0, 3, 4},
    {0, 2, 0, 5, 3, 0, 0, 0, 0},
    {0, 0, 0, 9, 0, 0, 0, 0, 7},
    {0, 0, 4, 0, 0, 0, 6, 0, 0},
    {8, 0, 0, 0, 0, 5, 0, 0, 0},
    {0, 0, 0, 0, 7, 9, 0, 6, 0},
    {6, 7, 0, 2, 0, 0, 0, 9, 0},
    {0, 0, 0, 6, 0, 0, 2, 0, 3},
};

void imprimir();

bool checkFila(int numFila, int numInsertar);
bool checkColumna(int numColumna, int numInsertar);
bool checkCelda(int numFila, int numColumna, int numInsertar);
int main()
{
    int fila;
    int columna;
    int num;
    string resFila;
    string resColumna;
    imprimir();
    cout << "Que numero?:";
    cin >> num;
    cout << "Que fila?";
    cin >> fila;
    cout << "Que columna?";
    cin >> columna;

    if (checkFila(fila, num) == 0)
    {
        resFila = "false";
    }
    else
    {
        resFila = "true";
    }

    if (checkColumna(columna, num) == 0)
    {
        resColumna = "false";
    }
    else
    {
        resColumna = "true";
    }

    cout << "el numero " << num << " en la fila " << fila << " es " << resFila << endl;
    cout << "el numero " << num << " en la columna " << columna << " es " << resColumna << endl;
}

void imprimir()
{
    for (int y = 0; y < 9; y++)
    {
        if (y % 3 == 0)
        {
            cout << "-------------------------" << endl;
        }

        for (int x = 0; x < 9; x++)
        {
            if (x % 3 == 0)
            {
                cout << "|"
                     << " ";
            }
            cout << sudoku[y][x];
            cout << " ";
        }
        cout << "|" << endl;
    }
    cout << "-------------------------" << endl;
}

bool checkFila(int numFila, int numInsertar)
{
    for (int x = 0; x < 9; x++)
    {
        if (sudoku[numFila][x] == numInsertar)
        {
            return false;
        }
    }

    return true;
}

bool checkColumna(int numColumna, int numInsertar)
{
    for (int y = 0; y < 9; y++)
    {
        if (sudoku[y][numColumna] == numInsertar)
        {
            return false;
        }
    }

    return true;
}

bool checkCelda(int numFila, int numColumna, int numInsertar)
{
    int filaCelda = floor(numFila / 3);
    int columnaCelda = floor(numColumna / 3);
    
    return false;
}
