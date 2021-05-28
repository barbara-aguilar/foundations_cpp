#include <iostream>

using namespace std;

int main()
{
    int userLimit,userNum, contador, par, impar;
    
    cout << "Informe o numero de repeticoes a serem feitas: ";
    cin >> userLimit;
    for(contador=1; contador<=userLimit; contador++)
    {
        cout << " insira o " << contador << " o. numero: ";
        cin >> userNum;
        if(userNum%2==0){
            par++;
        }
        else{
            impar++;
        }
    } cout << "Total de numeros pares: " << par << " . Total de numeros impares: " << impar;
}
