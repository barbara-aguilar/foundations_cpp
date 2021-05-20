#include <iostream>
using namespace std;

int main(){
	int num, quad;
	cout << "Insira um numero: ";
	cin >> num;
	quad=num*num;
	cout << "O quadrado de " << num << " eh: " << quad;
	if(quad>25)
	{
		cout << " , O resultado é maior que 25";	
	}
	else {
		cout << "o resultado eh menor que 25";
	}
}
