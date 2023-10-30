/******************************************************************************

Pergunte a idade de n pessoas e mostre a quantidade de pessoas adultas. 

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int quantidade, idade, conta;
     int i = 0;
    cout << " são quantas pessoas? " << endl;
    cin >> quantidade;
    conta = 0; 
    
   
    
    
    while(i<quantidade){
        cout << " qual a idade? " << endl;
        cin >> idade;
        
        if(idade>=18){
           
        conta ++;
        
            
        }else{
            cout << "não é adulta";
            
        }
        
        i++;
        cout << "a quantidade de pessoas adultas é de " << conta;
    }
    return 0;
}
