#include "iostream"

using namespace std;
/*
struct <nombre> {
    declaraciones de variables
}

Usuario:
    Nombre real
    Apellidos
    Username
    Contraseña
    Direccion IP
    Email
    Lista amigos
*/

struct Coordenadas {
    double x;
    double y;
    double z;
};

struct Objetivo {
    string tipo_estructura;
    int fuerzas_armadas;
    Coordenadas ubicacion;
};

struct Misil {
    string tipo;
    char tipo_lanzamiento;
    Coordenadas ubicacion;
};

void lanzarMisil(Objetivo objetivo, Misil &misil) {
    // Algo
    cout << "Datos misil" << endl;
    cout << "Tipo de misil: " << misil.tipo << endl;
    cout << "Tipo de lanzamiento: " << misil.tipo_lanzamiento << endl;
    cout << "Coordenadas: (" << misil.ubicacion.x << ", " << misil.ubicacion.y << ", " << misil.ubicacion.z << ")" << endl;
}

Misil construirMisil() {
    Misil kboom;

    kboom.tipo = "Caza";
    kboom.tipo_lanzamiento = 'S';
    kboom.ubicacion.x = 115;
    kboom.ubicacion.y = 80;
    kboom.ubicacion.z = 17.897;

    return kboom;
}

int main() {
    Objetivo pobrecitos;
    Misil kboom = construirMisil();

    pobrecitos.fuerzas_armadas = 40;
    pobrecitos.tipo_estructura = "Base militar";
    pobrecitos.ubicacion.x = 40;
    pobrecitos.ubicacion.y = 27.994;
    pobrecitos.ubicacion.z = 1;

    lanzarMisil(pobrecitos, kboom);
}