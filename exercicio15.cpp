#include <iostream>

using namespace std;

int main()
{
    int codItem, quantItem;
    float precoFinal;
    char adcItem='S';
    cout <<"*** Cardápio ***\n";
    cout <<"100 - Hambúrguer - R$5,50\n";
    cout <<"101 - Cachorro-quente - R$4,50\n";
    cout <<"102 - Milkshake - R$7,00\n";
    cout <<"103 - Pizza brotinho - R$8,00\n";
    cout <<"104 - Cheeseburguer - R$8,50\n";
    cout << "Insira o codigo do item desejado: ";
    cin >> codItem;
    cout << "Informe a quantidade de itens desejada: ";
    cin >> quantItem;
    
    while(adcItem=='S')
    {
        switch(codItem){
            case 100: precoFinal+=quantItem*5.50;
            break;
            case 101: precoFinal+=quantItem*4.50;
            break;
            case 102: precoFinal+=quantItem*7.00;
            break;
            case 103: precoFinal+=quantItem*8.00;
            break;
            case 104: precoFinal+=quantItem*8.50;
            break;
        default: cout << "Item Invalido";
        }
        cout << "Deseja adicionar outro item? S/N ?";
        cin >> adcItem;
        if(adcItem=='S'){
        
        cout <<"*** Cardápio ***\n";
        cout <<"100 - Hambúrguer - R$5,50\n";
        cout <<"101 - Cachorro-quente - R$4,50\n";
        cout <<"102 - Milkshake - R$7,00\n";
        cout <<"103 - Pizza brotinho - R$8,00\n";
        cout <<"104 - Cheeseburguer - R$8,50\n";
        cout << "Insira o codigo do item desejado: ";
        cin >> codItem;
        cout << "Informe a quantidade de itens desejada: ";
        cin >> quantItem;
    }else{
        cout << " O valor total a pagar eh de: R$" << precoFinal;
    }
    }
}
