/*#include <iostream>

using namespace std;

int main(){
    int n1, n2;

    cout<<"Digite un numero: "; cin>>n1;
    cout<<"Digite otro numero: "; cin>>n2;
    
    if(n1 == n2){
        cout<<"\nLos numero son iguales"<<endl;
    }
    else if(n1 > n2){
        cout<<"\nEl numero mayor es "<<n1<<endl;
    }
    else{
        cout<<"\nEl numero mayor es "<<n2<<endl;
    }

    return 0;
}*/

#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3;

    cout<<"Digite un numero: "; cin>>n1;
    cout<<"Digite otro numero: "; cin>>n2;
    cout<<"Digite otro numero: "; cin>>n3;

    if(n1 > n2){
        if(n1 > n3){
            cout<<"\nEl numero mayor es: "<<n1<<endl;
        }
    }
    if(n2 > n1){
        if (n2 > n3){
            cout<<"\nEl numero mayor es: "<<n2<<endl;
        }
    }
    if(n3 > n1){
        if(n3 > n2){
            cout<<"\nEl numero mayor es: "<<n3<<endl;
        }
    }
    if(n1 == n2){
        if(n1 == n3){
            cout<<"\nLos numeros son iguales"<<endl;
        }
    }
    if(n1 == n3){
        if(n1 == n2){
            cout<<"\nLos numeros son iguales"<<endl;
        }
    }
    return 0;
}