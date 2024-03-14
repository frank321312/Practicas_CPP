/*#include <iostream>

using namespace std;

int main(){
    int n1, n2, aux;

    cout<<"Ingrese el valor de n1: "; cin>>n1;
    cout<<"Ingrese el valor de n2: "; cin>>n2;

    aux = n1;
    n1 = n2;
    n2 = aux;

    cout<<"\nEl valor de n1 es: "<<n1<<endl;
    cout<<"El valor de n2 es: "<<n2<<endl;

    return 0;
}*/

#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3, n4, media = 0;

    cout<<"Ingrese el valor de n1: "; cin>>n1;
    cout<<"Ingrese el valor de n2: "; cin>>n2;
    cout<<"Ingrese el valor de n3: "; cin>>n3;
    cout<<"Ingrese el valor de n4: "; cin>>n4;

    media = (n1+n2+n3+n4) / 4;

    cout<<"\nLa nota final media de los cuatro alumnos es: "<<media<<endl;

    return 0;
}