//Um instituto está realizando uma pesquisa para descobrir a idade e o peso médios da população de um bairro. 
//Cada entrevistado informa seu peso e sua idade e, quando for informado 0 para o peso, o recebimento de dados deve ser interrompido 
//e devem ser exibidas a quantidade de entrevistados, a média de peso e a média de idade dos mesmos.


#include <iostream>

using namespace std;

int main()
{
    int idade, idadeIndiv, entrevistados, somaIdade;
    float peso, mediaPeso, pesoIndv, mediaIdade, somaPeso;
    
    somaPeso=0;
    somaIdade=0;
    entrevistados=0;
    
    cout << "informe seu peso: " << "\n";
    cin >> peso;
        
    while(peso!=0)
    {
        cout << "informe sua idade: " << "\n";
        cin >> idade;
        
        entrevistados++;
        somaIdade+=idade;
        somaPeso+=peso;

        cout << "informe seu peso: " << "\n";
        cin >> peso;
    } 
    mediaIdade=somaIdade/entrevistados;
    mediaPeso=somaPeso/entrevistados;
    cout << entrevistados << " pessoas foram entrevistas. Apresentando " << mediaIdade << " anos como idade media e " << mediaPeso << " kg de peso medio.";
}
