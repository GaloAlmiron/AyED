#include <iostream>
#include <math.h>

using namespace std;

int main(){

double f,c;

cout << "Dime la temperatura en grados Fahrenheit: ";
cin >> f;

c = 5 * (f - 32) / 9;

cout << "La temperatura es de " << c << "�C." << endl;

return 0;
}
