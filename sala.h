#ifndef SALA_H
#define SALA_H
#include <string>
#include "pelicula.h"
#include "cartelera.h"

using namespace std;

class Sala
{
private:
    Cartelera* cartel;
public:
    Sala();
    string asientos();

};

#endif // SALA_H
