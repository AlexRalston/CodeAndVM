
#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int main()
{
int opcion;
cout << "Elija una opción:\n";
cout << "1. Mostrar todas las interfaces de red\n";
cout << "2. Abrir Wireshark\n";
cout << "3. Abrir tcpdump\n";
cout << "4. Mostrar la versión del kernel y el nombre del sistema operativo\n";
cout << "5. Mostrar el nombre del usuario y del host\n";
cout << "6. Verificar conectividad con Google y todos sus dominios\n";
cout << "7. Salir\n";
cout << "Opción: ";
cin >> opcion;
  switch (opcion)
{
    case 1:
    {
        // Mostrar todas las interfaces de red
        cout << "Mostrando todas las interfaces de red...\n";
        system("sudo ifconfig -a");
        break;
    }
    case 2:
    {
        // Abrir Wireshark
        cout << "Abriendo Wireshark...\n";
        system("sudo wireshark");
        break;
    }
    case 3:
    {
        // Abrir tcpdump
        cout << "Abriendo tcpdump...\n";
        cout << "Elija una opción de filtro:\n";
        cout << "1. ICMP_PDU\n";
        cout << "2. ARP_PDU\n";
        cout << "Opción: ";
        int filtro;
        cin >> filtro;
        if (filtro == 1)
        {
            system("sudo tcpdump icmp");
        }
        else if (filtro == 2)
        {
            system("sudo tcpdump arp");
        }
        else
        {
            cout << "Opción inválida\n";
        }
        break;
    }
    case 4:
    {
        // Mostrar la versión del kernel y el nombre del sistema operativo
        cout << "Mostrando la versión del kernel y el nombre del sistema operativo...\n";
        system("uname -a && cat /etc/*-release");
        break;
    }
    case 5:
    {
        // Mostrar el nombre del usuario y del host
        cout << "Mostrando el nombre del usuario y del host...\n";
        system("whoami && hostname");//NOMBRE USUARIO Y HOST
        break;
    }
    case 6:
    {
        // Verificar conectividad con Google y todos sus dominios
        cout << "Verificando conectividad con Google\n";
        system("ping -c 5 google.com");//5 trazas ICMP
        break;
    }
    case 7:
    {
        // Salir
        cout << "Saliendo...\n";
