#include "pelicula.h"

int Pelicula::getId() const
{
    return id;
}

int Pelicula::getHora() const
{
    return hora;
}

void Pelicula::setHora(int newHora)
{
    hora = newHora;
}

int Pelicula::getMinuto() const
{
    return minuto;
}

void Pelicula::setMinuto(int newMinuto)
{
    minuto = newMinuto;
}

int Pelicula::getTiempo() const
{
    return tiempo;
}

void Pelicula::setTiempo(int newTiempo)
{
    tiempo = newTiempo;
}

const string &Pelicula::getTitulo() const
{
    return titulo;
}

void Pelicula::setTitulo(const string &newTitulo)
{
    titulo = newTitulo;
}

string Pelicula::getEstreno() const
{
    return estreno;
}

void Pelicula::setEstreno(string newEstreno)
{
    estreno = newEstreno;
}


string Pelicula::getDatos()
{
    string str = " ( " + to_string(this->id) + " )  -  " + " [ " + to_string(this->hora) + ":" + to_string(this->minuto) + " ] -  " + this->titulo + " (" + to_string(this->tiempo) + ") " + this->estreno + "\n\n";
    return str;
}

Pelicula::Pelicula()
{
    this->id = 0;
    this->titulo = "";
    this->hora = 0;
    this->minuto = 0;
    this->tiempo = 0;
    this->estreno = "";

}

Pelicula::Pelicula(int hora, int minuto, string titulo, int tiempo, string estreno)
{

    Pelicula::totalPeliculas++;
    this->id = Pelicula::totalPeliculas;
    this->titulo = titulo;
    this->tiempo = tiempo;
    this->hora = hora;
    this->minuto = minuto;
    this->estreno = estreno;
}


