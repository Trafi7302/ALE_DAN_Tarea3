#include <stdio.h>
// IMPLEMENTACIONES 

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

void noHayHabitaciones(){
  printf("\n\n\n");
  printf("---------------------------------------------------------\n");
  printf("---------------------------------------------------------\n");
  printf("-----------  LO SENTIMOS. LA TOTALIDAD DE  --------------\n");
  printf("-------  LAS HABITACIONES HAN SIDO OCUPADAS!!  ----------\n");
  printf("---------------------------------------------------------\n");
  printf("---------------------------------------------------------\n");
}

void presentacionDeLocal(){
  printf("--------------------------------------------\n");
  printf("----------------- GESTION ------------------\n");
  printf("------------------- DE ---------------------\n");
  printf("---------------- HOTELERIA -----------------\n");
  printf("--------------------------------------------\n");
}

void pedirDatosUsuario(char* ingresarNombre, char* ingresarApellido){
  printf("Para comenzar con una nueva solicitud.\n");
  printf("A continuacion. Ingrese su nombre y su apellido:\n");
  scanf("%s %s", ingresarNombre, ingresarApellido);
}

void mensajeBienvenida(char* nombreIngresado, char* apellidoIngresado){
  printf("Bienvenido(a) %s %s.\n", nombreIngresado, apellidoIngresado);
  printf("\n\n");
}

void menuTiposDeHabitacion(int* tipoHabitacionElegido){
  printf("------- TIPOS DE HABITACION --------");
  printf("\n  1.- Pieza Individual:  $20.000  ");
  printf("\n  2.- Pieza Doble:       $38.000  ");
  printf("\n  3.- Pieza Triple:      $55.800  ");
  printf("\n  4.- Pieza Cuadruple:   $72.000  ");
  printf("\n Que tipo de habitacion necesita?:\n");
  scanf("%d", tipoHabitacionElegido);  
}

void reservarPiezaIndividual(int &contador1, int &precio){
  contador1++ ;
  precio = 20000;
          
  printf("\nHa seleccionado una habitacion individual.\n");
}

void ofrecerHabitacionDoble(int* opcionDeHabitacionEscogida){
  do{
    printf("\n");
    printf("Lo sentimos. No tenemos disponible mas habitaciones individuales.\n");
    printf("Desea optar por una Habitacion Doble?:\n");
    printf("1.- CONFIRMAR.\n");
    printf("2.- CANCELAR.\n");
    scanf("%d", opcionDeHabitacionEscogida);
  } while((*opcionDeHabitacionEscogida < 1) || (*opcionDeHabitacionEscogida > 2));
}

void reservarPiezaDoble(int &contador2, int &precio, int &tipoHabitacion){
  contador2++;
  precio = 38000;
  tipoHabitacion = 2 ;
            
  printf("\nHa seleccionado una habitacion doble.\n");
}

void ofrecerHabitacionTriple(int* opcionDeHabitacionEscogida){
  do{
    printf("\n");
    printf("Lo sentimos, no quedan mas habitaciones Doble disponibles.\n");
    printf("Desea optar por una Habitacion Triple?:\n");
    printf("1.- CONFIRMAR.\n");
    printf("2.- CANCELAR.\n");
    scanf("%d", opcionDeHabitacionEscogida);
  } while((*opcionDeHabitacionEscogida < 1) || (*opcionDeHabitacionEscogida > 2));
}

void reservarPiezaTriple(int &contador3, int &precio, int &tipoHabitacion){
  contador3++;
  precio = 55800;
  tipoHabitacion = 3 ;

  printf("\nHa seleccionado una habitacion triple.\n");
}

void ofrecerHabitacionCuadruple(int* opcionDeHabitacionEscogida){
  do{
    printf("\n");
    printf("Lo sentimos, no quedan mas habitaciones Triple disponibles.\n");
    printf("Desea optar por una Habitacion Cuadruple?:\n");
    printf("1.- CONFIRMAR.\n");
    printf("2.- CANCELAR.\n");
    scanf("%d", opcionDeHabitacionEscogida);
  } while((*opcionDeHabitacionEscogida < 1) || (*opcionDeHabitacionEscogida > 2));
}

void reservarPiezaCuadruple(int &contador4, int &precio, int &tipoHabitacion){
  contador4++;
  precio = 72000;
  tipoHabitacion = 4;
                
  printf("\nHa seleccionado una habitacion cuadruple.\n");
}

void ofrecerHabitacionesDobles(int* opcionDeHabitacionEscogida){
  do{
    printf("\n");
    printf("Lo sentimos. No tenemos Habitaciones Cuadruple disponibles.\n");
    printf("Como alternativa, le podemos ofrecer 2 habitaciones de tipo Doble.\n");
    printf(" Desea optar por 2 Habitaciones Dobles?\n");
    printf("1.- CONFIRMAR.\n");
    printf("2.- CANCELAR.\n");
    scanf("%d", opcionDeHabitacionEscogida);
              
  } while((*opcionDeHabitacionEscogida < 1) || (*opcionDeHabitacionEscogida > 2));
}

void reservarPiezasDobles(int &contador2, int &solicitud, int &precio, int &tipoHabitacion){
  contador2 += 2;
  solicitud++;
  precio = (2 * 38000); 
  tipoHabitacion = 2 ;
            
  printf ("\nHa seleccionado 2 habitaciones de tipo Doble.\n");
}

void mensajeNoDisponibilidad(){
  printf("\n");
  printf("Lo sentimos, no contamos con otras opciones de habitacion que podamos ofrecerle.\n");
  printf("No se pudo realizar la operacion.\n");
  printf("\n\n");
}

void cancelarOperacion(){
  printf("\n");
  printf("SOLICITUD CANCELADA. NO SE HA REALIZADO LA OPERACION.\n");
  printf("\n\n");
}

void cantidadDiasHospedaje(int* dias){
  printf("\nCuantos dias desea hospedarse?:\n");
  scanf("%d", dias); 
  printf("\n");
}

void metodoPago(int* ingresarOpcion, int* ingresarRut, int menor, int mayor){
  do{
    printf("||-------------------------------------------||\n");
    printf("||    Como desea realizar su pago?:          ||\n");
    printf("||  1.- PAGO CON EFECTIVO.                   ||\n");
    printf("||  2.- PAGO CON TARJETA DE CREDITO/DEBITO.  ||\n");
    printf("||-------------------------------------------||\n");
    scanf("%d", ingresarOpcion);
    printf("\n");
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

int totalAPagar(int precioHabitacion, int cantidadDias){
  int precioFinal = (precioHabitacion * cantidadDias);
  return precioFinal;
}

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