#include <iostream>
#include <math.h>


using namespace std;

int primo (int num);
int num;
int esprimo;

main(){

    cout << "Dime un numero: ";
    cin >> num;

    if(primo(num) == 0){

    cout << "Tu numero es primo." << endl;


    }else{

    cout << "Tu numero no es primo." << endl;
    }

    return 0;
}

int primo(int num){

    if (num % 2 == 0){

    esprimo = 0;

    }else {

        esprimo = 1;

    }

    return esprimo;

}

