//a) Receba uma matriz de elementos inteiros dispostos em 3 linhas e 4 colunas. 
//Em seguida, exiba a quantidade de números múltiplos de 5 armazenados na matriz.


#include <iostream>

using namespace std;

int main()
{
    int myMatrix[3][4], lin, col, multi=0;
    
    cout << "informe numeros a seguir: " << "\n";
    
    for(lin=0; lin <=2; lin++){
        
        for(col=0; col<=3; col++){
            cout << "digite o elemento da linha " << lin+1 << " e coluna " << col+1 <<"\n";
            cin >> myMatrix[lin][col];
            
            if(myMatrix[lin][col]%5==0){
                multi++;
            }
        }
    } cout << "voce escolheu " << multi << " numeros multiplos de 5";
    
}
