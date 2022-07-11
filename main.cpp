#include <iostream>

#include "cartelera.h"
#include "pelicula.h"
#include "tiket.h"
#include "vista.h"

using namespace std;

int Pelicula::totalPeliculas=0;

int main()
{
    Vista v;
    int op,colum[6];
    string fila[6],op1;

    do{
        do{
            cout<<"\n\t\t\t---------------------------------\n\t\t\t|\t  **** Menu ****\t|\n";
            cout<<"\t\t\t|1.- Mostrar Cartelera\t\t|\n";
            cout<<"\t\t\t|2.- Mostrar Sala\t\t|\n";
            cout<<"\t\t\t|3.- Salir\t\t\t|";
            cout<<"\n\t\t\t---------------------------------\n";
            cout << "\n\tIngrese su opcion: ";
            cin>>op1;
            op=v.validarNum(op1);
            if(op < 0 || op > 3){
                cout << "\tError..! Intentalo nuevamente" << endl;
            };
        }while(op < 0 || op > 3);

        switch (op) {
        case 1:
            cout<<"\n\t\t\t---------------------------------\n\t\t";
            cout<<"\t|\tCARTELERA\t\t|";
            cout<<"\n\t\t\t---------------------------------\n";
            v.imprimir();
            break;
        case 2:
            v.imprimirSala();
            v.editarSala(fila,colum);
            break;
        case 3:
            cout << "FIN DEL PROGRAMA\n";
            break;
        default:
            cout << " ERROR \n";
            break;
        }
    }while(op!=3);
    return 0;
}
