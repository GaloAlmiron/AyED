#include <iostream>
#include <math.h>

using namespace std;

int main(){

double f,c;
int usuario;
cout << "Dime que operacion deseas realizar. \n 1. Pasar de �C a �F \n 2. Pasar de �F a �C \n" ;
cin >> usuario;

while (usuario != 1 && usuario != 2){

    cout << "Introduzca 1 o 2 segun lo que desee realizar.\n 1. Pasar de �C a �F \n 2. Pasar de �F a �C \n";
    cin >> usuario;
}

if (usuario == 1){

    cout << "Dime la temperatura en grados centigrados: ";
    cin >> c;

    f = (c * 9/5) + 32;

    cout << c << "�C es igual a " << f << "�F" << endl;
}else {

    cout << "Dime la temperatura en grados farenheit: ";
    cin >> f;

    c = 5 * (f - 32) / 9;

    cout << f << "�F es igual a " << c << "�C" << endl;
}


return 0;
}
