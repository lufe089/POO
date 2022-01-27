#include "DetalleFactura.h"

DetalleFactura::DetalleFactura()
{
}

DetalleFactura::DetalleFactura(Producto producto, int cantUnidVend,
                               float valorPagarSinIVA, float valorTotalIVA, float valorTotal)
{
    this->producto = producto;
    this->cantUnidVend = cantUnidVend;
    this->valorPagarSinIVA = valorPagarSinIVA;
    this->valorTotalIVA = valorTotalIVA;
    this->valorTotal = valorTotal;
}

void DetalleFactura::mostrarDetalle()
{
    cout << producto.getNombre() << "\t" << cantUnidVend << "\t" << valorPagarSinIVA << "\t" << valorTotalIVA << "\t" << valorTotal << "\n";
}

Producto DetalleFactura::getProducto()
{
    return this->producto;
}

float DetalleFactura::getValorTotal()
{
    return this->valorTotal;
}

float DetalleFactura::getValorPagarSinIVA()
{
    return this->valorPagarSinIVA;
}

float DetalleFactura::getvalorTotalIVA()
{
    return this->valorTotalIVA;
}

int DetalleFactura::getCantUnidVend()
{
    return this->cantUnidVend;
}
