#include "sala.h"

Sala::Sala()
{

}

string Sala::asientos()
{
    string A[6][6] = {{" \t","1\t","2\t","3\t","4\t","5\t"},{"A\t","O\t","O\t","O\t","O\t","O\t"},{"B\t","O\t","O\t","O\t","O\t","O\t"},{"C\t","O\t","O\t","O\t","O\t","O\t"},{"D\t","O\t","O\t","O\t","O\t","O\t"},{"E\t","O\t","O\t","O\t","O\t","O\t"}};
    string str2;
    int bandera = 0;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            str2 += A[i][j] + " ";
            bandera ++;
            if(bandera == 6 ){
                str2 += "\n";
                bandera = 0;
            }
        }

    }
    return str2;
}

