#include <iostream>
using namespace std;

int main()
{
	int idade;
	cout << "Informe sua idade";
	cin >> idade;
	if(idade>=16){
		cout << "Parab�ns, voc� j� pode votar";
	}
	else {
		cout << "Voce nao pode votar";
	}
}
