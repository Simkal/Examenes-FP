
#include"ListaProductos.h"

using namespace std;

 void inicializar (tListaProd & productos){
	 productos.producto = new tProducto [MAX_PRODUCTO];
	 productos.contador = 0;
 }

void insertaProd (tListaProd & productos, const tProducto & producto){
	if (productos.contador < MAX_PRODUCTO){
		productos.producto[productos.contador] = producto;
		productos.contador++;
	}
}

void muestra (const tListaProd & productos){
	for (int i = 0; i < productos.contador; i++){
		muestra (productos.producto[i]);
	}
}

double totalVentas (tListaProd & productos){
	double ventaTotal = 0;
	for(int i = 0; i < productos.contador; i++){
		ventaTotal += totalVenta (productos.producto[i]);
	}
	return ventaTotal;
}

void destruye (tListaProd & productos){
	delete [] productos.producto;
}
