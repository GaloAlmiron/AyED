#include <iostream>
#include <math.h>

using namespace std;

int main()

{
double radio,altura,volumen;

radio = 14,5 ;
altura = 26,79 ;
volumen = (3,141592 * pow(radio,2) * altura)/3 ;

cout << "El volumen del cono es de " << volumen <<endl;


return 0;

}
