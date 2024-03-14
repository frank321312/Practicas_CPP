/*#include <iostream>

using namespace std;

int main(){
    int saldo_inicial = 1000, opc;
    float retirar, depositar, saldo;

    cout<<"\tBienvenido a su cajero virtual"<<endl;
    cout<<"Su saldo es de "<<saldo_inicial<<"$"<<endl;
    cout<<"1. Ingresar dinero en cuenta"<<endl;
    cout<<"2. Retirar dinero de la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: "; cin>>opc;

    switch(opc){
        case 1: cout<<"\nIngresa la cantidad de dinero a depositar: "; cin>>depositar;
            saldo = saldo_inicial + depositar;
            cout<<"\nSu saldo ahora es de "<<saldo<<endl;
            break;
        case 2: cout<<"\nIngrese la cantidad de dinero a retirar: "; cin>>retirar;
            if (retirar > saldo_inicial){
                cout<<"\nNo tiene el dinero suficiente para retirar esa cantidad"<<endl;
            }
            else{
                saldo = saldo_inicial - retirar;
                cout<<"\nDinero en cuenta: "<<saldo<<endl;
            }
            break;
        case 3: cout<<"\nHa salido del cajero"<<endl;
            break;
        default: cout<<"\nNo ha ingresado ninguna de las opciones"<<endl;
    }

    return 0;
}*/
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int opc, numero;

    cout<<"\tOpciones"<<endl;
    cout<<"\n1. Cubo de un numero"<<endl;
    cout<<"2. Numero par o impar"<<endl;
    cout<<"3. Salir"<<endl;

    cout<<"\nIngrese una de las opciones: "; cin>>opc;

    switch (opc){
        case 1: cout<<"Digite un numero: "; cin>>numero;
            cout<<"\nCubo: "<<pow(numero, 3)<<endl;
            break;
        case 2: cout<<"Digite un numero: "; cin>>numero;
            if (numero % 2 == 0){
                cout<<"\nEl numero "<<numero<<" es par"<<endl;
            }
        default: cout<<"\nNo ingreso ninguna de las opciones"<<endl;
    }

    return 0;
}