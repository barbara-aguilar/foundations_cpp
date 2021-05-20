#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int num, quad, cub;
	
	cout << "Digite um número inteiro ";
	cin >> num;
	quad=num*num;
	cub=num*num*num;
	
	cout << "O quadrado de " << num << " é " << quad << " , e o cubo de " << num << " é " << cub;

}
