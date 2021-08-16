//codigo dos

#include <iostream>
using namespace std;

typedef enum { empanadas, provoleta , ensalada  } tPrimerplato;
typedef enum { ravioles, risotto , bife, pizza, pollo} tSegplato;
typedef enum { tiramisu, helado, flan, fruta, cheesecake  } tTercerplato;

string cadPrimerplato(tPrimerplato primerplato);
string cadSegplato(tSegplato segplato);
string cadTercerplato(tTercerplato tercerplato);

void entrada(tPrimerplato);

int main() {

tPrimerplato primerplato;

entrada(primerplato);


return 0;
};

void entrada (tPrimerplato){

int usuario;

cout << "¿Qué desea pedir como primer plato?" << endl;
cout << "1. Empanadas criollas" << endl;
cout << "2. Provoleta a la parrilla" << endl;
cout << "3. Ensalada con lechuga, tomate y cebolla" << endl;

cin >> usuario;

if (usuario == 1){
    tPrimerplato c = tPrimerplato(usuario - 1);
    cout << "Usted ha pedido " <<  c << ", que disfrute su comida." << endl;

    }else{cout <<"asd"  <<endl;}
}
