
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Actualizar la lista de paquetes
    cout << "Actualizando la lista de paquetes...\n";
    system("sudo apt-get update");

    // Actualizar los paquetes instalados
    cout << "Actualizando los paquetes instalados...\n";
    system("sudo apt-get upgrade");
    
    //Instalar net-tools
    cout <<"Instalando net-tools...\n";
    system("sudo apt-get install net-tools");

    // Instalar Wireshark
    cout << "Instalando Wireshark...\n";
    system("sudo apt-get install wireshark");

    // Instalar tcpdump
    cout << "Instalando tcpdump...\n";
    system("sudo apt-get install tcpdump");

    cout << "El script ha finalizado correctamente.\n";
    return 0;
}
