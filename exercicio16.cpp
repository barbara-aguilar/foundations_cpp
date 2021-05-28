#include <iostream>

using namespace std;

int main()
{
    int maiorNum, userNum,contador;
    maiorNum=0;
    
    for(contador=1;contador<=10;contador++){
        cout << "Digite o " << contador << " o. numero: ";
        cin >> userNum;
        if(userNum>maiorNum){
            maiorNum=userNum;
        }
    }
    cout << "O maior numero informado foi " << maiorNum;

}
