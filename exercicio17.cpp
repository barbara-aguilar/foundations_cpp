#include <iostream>

using namespace std;

int main()
{
    int userNum, contador, multiplo;
    
    for(contador=1; contador<=10; contador++)
    {
        cout << "digite o " << contador << " o. numero: ";
        cin >>userNum;
        if(userNum%3==0){
            multiplo++;
        }
    } cout << " voce informou " << multiplo << " numeros multiplos de 3";


}
