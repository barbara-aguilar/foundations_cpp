//Um dado é lançado 20 vezes e, a cada lançamento, a face sorteada é lançada em um vetor. 
//Ao final dos sorteios, informe quantas vezes cada face ímpar foi sorteada.

#include <iostream>

using namespace std;

int main()
{
    int trowDice[20],index,cont1=0,cont3=0,cont5=0;
    cout << "Jogue o dado 20 vezes e infome os resultado: " << "\n";
    
    for(index=0; index <=19; index++)
    {
        cout << "informe o " << index+1 << "numero sorteado";
        cin >> trowDice[index];
    }
    for(index=0;index <=19; index++){
        switch(trowDice[index]){
            case 1: cont1++;
            break;
            case 3: cont3++;
            break;
            case 5: cont5++;
            break;
        }
    }
        cout << " voce tirou os seguintes numeros impares: " << cont1 << "," << cont3 << ","<< cont5;
}

