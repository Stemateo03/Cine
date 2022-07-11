#ifndef CARTELERA_H
#define CARTELERA_H
#include "pelicula.h"

#include <time.h>
#include <vector>
#include <iostream>

using namespace std;

class Cartelera
{
private:
    vector <Pelicula*> carteleras;
    int numSala;
public:
    Cartelera();
//    Cartelera(int hora, int minuto, string fila, int colum, string titulo);
//    vector <Pelicula*> carteleras;
    void darInformacion();
    string visualizar();
    string buscarID(int npeli);
    string imprimirBoleto(string fila[], int colum[], int num, int X);
};

#endif // CARTELERA_H
