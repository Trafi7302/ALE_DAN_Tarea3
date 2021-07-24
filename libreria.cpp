#include "./libreria.h"
#include <stdio.h>
// IMPLEMENTACIONES 

/*
* Nombre de la función: cantidadHabitacionesOfrecidas.
* Tipo de función: void.
* Parámetros: “habitacionesTotales” de tipo int.
*             “habitacionesIndividuales” de tipo int.
*             “habitacionesDoble” de tipo int.
*             “habitacionesTriple” de tipo int.
*             “habitacionesCuadruple” de tipo int.
*             
* Dato de retorno: -----------------
* Descripción de la función: Función establecida para contabilizar las habitaciones disponibles iniciales cuando aún *                            no se comience con la primera solicitud en el programa principal. 
*/
void cantidadHabitacionesOfrecidas(int* habitacionesTotales, int* habitacionesIndividuales, int* habitacionesDoble, int* habitacionesTriple, int* habitacionesCuadruple){
  printf("Ingresar el total de habitaciones que ofrece su local de estancia temporal.\n");
  scanf("%d", habitacionesTotales);
  printf("Ingresar de cuantas habitaciones de tipo individual dispone en total.\n");
  scanf("%d", habitacionesIndividuales);
  printf("Ingresar de cuantas habitaciones dobles dispone en total.\n");
  scanf("%d", habitacionesDoble);
  printf("Ingresar de cuantas habitaciones triples dispone en total.\n");
  scanf("%d", habitacionesTriple);
  printf("Ingresar de cuantas habitaciones cuadruples dispone en total.\n");
  scanf("%d", habitacionesCuadruple);
}

/*
* Nombre de la función: noHayHabitaciones.
* Tipo de función: void.
* Parámetros: -------------
* 
* Dato de retorno: --------------
* Descripción de la función: Función que se encarga de dar una respuesta a través de un mensaje de no disponibilidad *                            de habitaciones, cuando la totalidad de las habitaciones disponibles inicialmente ya han *                            sido reservadas.
*/
void noHayHabitaciones(){
  printf("\n\n\n");
  printf("---------------------------------------------------------\n");
  printf("---------------------------------------------------------\n");
  printf("-----------  LO SENTIMOS. LA TOTALIDAD DE  --------------\n");
  printf("-------  LAS HABITACIONES HAN SIDO OCUPADAS!!  ----------\n");
  printf("---------------------------------------------------------\n");
  printf("---------------------------------------------------------\n");
}

/*
* Nombre de la función: presentacionDeLocal.
* Tipo de función: void.
* Parámetros: -------------
* 
* Dato de retorno: --------------
* Descripción de la función: Función vacía que se encarga de imprimir por pantalla la referencia al cuál hace         *                            servicio y que sirve de presentación del local de estancia temporal.
*/
void presentacionDeLocal(){
  printf("\n\n");
  printf("--------------------------------------------\n");
  printf("----------------- GESTION ------------------\n");
  printf("------------------- DE ---------------------\n");
  printf("---------------- HOTELERIA -----------------\n");
  printf("--------------------------------------------\n");
}

/*
* Nombre de la función: pedirDatosUsuario.
* Tipo de función: void.
* Parámetros: "ingresarNombre" de tipo char.
*             "ingresarApellido" de tipo char.
* 
* Dato de retorno: --------------
* Descripción de la función: Función que, una vez ya se ha inicializado una nueva solicitud de reserva de habitación, *                            se encarga de solicitarle al cliente sus datos personales, tales cual su nombre y      *                            apellido.
*/
void pedirDatosUsuario(char* ingresarNombre, char* ingresarApellido){
  printf("Para comenzar con una nueva solicitud.\n");
  printf("A continuacion. Ingrese su nombre y su apellido:\n");
  scanf("%s %s", ingresarNombre, ingresarApellido);
}

/*
* Nombre de la función: mensajeBienvenida.
* Tipo de función: void.
* Parámetros: "nombreIngresado" de tipo char.
*             "apellidoIngresado" de tipo char.
*
* Dato de retorno: --------------
* Descripción de la función: Función que imprime el mensaje de bienvenida al usuario que actualmente está ejecutando *                            una solicitud.
*/
void mensajeBienvenida(char* nombreIngresado, char* apellidoIngresado){
  printf("Bienvenido(a) %s %s.\n", nombreIngresado, apellidoIngresado);
  printf("\n\n");
}

/*
* Nombre de la función: menuTiposDeHabitacion.
* Tipo de función: void.
* Parámetros: "tipoHabitacionElegido" de tipo int.
*
* Dato de retorno: --------------
* Descripción de la función: Función que se encarga de imprimir por pantalla los tipos de habitación que ofrece el *                            local, y a su vez guardar la opción que ingrese el usuario.
*/
void menuTiposDeHabitacion(int* tipoHabitacionElegido){
  printf("------- TIPOS DE HABITACION --------");
  printf("\n  1.- Pieza Individual:  $20.000  ");
  printf("\n  2.- Pieza Doble:       $38.000  ");
  printf("\n  3.- Pieza Triple:      $55.800  ");
  printf("\n  4.- Pieza Cuadruple:   $72.000  ");
  printf("\n Que tipo de habitacion necesita?:\n");
  scanf("%d", tipoHabitacionElegido);  
}

/*
* Nombre de la función: opcionInvalida.
* Tipo de función: void.
* Parámetros: "opcionIngresada" de tipo int.
*             "menor" de tipo int.
*             "mayor" de tipo int.
*
* Dato de retorno: --------------
* Descripción de la función: Función que imprime un mensaje de invalidez, al ingresar el usuario una opción que no *                            está establecida para elegir.
*/
void opcionInvalida(int opcionIngresada, int menor, int mayor){
  if((opcionIngresada < menor) || (opcionIngresada > mayor)){
      printf("\nOPCION INVALIDA. NO SE PUDO REALIZAR ESTA OPERACION.\n");
      printf("\n\n");
  }
}

/*
* Nombre de la función: reservarPiezaIndividual.
* Tipo de función: void.
* Parámetros: "contador1" de tipo int.
*             "precio" de tipo int.
*
* Dato de retorno: "contador1" de tipo int;
*                  "precio" de tipo int;
* Descripción de la función: Función que se encarga de 'ocupar' una habitación de tipo individual y le adjunta un *                            valor establecido a la variable precio en el programa principal.
*/
void reservarPiezaIndividual(int &contador1, int &precio){
  contador1++ ;
  precio = 20000;
          
  printf("\nHa seleccionado una habitacion individual.\n");
}

/*
* Nombre de la función: ofrecerHabitacionDoble.
* Tipo de función: void.
* Parámetros: "opcionDeHabitacionEscogida" de tipo int.
*
* Dato de retorno: --------------
* Descripción de la función: Función que se encarga de que el programa le ofrecezca al usuario una nueva opción al *                            evaluar que el tipo de habitación ingresada primeramente, ya no tiene disponibilidad.
*/
void ofrecerHabitacionDoble(int* opcionDeHabitacionEscogida){
  do{
    printf("\n");
    printf("Lo sentimos. No tenemos disponible mas habitaciones individuales.\n");
    printf("Desea optar por una Habitacion Doble?:\n");
    printf("1.- CONFIRMAR.\n");
    printf("2.- CANCELAR.\n");
    scanf("%d", opcionDeHabitacionEscogida);

    opcionInvalida(*opcionDeHabitacionEscogida, 1, 2);

  } while((*opcionDeHabitacionEscogida < 1) || (*opcionDeHabitacionEscogida > 2));
}

/*
* Nombre de la función: reservarPiezaDoble.
* Tipo de función: void.
* Parámetros: "contador2" de tipo int.
*             "precio" de tipo int.
*             "tipoHabitacion" de tipo int.
*
* Dato de retorno: "contador2" de tipo int;
*                  "precio" de tipo int;
*                  "tipoHabitacion" de tipo int;
* Descripción de la función: Función que se encarga de 'ocupar' una habitación de tipo Doble, además de adjuntar un *                            valor establecido a la variable precio y a la variable del tipo de habitación de este *                            tipo, escogido por el usuario en el programa principal.
*/
void reservarPiezaDoble(int &contador2, int &precio, int &tipoHabitacion){
  contador2++;
  precio = 38000;
  tipoHabitacion = 2 ;
            
  printf("\nHa seleccionado una habitacion doble.\n");
}

/*
* Nombre de la función: ofrecerHabitacionTriple.
* Tipo de función: void.
* Parámetros: "opcionDeHabitacionEscogida" de tipo int.
*
* Dato de retorno: --------------
* Descripción de la función: Función que se encarga de que el programa le ofrecezca al usuario una nueva opción al *                            evaluar que el tipo de habitación ingresada primeramente, ya no tiene disponibilidad.
*/
void ofrecerHabitacionTriple(int* opcionDeHabitacionEscogida){
  do{
    printf("\n");
    printf("Lo sentimos, no quedan mas habitaciones Doble disponibles.\n");
    printf("Desea optar por una Habitacion Triple?:\n");
    printf("1.- CONFIRMAR.\n");
    printf("2.- CANCELAR.\n");
    scanf("%d", opcionDeHabitacionEscogida);

    opcionInvalida(*opcionDeHabitacionEscogida, 1, 2);

  } while((*opcionDeHabitacionEscogida < 1) || (*opcionDeHabitacionEscogida > 2));
}

/*
* Nombre de la función: reservarPiezaTriple.
* Tipo de función: void.
* Parámetros: "contador3" de tipo int.
*             "precio" de tipo int.
*             "tipoHabitacion" de tipo int.
*
* Dato de retorno: "contador3" de tipo int;
*                  "precio" de tipo int;
*                  "tipoHabitacion" de tipo int;
* Descripción de la función: Función que se encarga de 'ocupar' una habitación de tipo Triple, además de adjuntar un *                            valor establecido a la variable precio y a la variable del tipo de habitación de este *                            tipo, escogido por el usuario en el programa principal.
*/
void reservarPiezaTriple(int &contador3, int &precio, int &tipoHabitacion){
  contador3++;
  precio = 55800;
  tipoHabitacion = 3 ;

  printf("\nHa seleccionado una habitacion triple.\n");
}

/*
* Nombre de la función: ofrecerHabitacionCuadruple.
* Tipo de función: void.
* Parámetros: "opcionDeHabitacionEscogida" de tipo int.
*
* Dato de retorno: --------------
* Descripción de la función: Función que se encarga de que el programa le ofrecezca al usuario una nueva opción al *                            evaluar que el tipo de habitación ingresada primeramente, ya no tiene disponibilidad.
*/
void ofrecerHabitacionCuadruple(int* opcionDeHabitacionEscogida){
  do{
    printf("\n");
    printf("Lo sentimos, no quedan mas habitaciones Triple disponibles.\n");
    printf("Desea optar por una Habitacion Cuadruple?:\n");
    printf("1.- CONFIRMAR.\n");
    printf("2.- CANCELAR.\n");
    scanf("%d", opcionDeHabitacionEscogida);

    opcionInvalida(*opcionDeHabitacionEscogida, 1, 2);

  } while((*opcionDeHabitacionEscogida < 1) || (*opcionDeHabitacionEscogida > 2));
}

/*
* Nombre de la función: reservarPiezaCuadruple.
* Tipo de función: void.
* Parámetros: "contador4" de tipo int.
*             "precio" de tipo int.
*             "tipoHabitacion" de tipo int.
*
* Dato de retorno: "contador4" de tipo int;
*                  "precio" de tipo int;
*                  "tipoHabitacion" de tipo int;
* Descripción de la función: Función que se encarga de 'ocupar' una habitación de tipo Cuádruple, además de adjuntar *                            un valor establecido a la variable precio y a la variable del tipo de habitación de este *                            tipo, escogido por el usuario en el programa principal.
*/
void reservarPiezaCuadruple(int &contador4, int &precio, int &tipoHabitacion){
  contador4++;
  precio = 72000;
  tipoHabitacion = 4;
                
  printf("\nHa seleccionado una habitacion cuadruple.\n");
}

/*
* Nombre de la función: ofrecerHabitacionesDobles.
* Tipo de función: void.
* Parámetros: "opcionDeHabitacionEscogida" de tipo int.
*
* Dato de retorno: --------------
* Descripción de la función: Función que se encarga de que el programa le ofrecezca al usuario una nueva opción al *                            evaluar que el tipo de habitación ingresada primeramente, ya no tiene disponibilidad.
*/
void ofrecerHabitacionesDobles(int* opcionDeHabitacionEscogida){
  do{
    printf("\n");
    printf("Lo sentimos. No tenemos Habitaciones Cuadruple disponibles.\n");
    printf("Como alternativa, le podemos ofrecer 2 habitaciones de tipo Doble.\n");
    printf(" Desea optar por 2 Habitaciones Dobles?\n");
    printf("1.- CONFIRMAR.\n");
    printf("2.- CANCELAR.\n");
    scanf("%d", opcionDeHabitacionEscogida);

    opcionInvalida(*opcionDeHabitacionEscogida, 1, 2);
              
  } while((*opcionDeHabitacionEscogida < 1) || (*opcionDeHabitacionEscogida > 2));
}

/*
* Nombre de la función: reservarPiezasDobles.
* Tipo de función: void.
* Parámetros: "contador2" de tipo int.
*             "solicitud" de tipo int.
*             "precio" de tipo int.
*             "tipoHabitacion" de tipo int.
*
* Dato de retorno: "contador2" de tipo int;
*                  "solicitud" de tipo int;
*                  "precio" de tipo int;
*                  "tipoHabitacion" de tipo int;
* Descripción de la función: Función que se encarga de 'ocupar' dos habitaciones de tipo Doble, sumando una solicitud *                            a la actual, además de adjuntar un valor establecido a la variable precio y a la *                            variable del tipo de habitación de este tipo, escogido por el usuario en el programa *                            principal.
*/
void reservarPiezasDobles(int &contador2, int &solicitud, int &precio, int &tipoHabitacion){
  contador2 += 2;
  solicitud++;
  precio = (2 * 38000); 
  tipoHabitacion = 2 ;
            
  printf ("\nHa seleccionado 2 habitaciones de tipo Doble.\n");
}

/*
* Nombre de la función: mensajeNoDisponibilidad.
* Tipo de función: void.
* Parámetros: ------------
*
* Dato de retorno: --------------
* Descripción de la función: Función que imprime un mensaje de no disponibilidad, de parte del programa al evaluar *                            que ya no quedan más opciones de habitación.
*/
void mensajeNoDisponibilidad(){
  printf("\n");
  printf("Lo sentimos, no contamos con otras opciones de habitacion que podamos ofrecerle.\n");
  printf("No se pudo realizar la operacion.\n");
  printf("\n\n");
}

/*
* Nombre de la función: cancelarOperacion.
* Tipo de función: void.
* Parámetros: ------------
*
* Dato de retorno: --------------
* Descripción de la función: Función que imprime un mensaje de operación cancelada, cuando el usuario seleccione esa *                            opción en el programa principal.
*/
void cancelarOperacion(){
  printf("\n");
  printf("SOLICITUD CANCELADA. NO SE HA REALIZADO LA OPERACION.\n");
  printf("\n\n");
}

/*
* Nombre de la función: cantidadDiasHospedaje.
* Tipo de función: void.
* Parámetros: "dias" de tipo int.
*
* Dato de retorno: --------------
* Descripción de la función: Función que se encarga de solicitarle al usuario, ingresar los días que se alojará y *                            guardar este dato.
*/
void cantidadDiasHospedaje(int* dias){
  printf("\nCuantos dias desea hospedarse?:\n");
  scanf("%d", dias); 
  printf("\n");
}

/*
* Nombre de la función: metodoPago.
* Tipo de función: void.
* Parámetros: "ingresarOpcion" de tipo int.
*             "ingresarRut" de tipo int.
*             "menor" de tipo int.
*             "mayor" de tipo int.
*
* Dato de retorno: --------------
* Descripción de la función: Función que se encarga de que el programa le solicite al usuario ingresar el metodo de *                            pago (Efectivo / Tarjeta) y, en caso de ser necesario, solicitar el rut y guardar estos *                            datos.
*/
void metodoPago(int* ingresarOpcion, int* ingresarRut, int menor, int mayor){
  do{
    printf("||-------------------------------------------||\n");
    printf("||    Como desea realizar su pago?:          ||\n");
    printf("||  1.- PAGO CON EFECTIVO.                   ||\n");
    printf("||  2.- PAGO CON TARJETA DE CREDITO/DEBITO.  ||\n");
    printf("||-------------------------------------------||\n");
    scanf("%d", ingresarOpcion);
    printf("\n");

    opcionInvalida(*ingresarOpcion, menor, mayor);

  } while((*ingresarOpcion < menor) || (*ingresarOpcion > mayor));

  if(*ingresarOpcion == 1){
      printf("Ha elegido costear la(s) habitacion(es) en efectivo !!\n");
    } 

  if(*ingresarOpcion == 2){
    printf("El pago de la(s) habitacion(es) se realizara con tarjeta !!\n");
    // Consultar por el rut sin el dígito verificador al usuario.
    printf("A continuacion, ingrese su rut sin el digito verificador.\nDe la forma: RUT ----> 12345678 \n");
    scanf("%d", ingresarRut);
  }
}

/*
* Nombre de la función: totalAPagar.
* Tipo de función: int.
* Parámetros: "precioHabitacion" de tipo int.
*             "cantidadDias" de tipo int.
*
* Dato de retorno: "precioFinal" de tipo int;
* Descripción de la función: La función totalAPagar() evalúa los parámetros de tipo entero para multiplicarlos y *                            devolver el precio total al programa principal a través de la variable precioFinal.
*/
int totalAPagar(int precioHabitacion, int cantidadDias){
  int precioFinal = (precioHabitacion * cantidadDias);
  return precioFinal;
}

/*
* Nombre de la función: imprimirBoleta.
* Tipo de función: void.
* Parámetros: "numeroSolicitud" de tipo int.
*             "nombreDelUsuario" de tipo char.
*             "apellidoDelUsuario" de tipo char.
*             "tipoHabitacionElegida" de tipo int.
*             "diasHospedaje" de tipo int.
*             "precioFinal" de tipo int.
*             "opcionIngresada" de tipo int.
*             "rutIngresado" de tipo int.
*
* Dato de retorno: -------------
* Descripción de la función: La función imprimirBoleta() se encarga de resumir el proceso de solicitud completo para *                            imprimir una boleta con los datos guardados que corresponden a los datos ingresados por *                            el usuario anteriormente.
*/
void imprimirBoleta(int numeroSolicitud, char* nombreDelUsuario, char* apellidoDelUsuario, int tipoHabitacionElegida, int diasHospedaje, int precioFinal, int opcionIngresada, int rutIngresado){
  printf("\n\n");
    printf("     *** SOLICITUD NUMERO %d ***\n - Nombre: %s %s \n - Tipo de Habitacion: Opcion %d \n - Dias a Hospedarse: %d \n - Total a Pagar: $%d pesos.\n", numeroSolicitud + 1, nombreDelUsuario, apellidoDelUsuario, tipoHabitacionElegida, diasHospedaje, precioFinal);

    if(opcionIngresada == 1){
      printf(" - Metodo de Pago: EFECTIVO.\n\n\n");
    } 
    // De acuerdo al método de pago elegido por el usuario, se imprimirá el rut del cliente si paga con tarjeta.
    if(opcionIngresada == 2){
      printf(" - Metodo de Pago: TARJETA.\n");
      printf("    * RUT ---> %d\n", rutIngresado);
      printf("\n\n");
    } 
}