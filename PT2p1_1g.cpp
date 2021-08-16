#include <iostream>
#include <math.h>

using namespace std;

int main(){

int s,m,h;

cout << "Dime el tiempo en segundos: ";
cin >> s;

while (s <= 0 ){
    cout << "Los segundos tiene que ser un numero positivo";
    cin >> s;
}


if (s >= 60){

    m = s /60;
    s = s % 60;

}if (m >= 60){

    h = m / 60;
    m = m % 60;
}


cout  << "El tiempo es de " << h  << ":" << m << ":" << s <<endl;





return 0;
}
