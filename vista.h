#ifndef VISTA_H
#define VISTA_H

#include <iostream>
#include <string>
#include <vector>

#include "cartelera.h"
#include "sala.h"
#include "tiket.h"

using namespace std;

class Vista
{
private:

    Cartelera *cartel;
    Sala *salita;
    int ID;

public:

    Vista();

    void imprimir();
    void imprimirSala();
    void editarSala(string fila[], int colum[]);
    bool esEnt(string numero);
    int validarNum(string num);

    int getID() const;
    void setID(int newID);
};

#endif // VISTA_H
