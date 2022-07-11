#ifndef PELICULA_H
#define PELICULA_H

#include <string>
#include <vector>

using namespace std;

class Pelicula
{
private:
    int id;
    string titulo;
    int tiempo;
    string estreno;
    int hora;
    int minuto;
public:
    static int totalPeliculas;
    Pelicula();
    Pelicula(int hora, int minuto, string titulo, int tiempo, string estreno);

    int getId() const;

    int getHora() const;
    void setHora(int newHora);

    int getMinuto() const;
    void setMinuto(int newMinuto);

    int getTiempo() const;
    void setTiempo(int newTiempo);

    string getDatos();

    const string &getTitulo() const;
    void setTitulo(const string &newTitulo);

    string getEstreno() const;
    void setEstreno(string newEstreno);
};

#endif // PELICULA_H
