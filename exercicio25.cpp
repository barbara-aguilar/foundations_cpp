//b) Receba duas matrizes de duas linhas e quatro colunas cada. 
//Feito isso, gere uma terceira matriz cujos elementos serão o produto 
//entre a primeira matriz e a segunda. Exiba os valores da matriz gerada.



#include <iostream>

using namespace std;

int main()
{
    int matrix1[2][4], matrix2[2][4], matrix3[2][4], col, lin;
    
    for(lin=0; lin<=1; lin++){
        for(col=0; col<=3; col++){
            cout<< "informe os elementos da linha " << lin+1 << " e da coluna " << col+1 << "\n";
            cin >>matrix1[lin][col];
        }
    }
    for(lin=0; lin<=1; lin++){
        for(col=0; col<=3; col++){
            cout<< "informe os elementos da linha " << lin+1 << " e da coluna " << col+1 << "\n";
            cin >>matrix2[lin][col];
        }
    }
    for(lin=0; lin<=1; lin++){
        for(col=0; col<=3; col++){
            matrix3[lin][col]=matrix1[lin][col]*matrix2[lin][col];
            cout << "elemento da linha " << lin+1 << " e coluna: " << col+1 << " : " << matrix3[lin][col] << " ; " << "\n";
        }
    }
    
    
