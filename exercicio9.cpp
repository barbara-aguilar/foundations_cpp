#include <iostream>

using namespace std;

int main()
{
    int codItem, quantItem;
    float precoFinal;
    
    cout << "Insira o codigo do item desejado: ";
    cin >> codItem;
    cout << "Informe a quantidade de itens desejada: ";
    cin >> quantItem;

    switch(codItem){
        case 100: cout << "Hamburguer - " << quantItem << " unidade(s) " << "- Valor Total: R$" << quantItem*5.50;
        break;
        case 101: cout << "HotDog - " << quantItem << " unidade(s) " << "- Valor Total: R$" << quantItem*4.50;
        break;
        case 102: cout << "Milkshake - " << quantItem << " unidade(s) " << "- Valor Total: R$" << quantItem*7.00;
        break;
        case 103: cout << "Pizza - " << quantItem << " unidade(s) " << "- Valor Total: R$" << quantItem*8.00;
        break;
        case 104: cout << "XBurger - " << quantItem << " unidade(s) " << "- Valor Total: R$" << quantItem*8.50;
        break;
    default: cout << "Item Invalido";
    }
    
}
