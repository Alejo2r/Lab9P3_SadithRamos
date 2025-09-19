#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Mascota.h"
#include "Gato.h"
#include "Perro.h"
#include "Pez.h"
using namespace std;
void menu() {
    int opc;
    vector<Mascota*> mascotas;
    do
    {
        cout << "1. Cargar Mascotas" << endl;
        cout << "2. Listar Mascotas" << endl;
        cout << "3. Crear Mascotas" << endl;
        cout << "4. Alimentar Mascotas" << endl;
        cout << "5. Pasear Mascotas" << endl;
        cout << "6. Ver Estado Mascota" << endl;
        cout << "7. Salir" << endl;
        cin >> opc;
        if (opc == 1) {

        }else if (opc == 2) {

        }else if (opc == 3) {

        }else if (opc == 4) {

        }else if (opc == 5) {

        }else if (opc == 6) {

        }else if (opc == 7) {
            cout << "Saliendo...";
        }
        else
        {
            cout << "OPCION INVALIDA" << endl;
        }
    } while (opc != 7);
    for (auto* m : mascotas) delete m;
}
int main()
{
    srand(time(0));
    menu();
}