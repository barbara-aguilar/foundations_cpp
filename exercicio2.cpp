#include <iostream>
#include <locale>
using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int num, quad, cub;
	
	cout << "Digite um n�mero inteiro ";
	cin >> num;
	quad=num*num;
	cub=num*num*num;
	
	cout << "O quadrado de " << num << " � " << quad << " , e o cubo de " << num << " � " << cub;

}
