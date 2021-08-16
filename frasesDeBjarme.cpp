#include <iostream>
#include <string>


using namespace std;

#include <fstream>
#include <iomanip>

string inter(string x);

int main(){

    string frases;

    ofstream archivo;

    archivo.open("frasesDeBjarme.txt");

    cout << "Introduzca su frase(ponga fin para terminar): ";

    getline(cin, frases);

    while (frases != "fin"){

        archivo << frases << "\n"<<inter(frases)  << endl;

        cout << "Introduzca su frase(ponga fin para terminar): ";

        getline(cin, frases);
    };

    archivo.close();

    return 0;
}

// Función que se encarga de agregarle interlineado al texto (1.b)
string inter(string x){

std::string str (x);

string interlineado  = "--";

int f = str.length();

int contador = 1;
while(f >= contador ){

   contador += 1;
   interlineado += "-";

}

return interlineado;

};
