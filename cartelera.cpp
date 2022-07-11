#include "cartelera.h"


void Cartelera::darInformacion()
{
    Pelicula* p;
    p = new Pelicula (15,40,"The Batman",120,"* ESTRENO *");
    carteleras.push_back(p);
    p = new Pelicula (16,20,"Sonic",130,"");
    carteleras.push_back(p);
    p = new Pelicula (17,00,"Doctor Strange: the multivers of madness",125,"* ESTRENO *");
    carteleras.push_back(p);
    p = new Pelicula (18,20,"El exorcismo",100,"* ESTRENO *");
    carteleras.push_back(p);
    p = new Pelicula (19,00,"The Spider--man: No Way Home",128,"");
    carteleras.push_back(p);
}

Cartelera::Cartelera()
{
    this->darInformacion();
    this->numSala = 0;
}


string Cartelera::visualizar()
{

    string str = "";
    for(int i=0;i<carteleras.size();i++){
        str += carteleras.at(i)->getDatos();
    }
    return str;
}

string Cartelera::buscarID(int npeli)
{
    string str1 = "";
    for(int i=0; i<carteleras.size(); i++){
        if(carteleras.at(i)->getId() == npeli){
            str1 += "La pelicula escogida es:\n\n" + carteleras.at(i)->getDatos() + " \n";
        }
    }

    return str1;
}

string Cartelera::imprimirBoleto(string fila[], int colum[], int num, int X)
{
    srand(time(NULL));
    numSala = 1+rand()%(11-1);

    string nombre, Fila;
    int hora, minuto, Columna;
    string str3 = "";
    for(int i=0; i<=num; i++){
        Fila = fila[i];
        Columna = colum[i];
        if(carteleras.at(i)->getId() == X){

            nombre = carteleras.at(i)->getTitulo();
            hora = carteleras.at(i)->getHora();
            minuto = carteleras.at(i)->getMinuto();
            str3 += "* ============================================ *\n"
                        "||  Sala: " + to_string(this->numSala) + "\t\t\t\t\t||\n" +
                    "||  Hora: " + to_string(hora) + " : " + to_string(minuto) + "\t\t\t\t||\n" +
                    "||  Asiento: " + Fila + " " + to_string(Columna) + "\t\t\t\t||" + "\n" +
                    "||  Pelicula: " + nombre + "\t\t\t||" + "\n" +
                    "* ============================================ *\n";

        }
    }
    return str3;
}

