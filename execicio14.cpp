#include <iostream>

using namespace std;

int main()
{
    int idade;
    cout << " informe sua idade: ";
    cin >> idade;
    
    while(idade!=-1){
        
        if (idade>=7 && idade<=12)
        {
            cout << "Categoria INFANTIL" << "\n";
        }
        else if (idade>=13 && idade<=17)
        {
            cout << "Categoria JUVENIL"<< "\n";
        }
        else if (idade>=18 && idade<=49)
        {
            cout << "Categoria ADULTO"<< "\n";
        }
        else if (idade>=50)
        {
            cout << "Categoria SENIOR"<< "\n";
        }
        else{
            cout << "Infelizmente voce nao pode participar ainda, pois eh muito jovem"<< "\n";
        }
        
        cout << " informe sua idade: ";
        cin >> idade;
    }
}
