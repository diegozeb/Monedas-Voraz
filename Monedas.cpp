#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


void DevolverCambio(int monedas[], int c, int p, int respuesta[])
{
    int act = 0;
    int j = c;


    for (int i = 0; i < c; i++) 
    {
        respuesta[i] = 0;
    }
    
    while (act != p) 
    {
        while ((monedas[j] > (p - act)) && (j > 0)) 
        {
            j=j-1;
        }

        if (j == 0) 
        {
            cout << "No existe solucion";
        }

        respuesta[j] = floor( ( (p-act) / monedas[j]) );

        act = act + monedas[j] * respuesta[j] ;
    }

    for (int k = 0; k < c; k++) 
    {
        cout << "El Numero Minimo de monedas de" << monedas[k] << "es" << respuesta[k];
    }
}



int main()
{
    int monedas[] = { 1,2,5,10,20,50,100,200 };
    int c = 8;
    int p = 389;

    int respuesta[] = {0,0,0,0,0,0,0,0};

    DevolverCambio(monedas, c, p, respuesta);
}
