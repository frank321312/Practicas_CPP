/*#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float x, y, resultado = 0;

    cout<<"Ingrese el valor de x: "; cin>>x;
    cout<<"Ingrese el valor de y: "; cin>>y;

    resultado = (sqrt(x)) / ((y*y)-1);

    cout<<"\nEl resultado es: "<<resultado<<endl;

    return 0;
}*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a, b, c, resultado_1 = 0, resultado_2 = 0, division_1 = 0, division_2 = 0;

    cout<<"Ingrese el valor de A: "; cin>>a;
    cout<<"Ingrese el valor de B: "; cin>>b;
    cout<<"Ingrese el valor de C: "; cin>>c;

    resultado_1 = (-b + sqrt((b*b)-(4*a*c))) / (2*a);
    resultado_2 = (-b - sqrt((b*b)-(4*a*c))) / (2*a);

    cout.precision(2);
    cout<<"\nEl primer resultado es: "<<resultado_1<<endl;
    cout<<"El segundo resultado es: "<<resultado_2<<endl;

    return 0;
}