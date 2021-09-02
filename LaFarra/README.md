# Tienda La Farra :beers: :fries:

## :heavy_check_mark: Objetivos 
- Practicar la identificación de clases, atributos y relaciones entre objetos
- Elaborar diagramas de clase 
- Desarrollar un programa orientado a objetos a partir de una base de código fuente ya definida

## Enunciado

La tienda la Farra es una discoteca que luego de la pandemia transformó su razón social y se dedica actualmente a la venta de productos al detal.  En particular, la Farra vende productos de dos tipos: licores y snacks. El IVA para los productos de tipo Licor es del 19% mientras que el IVA para los productos de tipo Snack es del 15%. Para cada producto la tienda conoce el tipo de producto, el código, el nombre, el precio de venta sin IVA, el costo unitario de compra y la cantidad de unidades disponibles.
Usted ha sido contratado para crear un software que ayude a los dueños de la Farra a administrar su negocio. En particular los dueños están interesados en que su sistema les permita: 
 - *Vender*:  esta opción debe permitir a las personas que están en la tienda registrar la información de la venta. La venta inicia cuando se selecciona esta opción y termina cuando el usuario del sistema ingresa la opción “-1”.  El sistema debe controlar que la venta solo incluya productos de los que la tienda tenga existencias. 

-  *Facturar una venta*: una venta esta formada por dos partes: el detalle de la factura y el encabezado de la factura. 
    - El encabezado de la venta relaciona el identificador de la factura (que es un valor único), la fecha de la venta, el valor a pagar en productos, el valor a pagar por el IVA,  el costo total y la lista de detalles de la factura. 
    - El detalle de la factura relaciona para cada producto vendido el precio unitario, la cantidad de unidades, el valor a pagar por el IVA y el precio a pagar según la cantidad de productos sin IVA y el valor total a pagar para la cantidad de productos ( valor total + IVA)
	
-	*Ver informes como*: 
    - Reporte de productos para los que quedan menos de X productos en inventario, donde X es un valor dado por el usuario.
    - Cantidad de productos de tipo Snack y de tipo Licores vendidos. 
    -	Ganancias obtenidas por la tienda
    -	Ver todos los productos de la tienda
    -	Valor a pagar por IVA a la DIAN. 

## :atom: Se pide
### Diseño
-	Identifique las clases de este enunciado
-	Identifique los atributos
-	Identifique las relaciones entre las clases  
[Ayuda] puede ver la versión final propuesta para este problema en esta [URL] (https://drive.google.com/file/d/1nW7ao-m5K3uo4Wi9g8DbGVgsoMlmDGV3/view?usp=sharing)

### Programación
Implemente las clases resultantes del programa para que la tienda sea funcional a partir del código fuente que aquí se entrega

### Requisitos no funcionales
-	Debe usar C++ para el desarrollo del proyecto
-	Use Maps como la estructura de datos para almacenar la información del tipo de producto y el tipo de productos. Llene la información de ambos mapas en el constructor de la clase Tienda para facilitar la inicialización. 
-	Use Vector para almacenar el detalle de las ventas. 
-	Use Vector para almacenar el conjunto de facturas. 

