
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
        // Muestra todas las interfaces de red y la direccion IP del host
        cout << "Mostrando todas las interfaces de red y dirección IP del dispositivo...\n";
        system("sudo ifconfig -a && ip route get 1 | awk '{print $NF;exit}'");
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
        cout << "1. ICMP_PDU\n";//Filtrar las PDUs del protocolo ICMP
        cout << "2. ARP_PDU\n";//Filtrar las PDUs del protocolo ARP
        cout << "Opción: ";
        int filtro;
        cin >> filtro;//Filtrar por numero entero 1 o 2
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
        // Mostrar la versión del kernel y la versión del sistema operativo
        cout << "Mostrando la versión del kernel y el nombre del sistema operativo...\n";
        system("uname -a && cat /etc/*-release | grep DISTRIB_DESCRIPTION"); //grep es un comando que se utiliza para buscar un patrón de texto en la salida del comando cat
        break;
    }
    case 5:
    {
        // Mostrar el nombre del usuario y del host
        cout << "Mostrando el nombre del usuario y del host...\n";
        system("whoami && hostname");//NOMBRE USUARIO Y NOMBRE DEL HOST
        break;
    }
    case 6:
    {
        // Verificar conectividad con Google
        cout << "Verificando conectividad con Google\n";
        system("ping -c 5 google.com");//5 paquetes ICMP(el 5 lleva premio jaja)
        break;
    }
    case 7:
    {
        // Salir
        cout << "Saliendo...\n";
