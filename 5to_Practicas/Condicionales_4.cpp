#include <iostream>

using namespace std;

int main(){
    char caracter;
    
    cout<<"Digite un caracter: "; cin>>caracter;

    switch (caracter){
    case 'a':
    case 'e': 
    case 'i':
    case 'o':
    case 'u': cout<<"\nEs una vocal miniscula"<<endl;
        break;
    case 'A':
    case 'E': 
    case 'I':
    case 'O':
    case 'U': cout<<"\nEs una vocal mayuscula"<<endl;
        break;
    default: cout<<"No es una vocal"<<endl;
        break;
    }

    return 0;
}