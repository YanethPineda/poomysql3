#pragma once
#include "Proveedor.h"
class Empresa :
    public Proveedor
{

private: string id;

public:
	Empresa() {
	}

	Empresa(string pro, string n, string dire, int tel, string d) : Proveedor(pro, n, dire, tel) {
		id = d;
	}

	void setId(string d) { id = d; }
	void setProveedores(string pro) { proveedores = pro; }
	void setNit(string n) { nit = n; }
	void setDireccion(string dire) { direccion = dire; }
	void setTelefono(int tel) { telefono = tel; }

	string getId() { return id; }
	string getProveedores() { return proveedores; }
	string getNit() { return nit; }
	string getDireccion() { return direccion; }
	int getTelefono() { return telefono; }


	
};

