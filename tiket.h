#ifndef TIKET_H
#define TIKET_H
#include "cartelera.h"
#include "vista.h"
#include <time.h>

using namespace std;

class Tiket
{
private:

    Cartelera *cartel;

public:

    Tiket();
    void generaSala();


};

#endif // TIKET_H
