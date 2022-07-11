#include "vista.h"

#include <iostream>

using namespace std;

int Vista::getID() const
{
    return ID;
}

void Vista::setID(int newID)
{
    ID = newID;
}

Vista::Vista()
{
    this->cartel = new Cartelera();
    this->ID = 0;
}

void Vista::imprimir()
{
    cout << this->cartel->visualizar();

}

bool Vista::esEnt(string numero) {
    //validacion numero
    bool esEntero = true;
    int longitud = numero.size();

    if (longitud == 0) {
        esEntero = false;
    } else if (longitud == 1 && !isdigit(numero[0])) {
        //isdigit=Verificar si es decimal
        esEntero = false;
    } else {
        int indice = 0;
        while (indice < longitud) {
            if (!isdigit(numero[indice])) {
                esEntero = false;
                break;
            }
            indice++;
        }
    }
    return esEntero;
}

int Vista::validarNum(string num){
    //Ingreso numero
    bool repite=true;
    int numero;
    do {
        if (esEnt(num)) {
            repite = false;
            numero = atoi(num.c_str());
            //atoi=Convierte string a entero
        } else {
            cout << "\tError..! Intentalo nuevamente:";
            cin>>num;
        }
    } while (repite);

    return numero;
}

void Vista::imprimirSala()
{
    int id=0;
    string ID1="";
    do{
        cout << "Que pelicula quiere ver?\n\t Ingrese el ID: ";
        cin >> ID1;
        id=validarNum(ID1);
        this->setID(id);
        if(this->getID() > 0 && this->getID() <= 5){
            cout << cartel->buscarID(this->getID());
            cout << "\t ---* ASIENTOS *---\n";
            cout << salita->asientos() << endl;
        }else{
            cout << " ID ERRONEA \n";
        };

    }while(ID < 0 || ID > 5);

}

void Vista::editarSala(string fila[], int colum[])
{

    int num=0, cm=0,fl=0;
    bool opcion;
    string A[6][6] = {{" \t","1\t","2\t","3\t","4\t","5\t"},{"A\t","O\t","O\t","O\t","O\t","O\t"},{"B\t","O\t","O\t","O\t","O\t","O\t"},{"C\t","O\t","O\t","O\t","O\t","O\t"},{"D\t","O\t","O\t","O\t","O\t","O\t"},{"E\t","O\t","O\t","O\t","O\t","O\t"}};
    cout << "Quiere comprar entradas para esta pelicula?\n";
    cout << "1. SI \n0. No\n";
    cin >> opcion;
    if(opcion == 1){

        do{
            cout << "Cuantos asientos va a escojer?: ";
            cin >> num;
            if(num<0){
                cout << "NUMERO ERRONEO\n\n";
            }
        }while(num<0);
        for(int i=0;i<num;i++){
            do{
                cout<<"Ingrese que fila va a elegir [A]: ";
                cin>>fila[i];

                if(fila[i]=="A"){
                    cm=1;
                }else if(fila[i]=="B"){
                    cm=2;
                }else if(fila[i]=="C"){
                    cm=3;
                }else if(fila[i]=="D"){
                    cm=4;
                }else if(fila[i]=="E"){
                    cm=5;
                }else if(fila[i]!="A" || fila[i]!="B" || fila[i]!="C" || fila[i]!="D" || fila[i]!="E"){
                    cout << "FILLA ERRONEA\n";
                };
            }while(fila[i]!="A" && fila[i]!="B" && fila[i]!="C" && fila[i]!="D" && fila[i]!="E");
            do{
                cout<<"Ingrese que columna va a elegir [0]: ";
                cin>>colum[i];
                if(colum[i] < 1 || colum[i] > 5){
                    cout << "COLUMNA ERRONEA\n";
                }
                fl=colum[i];
            }while(colum[i] < 1 || colum[i] > 5);
            A[cm][fl] = "X\t";

        }
        int X = this->getID();
        cout << "Boletos generados \n";
        cout << cartel->imprimirBoleto(fila,colum,num,X);


        float costo = 0;
        costo = 5,0;
        cout << "El costo total es: " << costo*num << endl;




        int bandera = 0;
        cout << " Quiere ver nuevamente la sala?\n";
        cout << "1. SI \n0. No\n";
        cin >> opcion;
        if(opcion == 1){
            for(int i=0;i<6;i++){
                for(int j=0;j<6;j++){
                    cout << A[i][j] + " ";
                    bandera ++;
                    if(bandera == 6 ){
                        cout << "\n";
                        bandera = 0;
                    }
                }
            }
        }

    } // fin del primer if.


}



