#include <iostream>
#include <math.h>

using namespace std;

int main()

{

int year,month,day edad;
cout << "Dime tu año de nacimiento: ";
cin >> year;
cout << "Dime el mes de tu nacimiento";
cin >> month;


while ((year <= 1910)|| (year >=2021)){

cout << "Dime una fecha de nacimiento valida: ";
cin >> year;
}
if


edad = 2021 - year;

cout <<  "Tu edad es de " << edad <<" años"<<endl;


return 0;

}

