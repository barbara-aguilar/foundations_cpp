//c) Receba uma matriz quadrada 4x4 (quatro linhas e quatro colunas) de elementos do tipo real. 
//Em seguida, pergunte ao usuário a linha da matriz que ele deseja visualizar. 
//Com essa informação, exiba a linha desejada.


#include <iostream>

using namespace std;

int main()
{
   int matrix[4][4], lin, col,num;
   
   for(lin=0;lin<=3;lin++){
       for(col=0;col<=3;col++){
           cout << "informe o elemento da linha" << lin+1 << " e da coluna " << col+1 << " : " << "\n";
           cin >> matrix[lin][col];
       }
   }
   cout << "qual linha deseja visualisar?: ";
   cin >> lin;
   
   for(col=0;col<=3;col++){
       cout << "resultado: " << matrix[lin-1][col] << "\n";
   }
}
