#include <iostream>
#include <math.h>



using namespace std;

int n1, n2, usuario;
int suma(int x , int b);
int rest(int x , int b);
int mult(int x , int b);
int div(int x , int b);

int main(){

cout << "Dime 2 números: ";
cin >> n1 >> n2;

cout << "Que operacion desea realizar [1]Suma [2]Resta [3]Multiplicar [4]Dividir: ";
cin >> usuario;

if(usuario == 1){
    cout << "El resultado de la suma es de: " << suma(n1,n2) << endl;
}if(usuario == 2){
    cout << "El resultado de la resta es de: " << rest(n1,n2) << endl;
}if (usuario == 3){
    cout << "El resultado de la multiplicacion es de: " << mult(n1,n2) << endl;
}if(usuario == 4){
    cout << "El resultado de la divicion es de: " << div(n1,n2)<< endl;
}

return 0;

}

int suma(int x , int b){

    int resultado = n1 + n2;
    return resultado;
}

int rest(int x , int b){

    int resultado = n1 - n2;
    return resultado;
}

int mult(int x , int b){

    int resultado = n1 * n2;
    return resultado;
}

int div(int x , int b){

    int resultado = n1 / n2;
    return resultado;
}
