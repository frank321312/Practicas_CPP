#include <iostream>

using namespace std;

int main(){
    int num1, IVA = 0, multiplicacion = 0;

    cout<<"Ingrese un numero: ";
    cin>>num1;

    multiplicacion = num1 * 0.19;
    IVA = num1 + multiplicacion;

    cout<<"\nEl numero sin el IVA es "<<num1<<endl;
    cout<<"El numero con el IVA es "<<IVA<<endl;


    return 0;
}