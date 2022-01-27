all: compilar
compilar: tipoProducto producto detalleFactura factura tienda view main
		g++ -o Salida TipoProducto.o Producto.o Factura.o DetalleFactura.o Tienda.o View.o Main.o
tipoProducto: TipoProducto.cpp TipoProducto.h
	g++ -c TipoProducto.cpp
producto: Producto.cpp Producto.h TipoProducto.h
		g++ -c Producto.cpp
detalleFactura: DetalleFactura.cpp DetalleFactura.h Producto.h
	g++ -c DetalleFactura.cpp
factura: Factura.cpp Factura.h DetalleFactura.h
	g++ -c Factura.cpp
tienda: Tienda.cpp Tienda.h TipoProducto.h Producto.h Factura.h  
		g++ -c Tienda.cpp
view: View.cpp View.h Tienda.h
		g++ -c View.cpp
main: Main.cpp View.h 
	  g++ -c Main.cpp
clean: #comando para borrar los .o
	@echo "Cleaning compilation..."
	del *.o