#include <iostream>
//Seu professor precisa de ajuda para corrigir as provas objetivas de seus alunos. 
//Ele deseja que você escreva um programa em C++ que receba as respostas das provas de seus alunos e informe quantos acertos cada um deles têm. 
//A prova consta de 5 questões, com alternativas que vão de A a E. Para ajudá-lo, você vai criar um vetor chamado gabarito, que irá conter as respostas da prova. 
//As respostas de cada aluno serão armazenadas no vetor prova. Para cada turma, cuja quantidade de alunos será informada pelo professor, 
//receba o conjunto de respostas de cada aluno, compare-as com o gabarito e informe quantos acertos ele teve.

using namespace std;

int main()
{
    char gabarito[5] = {'a','b','c','d','e'}, respostas[5];
    int index, acertos=0;
    
    cout << " digite as respostas a segur." << "\n";
    for(index=0; index<=4; index++){
        cout << "Resposta da questao " << index+1 << " : " << "\n";
        cin >> respostas[index];
        
        if(gabarito[index]==respostas[index]){
            acertos++;
            cout << "Parabens voce acertou a " << index+1 << " .a questao da prova." << "\n";
        } else {
          cout <<  "Que pena voce errou a " << index+1 << " .a questao da prova." << "\n";
        }
    }
    cout << " Voce acertou " << acertos << " questoes na prova.";
    if(acertos < 3){
        cout << " Voce nao atingiu a media e esta reprovado";
    } else {
        cout << "Voce atingiu a media e foi aprovado";
    }
}
