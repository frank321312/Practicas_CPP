/*#include <iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Digite un numero: "; cin>>numero;

    if (numero == 0){
        cout<<"\nEl numero es cero"<<endl;
    }
    else if (numero % 2 == 0){
        cout<<"\nEl numero "<<numero<<" es par"<<endl;
    }
    else{
        cout<<"\nEl numero "<<numero<<" no es par"<<endl;
    }
    return 0;
}*/

#include <iostream>

using namespace std;

int main(){
    int n1;

    cout<<"Digite un numero: "; cin>>n1;

    if (n1 == 0){
        cout<<"\nEl numero es nuetro"<<endl;
    }
    else if (n1 > 0){
        cout<<"\nEl numero es positivo"<<endl;
    }
    else{
        cout<<"\nEl numero es negativo"<<endl;
    }

    return 0;
}