#include <iostream> 
using namespace std;

int main()
{
	int num, resto;
	cout << "Insira um numero inteiro: ";
	cin >> num;
	resto=num%2;
	if(resto==0){
		cout << "Seu n�mero � par!";
	}
	else {
		cout << "seu numero eh impar";
	}
}
