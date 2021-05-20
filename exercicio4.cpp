#include <iostream>
using namespace std;

int main()
{
	int idade;
	cout << "Informe sua idade";
	cin >> idade;
	if(idade>=16){
		cout << "Parabéns, você já pode votar";
	}
	else {
		cout << "Voce nao pode votar";
	}
}
