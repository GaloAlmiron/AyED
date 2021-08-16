#include <iostream>

#include <string>

using namespace std;

#include <fstream>

int main() {

string CUIT, producto;

int unidades;

double precio;

char aux;

ofstream archivo;

archivo.open("output.txt"); // Apertura (creación)

cout << "CUIT del cliente (X para terminar): ";

cin >> CUIT;


while (CUIT != "X") {

// Queda pendiente el Intro anterior...

cin.get(aux); // Leemos el Intro

cout << "Producto: ";

getline(cin, producto);

cout << "Unidades: ";

cin >> unidades;

cout << "Precio: ";

cin >> precio;

// Escribimos los datos en una línea del archivo...

// Con un espacio de separación entre ellos

archivo << CUIT << " " << unidades << " "

<< precio << " " << producto << endl;

cout << "CUIT del cliente (X para terminar): ";

cin >> CUIT;

}
// Escribimos el centinela final...

archivo << "X";

archivo.close(); // Cierre del archivo

return 0;

}
