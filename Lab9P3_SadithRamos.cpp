#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Mascota.h"
#include "Gato.h"
#include "Perro.h"
#include "Pez.h"
#include <fstream>
#include <sstream>
using namespace std;
void escribirEnArchivo(Mascota* temp) {
    ofstream archivo("Mascotas.txt" , ios::app);
    if (dynamic_cast<Perro*>(temp)) {
        archivo << "Perro," << temp->getNombre() << "," << temp->getEdad() << "," << temp->getHambre() << "," << temp->getVida() << "," << dynamic_cast<Perro*>(temp)->getLeal() << endl;
    } 
    if (dynamic_cast<Gato*>(temp)) {
        archivo << "Gato," << temp->getNombre() << "," << temp->getEdad() << "," << temp->getHambre() << "," << temp->getVida() << "," << dynamic_cast<Gato*>(temp)->getInd() << endl;
    }
    if (dynamic_cast<Pez*>(temp)) {
        archivo << "Pez," << temp->getNombre() << "," << temp->getEdad() << "," << temp->getHambre() << "," << temp->getVida() << "," << dynamic_cast<Pez*>(temp)->getNivel() << endl;
    }
    archivo.close();
}
void menu() {
    int opc;
    string nombre;
    int edad, ham, vida, atri;
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
            ifstream archivo("Mascotas.txt");
            string linea;

            while (getline(archivo, linea)) {
                istringstream iss(linea);
                string tipo, nombre, edad, hambre, vida, atributo;

                getline(iss, tipo, ',');
                getline(iss, nombre, ',');
                getline(iss, edad, ','); // ignorado
                getline(iss, hambre, ','); // ignorado
                getline(iss, vida, ',');
                getline(iss, atributo, ',');
                int vid = stoi(vida);
                int ed = stoi(edad);
                int atri = stoi(atributo);
                int ham = stoi(hambre);
                Perro* perro;
                Gato* gato;
                Pez* pez;
                if (tipo == "Perro") {
                    perro = new Perro(nombre, ed, ham, vid, atri);
                    mascotas.push_back(perro);
                }
                else if (tipo == "Gato") {
                    gato = new Gato(nombre, ed, ham, vid, atri);
                    mascotas.push_back(gato);
                }
                else
                {
                    pez = new Pez(nombre, ed, ham, vid, atri);
                    mascotas.push_back(pez);
                }

            }

        }
        else if (opc == 2) {
            for (auto* m : mascotas) {
                if (dynamic_cast<Perro*>(m)) {
                    cout << "Perro: " << m->getNombre() << " Edad: " << m->getEdad() << " Hambre: " << m->getHambre() << " Vida: " << m->getVida() << " Lealtad: " << dynamic_cast<Perro*>(m)->getLeal() << endl;
                } if (dynamic_cast<Gato*>(m)) {
                    cout << "Gato: " << m->getNombre() << " Edad: " << m->getEdad() << " Hambre: " << m->getHambre() << " Vida: " << m->getVida() << " Independencia: " << dynamic_cast<Gato*>(m)->getInd() << endl;
                }if (dynamic_cast<Pez*>(m)) {
                    cout << "Pez: " << m->getNombre() << " Edad: " << m->getEdad() << " Hambre: " << m->getHambre() << " Vida: " << m->getVida() << " Nivel de Color: " << dynamic_cast<Pez*>(m)->getNivel() << endl;

                }
            }
        }
        //\n
        else if (opc == 3) {
            int x;
            cout << "1. Perro" << endl;
            cout << "2. Gato" << endl;
            cout << "3. Pez" << endl;
            cin >> x;

            if (x == 1) {
                cout << "Nombre: \n";
                cin >> nombre;
                do
                {
                    cout << "Edad: \n";
                    cin >> edad;
                } while (edad > 20 || edad < 0);
                do
                {
                    cout << "Hambre: \n";
                    cin >> ham;

                } while (ham > 100 || ham < 0);
                do
                {
                    cout << "Vida: \n";
                    cin >> vida;

                } while (vida > 100 || vida < 0);
                do
                {
                    cout << "Lealtad: \n";
                    cin >> atri;
                } while (ham > 100 || ham < 0);
                Perro* p = new Perro(nombre, edad, ham, vida, atri);
                mascotas.push_back(p);
                escribirEnArchivo(p);

            }
            else if (x == 2) {
                cout << "Nombre: \n";
                cin >> nombre;
                do
                {
                    cout << "Edad: \n";
                    cin >> edad;
                } while (edad > 20 || edad < 0);
                do
                {
                    cout << "Hambre: \n";
                    cin >> ham;

                } while (ham > 100 || ham < 0);
                do
                {
                    cout << "Vida: \n";
                    cin >> vida;

                } while (vida > 100 || vida < 0);
                do
                {
                    cout << "Independencia: \n";
                    cin >> atri;

                } while (atri > 100 || atri < 0);

                Gato* p = new Gato(nombre, edad, ham, vida, atri);
                mascotas.push_back(p);
                escribirEnArchivo(p);
            }
                else if (x == 3) {
                        cout << "Nombre: \n";
                        cin >> nombre;
                        do
                        {
                            cout << "Edad: \n";
                            cin >> edad;
                        } while (edad > 20 || edad < 0);
                        do
                        {
                            cout << "Hambre: \n";
                            cin >> ham;

                        } while (ham > 100 || ham < 0);
                        do
                        {
                            cout << "Vida: \n";
                            cin >> vida;

                        } while (vida > 100 || vida < 0);
                        do
                        {
                            cout << "Varieda de Color: \n";
                            cin >> atri;

                        } while (atri > 100 || atri < 0);

                        Pez* p = new Pez(nombre, edad, ham, vida, atri);
                        mascotas.push_back(p);
                        escribirEnArchivo(p);
                    }
                }

                else if (opc == 4) {

                }

                else if (opc == 5) {

                }

                else if (opc == 6) {
                    int num;
                    for (int i = 0; i < mascotas.size(); i++)
                    {
                        cout << i << " " << mascotas.at(i)->getNombre() << endl;
                    }
                    cout << "Que mascota necesita ver?" << endl;
                    cin >> num;
                    mascotas.at(num)->mostrarEstado();
                }

                else if (opc == 7) {
                    cout << "Saliendo...";
                }
                else
                {
                    cout << "OPCION INVALIDA" << endl;
                }
            }while (opc != 7);
            for (auto* m : mascotas) delete m;
        }

   

int main()
{
    srand(time(0));
    menu();
}
