#include <iostream>

using namespace std;

int main()
{
    int num, counter, result;
    counter=0;
    cout <<"digite um numero que gostaria de saber a tabuada: ";
    cin >> num;
    while (counter<=10){
        cout << num << " X " << counter << " = " << num*counter << "\n";
        counter++;
    }
    
}
