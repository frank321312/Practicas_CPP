/*#include <iostream>

using namespace std;

int main(){
    float practica, teorica, particacipacion, nota_final;

    cout<<"Ingrese la nota de pracitca: "; cin>>practica;
    cout<<"Ingrese la nota teorica: "; cin>>teorica;
    cout<<"Ingrese la nota de participacion: "; cin>>particacipacion;

    practica *= 0.30;
    teorica *= 0.60;
    particacipacion *= 0.10;

    nota_final = practica + teorica + particacipacion;

    cout<<"\nLa final es: "<<nota_final<<endl;

    return 0;
}*/

#include <iostream>

using namespace std;

int main(){
    int cateto_a, cateto_b, hipotenusa;

    cout<<"Ingrese el cateto A: "; cin>>cateto_a;
    cout<<"Ingrese el cateto B: "; cin>>cateto_b;

    hipotenusa = (cateto_a*cateto_a) + (cateto_b*cateto_b);

    cout<<"\nLa hipotenusa es: "<<hipotenusa<<endl;

    return 0;
}