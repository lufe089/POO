#include "Factura.h"

Factura::Factura()
{
}

void Factura::agregarDetalle(DetalleFactura detalle)
{
    detalles.push_back(detalle);
}

void Factura::mostrarFactura()
{
    cout << "Factura numero: " << this->cod << "\n";
    cout << "Fecha: " << this->fecha << "\n";

    cout << "Producto \t cantidad  \t total sin iva \t totalIva \t Total \n";
    for (vector<DetalleFactura>::iterator pDetalle = detalles.begin();
         pDetalle != detalles.end(); pDetalle++)
    {
        pDetalle->mostrarDetalle();
    }

    cout << "====================";
    cout << "Valor a pagar sin IVA: " << this->valorPagarSinIVA << "\n";
    cout << "Valor IVA: " << this->valorTotalIVA << "\n";
    cout << "Total a Pagar: " << this->valorTotal << "\n";
}

float Factura::getValorTotal()
{
    return this->valorTotal;
}

void Factura::setValorTotal(float valorTotal)
{
    this->valorTotal = valorTotal;
}

float Factura::getValorPagarSinIVA()
{
    return this->valorPagarSinIVA;
}

void Factura::setValorPagarSinIVA(float valorPagarSinIVA)
{
    this->valorPagarSinIVA = valorPagarSinIVA;
}

float Factura::getvalorTotalIVA()
{
    return this->valorTotalIVA;
}

void Factura::setValorTotalIVA(float valorTotalIVA)
{
    this->valorTotalIVA = valorTotalIVA;
}

int Factura::getCod()
{
    return this->cod;
}

void Factura::setCod(int cod)
{
    this->cod = cod;
}

string Factura::getFecha()
{
    return this->fecha;
}

void Factura::setFecha(string fecha)
{
    this->fecha = fecha;
}
