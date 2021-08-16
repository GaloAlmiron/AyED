#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

#define MAX_SIZE 16

// Estructura de los datos invitados

typedef struct
{
    string nombre;      // Nombre del invitado
    string apellido;    // Apellido del invitado
    int nro;            // Numero de ticket
    string confirma;      // Confirmacion de la invitacion

}Datos;

const int tope = 200; // de 0 a 200
typedef Datos tInvitados[tope];

typedef struct
{
    tInvitados invitados;
    int contador;
} tLista;

//Funciones
void cargarArchivo (const string path, tLista& LISTA);  // Cargar los datos en memoria
void mostrardatos(tLista &LISTA);                       //Funcion que se encarga de agregar datos a la lista

void agregar(tLista &LISTA);                            // Agregar invitados a la lista
void quitar(tLista& LISTA, int pos);               // Quitar invitados de la lista
void modificarInvitados (tLista& LISTA, int pos , int cambios); //Modificar los datos
void finalizar(tLista LISTA, const string path);                    //Finalizar el archivo
int searchPosition (tLista LISTA, int numticket);       // Funcion para buscar invitado por numero de ticket
int opciones();                     // menu de opciones a modificar



int main(){


tLista list;
int opcion;

cargarArchivo ("Invitados.txt", list);

do{

        cout << "Bienvenido a Fiesta Aniversario de Studio 54. ¿Que desea realizar?." << endl;
        cout << "1. Imprimir lista de invitados." << endl;
        cout << "2. Agregar a un invitado." << endl;
        cout << "3. Quitar a un invitado." << endl;
        cout << "4. Modificar los datos de un invitado." << endl;
        cout << "5. Finalizar" << endl;
        cin >> opcion;

        switch (opcion){

            case 1: mostrardatos(list );
            break;
            case 2: agregar(list);
            break;
            case 3: {
                    int numticket;
                    int pos;
                    int opcion;

                    cout << "Si esta seguro de querer borrar al invitado de la lista, escriba 1 " ;
                    cin >> opcion;



                    if(opcion == 1){

                    cout << endl << "ingrese numero de ticket: "; cin >> numticket;

                    pos = searchPosition (list, numticket);

                    quitar (list, pos);
                    cout << "Invitado eliminado con exito";
                    cout << endl;
                    }else{
                        cout << endl;
                        };
            }
            break;
            case 4:
                    {

                    int numticket;
                    int pos;
                    int cambios;

                    cout  << "ingrese numero de ticket: " << endl;
                    cin >> numticket;

                    pos = searchPosition (list, numticket);

                    cambios = opciones();

                    modificarInvitados(list, pos, cambios);

            } break;
            case 5: {

            finalizar (list, "Invitados.txt");


                cout << "Nos vemos!";

                return 0;
            }
        }

    }while(opcion <= 5);


};


// Cargar los datos en memoria

void cargarArchivo (const string path, tLista& LISTA)
{
    ifstream archivoLista;
    char aux;

    int contador  = 0;

    archivoLista.open(path);

    if (archivoLista.is_open())
    {
            archivoLista >> LISTA.invitados[LISTA.contador].nro;
            archivoLista >> LISTA.invitados[LISTA.contador].nro;

            archivoLista.get(aux);
            getline(archivoLista, LISTA.invitados[LISTA.contador].nombre);

            getline(archivoLista, LISTA.invitados[LISTA.contador].apellido);



            archivoLista  >> LISTA.invitados[LISTA.contador].confirma;


            LISTA.contador += 1;

    }

    archivoLista.close();

    return;
}

// Funcion que se encarga de mostrar los datos en pantalla

void mostrardatos(tLista &LISTA){

    cout << endl;
    cout << "Lista de de Invitados" << endl;

    cout << "Nombre" << "      |       " << "Apellido" << "       |      " << "Confirmación";
    cout << "        |       " << "Nro. Ticket"<< endl;

    cout << endl;



    for (int i=0; i < LISTA.contador; i++)
    {

        cout  << LISTA.invitados[i].nombre  << "        |       ";
        cout  << LISTA.invitados[i].apellido << "        |       "  << LISTA.invitados[i].confirma << "         |       ";
        cout  << LISTA.invitados[i].nro<< endl;


    }

    cout << endl;

    return;

};

//Funcion que se encarga de agregar datos a la lista

void agregar(tLista &LISTA ){

    cin.ignore();

    cout << endl;

    int opconfirm;
    cout << "Nuevo invitado." << endl;
    cout << "Introduzca su nombre/s: " ;
    getline(cin,LISTA.invitados[LISTA.contador].nombre);
    cout << "Introduzca el apellido: " ;
    getline(cin,LISTA.invitados[LISTA.contador].apellido);
    cout << "Escriba uno(1) para confirmar su invitacion o dos(2) para negarla: " << endl;
    cin >>  opconfirm ;

    cout << endl;
    while (opconfirm != 1 && opconfirm != 2 ){

        cout << "Escriba uno(1) para confirmar su invitacion o dos(2) para negarla: " ;
        cin >>  opconfirm ;
        }

        switch (opconfirm){
        case 1: LISTA.invitados[LISTA.contador].confirma = "si";
                break;
        case 2: LISTA.invitados[LISTA.contador].confirma = "no";
                break;

    }

    LISTA.invitados[LISTA.contador].nro  =  1500;

    for (int i=0; i < LISTA.contador; i++){

        LISTA.invitados[LISTA.contador].nro  += 1;

    }


    LISTA.contador += 1;


    return;
}

// Quitar invitados de la lista

void quitar (tLista& LISTA, int pos)
{
    for (int i = pos; i < LISTA.contador - 1; i++)
    {
        LISTA.invitados[i].nro = LISTA.invitados[i+1].nro;
        LISTA.invitados[i].apellido = LISTA.invitados[i+1].apellido;
        LISTA.invitados[i].nombre = LISTA.invitados[i+1].nombre;

    }

    LISTA.contador = LISTA.contador -1;

    return;
}

//Finalizar el archivo

void finalizar (tLista LISTA, const string path)
{
    ofstream archivoLista;

    archivoLista.open(path);

    for (int i=0; i < LISTA.contador; i++)
    {
        archivoLista << endl;
        archivoLista << "Nombre: " <<LISTA.invitados[i].nombre << endl;
        archivoLista << "Apellido: "<< LISTA.invitados[i].apellido << endl;
        archivoLista << "Confirmacion: "<< LISTA.invitados[i].confirma << endl;
        archivoLista << "Nro ticket: "<< LISTA.invitados[i].nro<<endl;

    }

    return;
}

//Modificar los datos

void modificarInvitados (tLista& LISTA, int pos , int cambios)
{
    int aux;

    cin.ignore();

    switch (cambios)
    {
        case 1:
        {
            cout << "Nombre/s: ";
            getline(cin,LISTA.invitados[pos].nombre);
        } break;

        case 2:
        {
            cout << "Apellido: "; getline(cin,LISTA.invitados[pos].apellido);
        } break;

        case 3:
        {
            cout << "Confirme su invitación.Seleccione (1) para afirmar  o (2) para negar ";
            cin >> aux;


            if (aux == 1)
            {
                LISTA.invitados[pos].confirma = "Si";
            }
            else
            {
                LISTA.invitados[pos].confirma = "No";
            }
        } break;

        case 4:
        {
            cout << "Actualizando datos" << endl;
            cout << "Nombre: "; getline(cin,LISTA.invitados[pos].nombre);
            cout << "Apellido: "; getline(cin,LISTA.invitados[pos].apellido);
            cout << "Confirmado (1 para afirmar o 2 para negar): "; cin >> aux;


            if (aux == 1)
            {
            LISTA.invitados[pos].confirma = "Si";
            }
            if(aux == 2)
            {
                LISTA.invitados[pos].confirma = "No";
            }
        }
    }

    cout << endl;

    return;
}

// Funcion para buscar invitado por numero de ticket

int searchPosition (tLista LISTA, int numticket)
{
    int pos = -1;

    do
    {
        pos++;
    } while (LISTA.invitados[pos].nro != numticket);

    return pos;
}

int opciones ()
{
    int op;

    do
    {
        cout << "Que desea cambiar?" << endl;
        cout << "1.- Nombre/s: " << endl;
        cout << "2.- Apellido/S: " << endl;         //Elegir que
        cout << "3.- Confirmacion: " << endl;
        cout << "4.- Todo: " << endl;
        cin >> op;

    } while (op<1 || op>6);

    return op;
}
