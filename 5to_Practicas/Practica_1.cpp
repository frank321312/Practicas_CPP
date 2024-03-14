#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, n4, resultado = 0;

    cout<<"Ingrese un numero: "; cin>>n1;
    cout<<"Ingrese un numero: "; cin>>n2;
    cout<<"Ingrese un numero: "; cin>>n3;
    cout<<"Ingrese un numero: "; cin>>n4;

    resultado = (n1+n2) / (n3+n4);

    cout.precision(2);
    cout<<"El resultado es: "<<resultado;

    return 0;
}