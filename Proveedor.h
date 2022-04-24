#pragma once
#include <iostream>
using namespace std;
class Proveedor
{

	protected: string proveedores, nit, direccion;
			 int telefono;

	protected:
		Proveedor() {
		}
		Proveedor(string pro, string n, string dire, int tel) {
			proveedores = pro;
			nit = n;
			direccion = dire;
			telefono = tel;
		}
	};

