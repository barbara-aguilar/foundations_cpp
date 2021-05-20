#include <iostream>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	int anoAtual, anoNasc, idade;
	cout <<"digite o ano atual: ";
	cin >> anoAtual;
	cout <<"digite seu nao de nascimento: ";
	cin >> anoNasc;
	idade=anoAtual-anoNasc;
	cout <<"vc tem ou vai fazer fará " <<idade <<" anos";
}
