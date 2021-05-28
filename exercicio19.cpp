#include <iostream>

using namespace std;

int main()
{
   int linhaTotal, linhaAtual, print;
   cout << " quantas linahso triangulo deve ter ? ";
   cin >> linhaTotal;
   
   for(linhaAtual=1; linhaAtual<=linhaTotal; linhaAtual++)
   {
       
       for(print=1; print<=linhaAtual; print++){
           cout << "*";
       }
       cout << "\n";
   }
}
