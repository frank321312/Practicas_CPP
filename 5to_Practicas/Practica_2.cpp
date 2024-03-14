/*#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, n4, n5, n6, resultado = 0;

    cout<<"ingrese un numero: "; cin>>n1;
    cout<<"ingrese un numero: "; cin>>n2;
    cout<<"ingrese un numero: "; cin>>n3;
    cout<<"ingrese un numero: "; cin>>n4;
    cout<<"ingrese un numero: "; cin>>n5;
    cout<<"ingrese un numero: "; cin>>n6;

    resultado = (n1+(n2/n3)) / (n4+(n5/n6));

    cout.precision(2);
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}*/

#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, n4, resultado = 0;

    cout<<"ingrese un numero: "; cin>>n1;
    cout<<"ingrese un numero: "; cin>>n2;
    cout<<"ingrese un numero: "; cin>>n3;
    cout<<"ingrese un numero: "; cin>>n4;

    resultado = n1 + (n2/(n3-n4));

    cout.precision(2);
    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}