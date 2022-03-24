// Practica_Pilas-y-Columnas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Eric Isaac Rosas Vazquez y Oscar Rios
// 23/03/2022
// 

#include <iostream>
#include <conio.h>
#include <queue>
#include <stack>

using namespace std;

struct Nodo
{
    int dato;
    Nodo* siguiente;
};

void agregarPila(Nodo*&, int);
void mostrarPila(Nodo*&, int&);

int main()
{
    Nodo* pila = NULL;
    int eleccion;
    int dat;
    bool primo = true;
    int seepila;

    do
    {
        cout << "MENU" << endl;
        cout << "1 Para Insertar un Numero a la pila " << endl;
        cout << "2 Para Mostrar los Numeros de la pila " << endl;
        cout << "3 Para salir " << endl;
        cout << "Digite su opcion " << endl;

        cin >> eleccion;
        if (eleccion == 1)
        {
            cout << "Digite un numero " << endl;
            cin >> dat;
            for (int i = 2; i < dat; i++)
            {
                if (dat % i == 0) primo = false;
            }
            if (primo == true)
            {
                cout << "el numero es primo, se agregará a la pila secundaria" << endl;

            }
            else
            {
                agregarPila(pila, dat);
            }
        }
        else
        {
            if (eleccion == 2)
            {

                while (pila != NULL)
                {
                    //posible if para mostrar alguna de las 2 pilas, si la principal o la secundaria con numeros primos
                    if (true)
                    {               
                        mostrarPila(pila, dat);
                        if (pila != NULL)
                        {
                            cout << dat << " ";
                        }
                        else
                        {
                            cout << dat << " ";
                        }
                     }
                    else
                    {
                        mostrarPila2(pila, dat);
                            if (pila != NULL)
                            {
                                cout << dat << " ";
                            }
                            else
                            {
                                cout << dat << " ";
                            }
                    }
                }
            }
            else
            {
                if (eleccion == 3)
                {
                    return 0;
                }
                else
                {
                    cout << "Solo hay 3 opciones jajaja pon otra un numero del 1 al 3 segun lo que quieras " << endl;
                }
            }
        }
    } while (true);
    cout << " " << endl;
    return 0;
}

void agregarPila(Nodo*& pila, int n)
{
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    cout << "El elemento " << n << " ha sido agregado a la pila jijiji " << endl;
}

void agregarPila2(Nodo*& pila2, int n2)
{
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n2;
    nuevo_nodo->siguiente = pila2;
    pila2 = nuevo_nodo;

    cout << "El elemento " << n2 << " ha sido agregado a la pila secundaria jejeje " << endl;
}
//¨Pila par alos normales
void mostrarPila(Nodo*& pila, int& n)
{
    Nodo* aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
    cout << "Los numeros de la pila son: " << endl;
}
// Pila para los primos Viva el norte chingado juas juas juas, saquen la carnita asada y las cheves
void mostrarPila2(Nodo*& pila2, int& n2)
{
    Nodo* aux = pila2;
    n2 = aux->dato;
    pila2 = aux->siguiente;
    delete aux;
    cout << "Los numeros de la pila son: " << endl;
}