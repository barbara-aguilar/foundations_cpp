//c) Um casal de amigos está brincando de par ou ímpar. A cada uma das 10 jogadas que farão, 
//armazene em um vetor o número escolhido pelo jogador A (que escolheu par), e em um segundo vetor, 
//o número escolhido pelo jogador B (que escolheu ímpar). Também a cada jogada, informe o jogador vencedor. 
//Ao final, informe quantas vezes cada jogador venceu.


//Resolution without array
#include <iostream>

using namespace std;

int main()
{
    char Par = 'P', Impar = 'I', choice1, choice2;
    int numberP1, numberP2, index, vitorias1=0, vitorias2=0, result;
    
    cout << "Jogadores informem suas escolhas."<< "\n";
    
    for(index=0; index<=2; index++){
        
        //atribuo par ou impar
        cout << "RODADA No. " << index+1 << "\n";
        cout << "Jogador 1: Par ou IMPAR? : P ou I ?" << "\n";
        cin >> choice1;
        
        if(choice1 == Par){
            choice2=Impar;
        }else{
            choice2=Par;
        }
        
        //jogadores escolhem os numeros da rodada
        cout << "JOGADOR1 insira um numero: " << "\n";
        cin >> numberP1;
        
        cout <<"JOGADOR 2 insira um numero: " << "\n";
        cin >> numberP2;
        
        result=numberP1+numberP2;
        
        //comparacao dos numeros e iteracao do placar;
        if(result%2==0 && choice1 == Par){
            vitorias1++;
        } else if(result%2==0 && choice2 == Par){
            vitorias2++;
        }
    }
    
    if(vitorias1 > vitorias2){
        cout << "Jogador 1 venceu com um total de " << vitorias1 << " vitorias.";
    }else{
        cout << "jogador 2 venceu com um total de " << vitorias2 << "vitorias.";
    }

}
