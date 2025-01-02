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


string Libro::getNombreL() {return this->nlibro;}
string Libro::getAutorL() {return this->alibro;}
string Libro::getGeneroL() {return this->glibro;}
string Libro::getEditorialL() {return this->elibro;}

void Libro::getNombreL(string nlibro) {this->nlibro = nlibro;}
void Libro::getAutorL(string alibro) {this->alibro = alibro;}
void Libro::getGeneroL(string glibro) {this->glibro = glibro;}
void Libro::getEditorialL(string elibro) {this->elibro = elibro;}



//Constructor y destructor de lista (el destructor es imprescindible para evitar fugas de memoria)
Lista::Lista()
{
    this->_lista = nullptr;
    this->cont = 0;
}

Lista::~Lista()
{
    if (this->_lista != nullptr)
    {
        delete[] this->_lista;
    }
}



int Lista::size() {return this->cont;}


void Lista::agregar(Libro libro)
{
    Libro *tmp = new libro[cont + 1];



    if (cont > 0)
    {
        copy(_lista, _lista + cont, tmp);
        delete[](this->_lista);
        this->_lista = tmp;
    }

    else
    {
        this->_lista = tmp;
    }

    copy(&libro, (&libro) + 1, _lista + cont);
    cont++;
}

vector<string> Lista::getLista()
{
    string lib;
    vector<string> listalibros;



    for (int i = 0; i < cont; i++)
    {
        lib = _lista[i].getNombreL() + " - " + _lista[i].getAutorL() + " - " + _lista[i].getGeneroL() + " - " + _lista[i].getEditorialL();
        listalibros.push_back(lib);
    }
    return listalibros;
}

string Agenda::lista()
{
    string mlibros = "";



    for (int i = 0; i < cont; i++)
    {
        mlibros = mlibros.append(to_string(i + 1));
        mlibros = mlibros.append(" - ");
        mlibros = mlibros.append((*(this->_lista + i)).getNombreL());
        mlibros = mlibros.append(" - ");
        mlibros = mlibros.append((*(this->_lista + i)).getAutorL());
        mlibros = mlibros.append(" - ");
        mlibros = mlibros.append((*(this->_lista + i)).getGeneroL());
        mlibros = mlibros.append(" - ");
        mlibros = mlibros.append((*(this->_lista + i)).getEditorialL());
        mlibros = mlibros.append("\n");
    }
    
    return mlibros;
}
