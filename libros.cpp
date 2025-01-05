#include "libros.hpp"
#include <iostream>
#include <vector>
#include <string>



using namespace std;
using namespace biblioteca;



Libro::Libro()
{
    this->nlibro = "";
    this->alibro = "";
    this->glibro = "";
    this->elibro = "";
}

Libro::Libro(string nlibro, string alibro, string glibro, string elibro)
{
    this->nlibro = nlibro;
    this->alibro = alibro;
    this->glibro = glibro;
    this->elibro = elibro;
}



Lista::Lista() {}

Lista::~Lista() {}

int Lista::size() 
{
    return libros.size(); 
}

void Lista::agregar(Libro libro)
{
    libros.push_back(libro); 
}

vector<string> Lista::getLista()
{
    vector<string> nombres;



    for (auto& libro:libros) 
    {
        nombres.push_back(libro.getNlibro());
    }

    return nombres;
}

string Lista::lista() 
{
    string resultado;



    for (size_t i = 0; i < libros.size(); ++i) 
    {
        resultado += to_string(i + 1) + ". " + libros[i].getNlibro() + " - " + libros[i].getAlibro() + " - " + libros[i].getGlibro() + " - " + libros[i].getElibro() + "\n";
    }

    return resultado;
}

Libro& Lista::getLibro(int index) 
{
    return libros.at(index); 
}



ListaCl::ListaCl() {}

ListaCl::~ListaCl() {}

int ListaCl::size() 
{
    return clientes.size(); 
}

void ListaCl::agregar(Cliente cliente)
{
    clientes.push_back(cliente); 
}

vector <string> ListaCl::getListaCl()
{
    vector<string> nombresCl;



    for (auto& cliente:clientes) 
    {
        nombresCl.push_back(cliente.getNombre());
    }

    return nombresCl;
}

string ListaCl::listaCl() 
{
    string resultadoCl;



    for (size_t i = 0; i < clientes.size(); ++i) 
    {
        resultadoCl += to_string(i + 1) + ". " + clientes[i].getFolio() + " - " + clientes[i].getNombre() + " - " + clientes[i].getPrestamoc() + " - " + clientes[i].getReservac() + " - " + to_string(clientes[i].getMultac()) + "\n";
    }

    return resultadoCl;
}

Cliente& ListaCl::getCliente(int numCl) 
{
    return clientes.at(numCl); 
}


ListaTr::ListaTr() {}

ListaTr::~ListaTr() {}

int ListaTr::size() 
{
    return trabajadores.size(); 
}

void ListaTr::agregar(Trabajador trabajador)
{
    trabajadores.push_back(trabajador); 
}

vector <string> ListaTr::getListaTr()
{
    vector< string> nombresTr;



    for (auto& trabajador:trabajadores) 
    {
        nombresTr.push_back(trabajador.getNombre());
    }

    return nombresTr;
}

string ListaTr::listaTr() 
{
    string resultadoTr;



    for (size_t i = 0; i < trabajadores.size(); ++i) 
    {
        resultadoTr += to_string(i + 1) + ". " + trabajadores[i].getNombre() + " - " + trabajadores[i].getFolio() + "\n";
    }

    return resultadoTr;
}

Trabajador& ListaTr::getTrabajador(int numTr) 
{
    return trabajadores.at(numTr); 
}
