#include <iostream>
using namespace std;

int main(){
	int horas;
	cout << "Que horas s�o?";
	cin >> horas;
	if(horas>=6&&horas<=18){
		cout << "eh dia";
	}
	else 
	{
		cout << "eh noite";	
	}
}
