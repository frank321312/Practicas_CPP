/*
//Primera forma
#include <iostream>

using namespace std;

int main(){
    int edad;

    cout<<"Digite su edad: "; cin>>edad;

    if (edad >= 18){
        if (edad <= 25){
            cout<<"\nSe encuentra entre el range de [18-25]"<<endl;
        }
        else{
            cout<<"\nNo se encuentra entre el range de [18-25]"<<endl;
        }
    }
    else{
        cout<<"\nNo se encuentra entre el range de [18-25]"<<endl;
    }
    return 0;
}
//Segunda forma
#include <iostream>

using namespace std;

int main(){
    int edad;

    cout<<"Digite su edad: "; cin>>edad;

    if ((edad >= 18) && (edad <= 25)){
            cout<<"\nSe encuentra entre el range de [18-25]"<<endl;
    }
    else{
            cout<<"\nNo se encuentra entre el range de [18-25]"<<endl;
    }
    return 0;
}*/

#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3, n4;

    cout<<"Digite tres numeros a continuacion"<<endl;
    cout<<"\nDigite un numero: "; cin>>n1;
    cout<<"Digite un numero: "; cin>>n2;
    cout<<"Digite un numero: "; cin>>n3;
    cout<<"\nDigite un cuarto numero"<<endl;
    cout<<"\nDigite un numero: "; cin>>n4;
    
    if ((n4 == n1) || (n4 == n2) || (n4 == n3)){
            cout<<"\nCoincide con uno de los numeros anteriores"<<endl;
    }
    else{
        cout<<"\nNo coincide con ninguno de los numeros anteriores"<<endl;
    }

    return 0;
}