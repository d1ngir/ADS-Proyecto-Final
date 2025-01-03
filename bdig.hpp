#ifndef __BDIG_HPP__
#define __BDIG_HPP__

#include <iostream>
#include <string>



namespace biblioteca
{
    class Usuario{
            protected:
                string nombre; 
                string folio;
            public:
                void setNombre(string n) { this->nombre = n; }
                void setFolio(string f) { this->folio = f; }
                        
                string getNombre() { return this->nombre; }
                string getFolio() { return this->folio; }
        };
        
        class Cliente : public Usuario{
            private:
                string prestamoc;
                string reservac;
                int multac;
            
            public:
                void setNombre(string n) { this->nombre = n; }
                void setFolio(string f) { this->folio = f; }
                void setPrestamoc(string p) { this->prestamoc = p; }
                void setReservac(string r) { this->reservac = r; }
                void setMultac(int m) { this->multac = m; }
                        
                string getNombre() { return this->nombre; }
                string getFolio() { return this->folio; }
                string getPrestamoc() { return this->prestamoc; }
                string getReservac() { return this->reservac; }
                int getMultac() { return this->multac; }
        };
        
        class Trabajador : public Usuario{
            private:
                string prestamof;
                string reservaf;
                string multaf;
            
            public:
                void setNombre(string n) { this->nombre = n; }
                void setFolio(string f) { this->folio = f; }
                void setPrestamof(string p) { this->prestamof = p; }	
                void setReservaf(string r) { this->reservaf = r; }
                void setMultaf(string m) { this->multaf = m; }		
                        
                string getNombre() { return this->nombre; }
                string getFolio() { return this->folio; }
                string getPrestamof() { return this->prestamof; }
                string getReservaf() { return this->reservaf; }
                string getMultaf() { return this->multaf; }
        };
        
        class Estante{
            private:
                int estante;
                string categoria;
                
            public:
                void setEstante(int e) { this->estante = e; }
                void setCategoria(string c) { this->categoria =c; }
            
                int getEstante() { return this->estante; }
                string getCategoria() { return this->categoria; }
        };
        
        class Libro{
            protected:
                string nlibro;	//nombre libro
                string alibro;	//autor libro
                string glibro;	//genero libro
                string elibro;	//editorial libro
                
                string flibro;	//folio libro
                int existencia;
                string estado;
            
            public:
                void setNlibro(string n) { this->nlibro = n; }
                void setAlibro(string a) { this->alibro = a; }
                void setGlibro(string g) { this->glibro = g; }
                void setElibro(string e) { this->elibro = e; }
                
                void setFlibro(string f) { this->flibro = f; }
                void setExistencia(int x) { this->existencia = x; }
                void setEstado(string s) { this->estado = s; }
                
                string getNlibro() { return this->nlibro; }
                string getAlibro() { return this->alibro; }
                string getGlibro() { return this->glibro; }
                string getElibro() { return this->elibro; }
            
                string getFlibro() { return this->flibro; }
                int getExistencia() { return this->existencia; }
                string getEstado() { return this->estado; }
        };
        
        class Prestamo{
            private:
                string foliop;
                string fechainip;	//fecha inicial p
                string fechaexp;	//fecha expiracion p
                
                int multap;
            
            public:
                void setFoliop(string f) { this->foliop = f; }
                void setFechainip(string e) { this->fechainip = e; }
                void setFechaexp(string c) { this->fechaexp = c; }
                void setMultap(int m) { this->multap = m; }
                
                string setFoliop() { this->foliop; }
                string setFechainip() { this->fechainip; }
                string setFechaexp() { this->fechaexp; }
                
                int setMultap() { this->multap; }
        };
        
        class Biblioteca{
            private:
                string registro;
                string utrabajador;	//Usuario trabajador
                string ucliente;	//Usuario cliente
                string prestamo;
                string reservacion;
                string consulta;
                string adeudo;
                boolean lista;
                string busqueda;
            
            public:
                
                void setRegistro(string r) { this->registro = r; }
                void setUtrabajador(string t) { this->utrabajador = t; }
                void setUcliente(string u) { this->ucliente = u; }
                void setPrestamo(string p) { this->prestamo = p; }
                void setReservacion(string e) { this->reservacion = e; }
                void setConsulta(string c) { this->consulta = c; }
                void setAdeudo(string a) { this->adeudo = a; }
                void setLista(boolean l) { this->lista = l; }
                void setBusqueda(string b) { this->busqueda = b; }
                
                string getRegistro() { return this->registro; }
                string getUtrabajador() { return this->utrabajador; }
                string getUcliente() { return this->ucliente; }
                string getPrestamo() { return this->prestamo; }
                string getReservacion() { return this->reservacion; }
                string getConsulta() { return this->consulta; }
                string getAdeudo() { return this->adeudo; }
                boolean getLista() { return this->lista; }
                string getBusqueda() { return this->busqueda; }
        };
}
