#include <iostream>
using namespace std;

int main(){
	int diasVida, idadeAtual;
	cout << "insira um numero de dias vividos ";
	cin >> diasVida;
	idadeAtual=diasVida/365;
	cout << "Você possui " << idadeAtual << " anos.";
	if(idadeAtual>=18){
		cout << "Vc eh de maior kkkk";
	}
	else {
		cout << "voce é menor de idade";
	}
}
