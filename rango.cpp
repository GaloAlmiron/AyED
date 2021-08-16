#include <iostream>
#include <math.h>

using namespace std;

int rango1;
int num;
int rangototal(int x, int b);

int main(){

    cout << "Dime un rango: ";
    cin >> rango1;
    cout << "Dime un numero: ";
    cin >> num;

    cout << rangototal(rango1, num) << endl;

    return 0;
}

int rangototal (int x, int b){

    int resultrango = rango1 - num;

    if(resultrango >= 0){

        cout << "Tu numero esta dentro del rango" <<endl;

        return 0;
        }else{

            cout << "Tu numero esta fuera del rango" <<endl;

            return 0;
        }


}
