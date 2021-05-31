// Dois amigos programadores estão entediados e decidiram criar um jogo simples. 
//A ideia é que o primeiro jogador preencha um vetor de 10 números inteiros. 
//Em seguida, o segundo jogador tem três tentativas para tentar adivinhar um dos números digitados.
//Se ele acertar, recebe a mensagem “Parabéns! Este número está na posição XX do vetor! 
//Você usou YY tentativas...”; onde XX deve ser substituído pela posição do vetor onde se 
//encontra o número, e YY deve ser substituído pelo número de vezes que o usuário 
//tentou acertar o número. Se errar em todas as tentativas, a mensagem a ser exibida é 
//“Que pena! Você não acertou...”.


#include <iostream>

using namespace std;

int main()
{
    int numPlayer1[10], numPlayer2, trys, index;
    bool find = false;
    
    cout << "Player1 digite 10 numeros a seguir: " << "\n";
    for(index=0;index<=9;index++){
        cout << "Digite o " << index+1 << " .o numero: ";
        cin >> numPlayer1[index];
    }
    cout << "Player 2, tente acertar algum numero digitado - vc tem 3 tentativas: ";
    cin >> numPlayer2; 
    trys=1;
    index=0;
    
    while(!find && trys<=3)
    {
        while(!find && index<=9)
        {
            
            if(numPlayer1[index]==numPlayer2){
                find=true;
            }
            
            index++;
        }
        
        if(!find)
        {
            trys++;
            cout << "ainda nao achou";
            cout << "Player 2, tente acertar algum numero digitado - vc ainda tem" 
            << trys << "tentativas: " ;
            cin >> numPlayer2; 
            index=0;
        }
        
    }
        if(find)
        {
            cout << "parabens, voce acertou! o numero escolhido esta na posicao " 
            << index << " voce usou " << trys << " tentativas para acertar";
        }
        else{
            cout << " voce errou e usou todas as tentativas";
        }
}

//resulucao com array

#include <iostream>

using namespace std;

int main()
{
    int numberP1[10], numberP2[10], index, vitorias1=0, vitorias2=0, result;
    
    cout << "Jogadores informem suas escolhas."<< "\n";
    
    for(index=0; index<=9; index++){
        
        cout << "RODADA No. " << index+1 << "\n";
        
        //jogadores escolhem os numeros da rodada
        cout << "JOGADOR1 insira um numero: " << "\n";
        cin >> numberP1[index];
        
        cout <<"JOGADOR 2 insira um numero: " << "\n";
        cin >> numberP2[index];
        
        result=numberP1[index]+numberP2[index];
        
        //comparacao dos numeros e iteracao do placar;
        if(result%2==0){
            cout << "Jogador 1 Venceu!" << "\n";
            vitorias1++;
        } else{
            cout << "Jogador 2 venceu!" << "\n";
            vitorias2++;
        }
    }
    
    if(vitorias1 > vitorias2){
        cout << "Jogador 1 venceu com um total de " << vitorias1 << " vitorias.";
    }else{
        cout << "jogador 2 venceu com um total de " << vitorias2 << "vitorias.";
    }

}
