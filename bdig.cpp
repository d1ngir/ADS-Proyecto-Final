#include "bdig.hpp"
#include <iostream>
#include <string>
#include <cstdlib>



using namespace std;
using namespace biblioteca;



string obtenerIniciales(string cadena, int n)
{
    return cadena.substr(0, n);
}

string generarFolioTrabajador(string nTrabajador, string aPTrabajador, string aMTrabajador, string cTrabajador) 
{
    string folioT;



    folioT += obtenerIniciales(nTrabajador, 3);
    folioT += obtenerIniciales(aPTrabajador, 3);
    folioT += obtenerIniciales(aMTrabajador, 3);
    folioT += obtenerIniciales(cTrabajador, 3);


    return folioT;
}

string generarFolioCliente(string nCliente, string aPCliente, string aMCliente, string cCliente) 
{
    string folioC;



    folioC += obtenerIniciales(nCliente, 3);
    folioC += obtenerIniciales(aPCliente, 3);
    folioC += obtenerIniciales(aMCliente, 3);
    folioC += obtenerIniciales(cCliente, 3);


    return folioC;
}

string generarFolioLibro(string nlibro, string alibro, string glibro, string elibro) 
{
    string folioL;



    folioL += obtenerIniciales(nlibro, 3);
    folioL += obtenerIniciales(alibro, 3);
    folioL += obtenerIniciales(glibro, 3);
    folioL += obtenerIniciales(elibro, 3);


    return folioL;
}



int main()
{
    int op1, tusuario;



    cout << "\n\n ----- BIENVENIDO -----" << endl;
    cout << "\n\n1. Registrar usuario." << endl;
    cout << "\n2. Registrar nuevo libro." << endl;
    cout << "\n3. Editar datos de libro." << endl;
    cout << "\n4. Prestamo de libros." << endl;
    cout << "\n5. Tramitar adeudos." << endl;
    cout << "\n6. Mostrar lista de libros." << endl;
    cout << "\n7. Abandonar." << endl;
    cout << "\n\nSELECCIONA UNA OPCION: " << endl;

    cin >> op1;

    while (op1 < 0 || op1 > 5)
    {
        cout << "\n\n----- ERROR -----\n Selecciona una opcion valida..." << endl;

        cout << "\n\n ----- BIENVENIDO -----" << endl;
        cout << "\n\n1. Registrar usuario." << endl;
        cout << "\n2. Registrar nuevo libro." << endl;
        cout << "\n3. Editar datos de libro." << endl;
        cout << "\n4. Prestamo de libros." << endl;
        cout << "\n5. Adeudos." << endl;
        cout << "\n6. Abandonar." << endl;
        cout << "\n\nSELECCIONA UNA OPCION: " << endl;

        cin >> op1;
    }

    if (op1 == 1)
    {
        cout << "\n\nSelecciona el tipo de usuario:" << endl;
        cout << "\n\n1. Trabajador." << endl;
        cout << "\n\n2. Cliente." << endl;

        cin >> tusuario;


        while (tusuario < 1 && tusuario > 2)
        {
            cout << "\n\n----- ERROR -----\n Selecciona una opcion valida..." << endl;

            cout << "\n\nSelecciona el tipo de usuario:" << endl;
            cout << "\n\n1. Trabajador." << endl;
            cout << "\n\n2. Cliente." << endl;

            cin >> tusuario;
        }

        if (tusuario == 1)
        {
            string nTrabajador, aPTrabajador, aMTrabajador, cTrabajador;



            cout << "\n\nIngresa el nombre del trabajador:" << endl;
            cin >> nTrabajador;

            cout << "\n\nIngresa el apellido paterno del trabajador:" << endl;
            cin >> aPTrabajador;

            cout << "\n\nIngresa el apellido materno del trabajador:" << endl;
            cin >> aMTrabajador;

            cout << "\n\nIngresa el correo del trabajador:" << endl;
            cin >> cTrabajador;


            string folioT = generarFolioTrabajador(nTrabajador, aPTrabajador, aMTrabajador, cTrabajador);


            cout << "\n\n----- FOLIO GENERADO EXITOSAMENTE. :) -----" << endl;
            cout << "\n\nFolio de usuario: " << folioT << endl;
        }

        if (tusuario == 2)
        {
            string nCliente, aPCliente, aMCliente, cCliente;



            cout << "\n\nIngresa el nombre del cliente:" << endl;
            cin >> nCliente;
            
            cout << "\n\nIngresa el apellido paterno del cliente:" << endl;
            cin >> aPCliente;

            cout << "\n\nIngresa el apellido materno del cliente:" << endl;
            cin >> aMCliente;

            cout << "\n\nIngresa el correo del cliente:" << endl;
            cin >> cCliente;


            string folioC = generarFolioCliente(nCliente, aPCliente, aMCliente, cCliente);


            cout << "\n\n----- FOLIO GENERADO EXITOSAMENTE. :) -----" << endl;
            cout << "\n\nFolio de usuario: " << folioC << endl;
        }
    }

    if (op1 == 2)
    {
        string nlibro, alibro, glibro, elibro;



        cout << "\n\nIngresa el titulo del libro:" << endl;
        cin >> nlibro;
            
        cout << "\n\nIngresa el nombre completo del autor del libro:" << endl;
        cin >> alibro;

        cout << "\n\nIngresa el genero al que pertenece el libro:" << endl;
        cin >> glibro;

        cout << "\n\nIngresa la editorial que distribuye el libro:" << endl;
        cin >> elibro;


        string folioL = generarFolioLibro(nlibro, alibro, glibro, elibro);


        cout << "\n\n----- LIBRO REGISTRADO EXITOSAMENTE. :) -----" << endl;
        cout << "\n\nFolio del libro: " << folioL << endl;
    }

    if (op1 == 3)
    {
        
    }

    if (op1 == 6)
    {
        cout << Lista.lista();
        cout << endl << "Hay " << Lista.size() << " libros" << endl;
    }
}
