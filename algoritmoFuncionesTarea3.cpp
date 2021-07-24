/* Universidad de La Frontera
* Departamento de Ingeniería Eléctrica
*
* ICC-202 PROGRAMACION DE COMPUTADORES
*
* Tarea 3
*
* Autores: Alejandra García Vargas. (a.garcia05@ufromail.cl)
*          Daniel Trafian Millán. (d.trafian01@ufromail.cl)
*
* Fecha:  25 de Julio del 2021
*
* Algoritmo de software que ayuda a manejar el servicio de gestión de reserva/arriendo de habitaciones en un local de * estadía temporal. Al implementarse, el algoritmo estará funcionando hasta que la totalidad de dormitorios sean      * ocupados, y el objetivo es mejorar la calidad de servicio de la agencia, permitiéndole al cliente un acceso cómodo * y más expedito.
*/

#include <stdio.h>
#include "./libreria.h"

int main(){
  // Variables de Servicio Principal correspondientes, ofrecidas por el local de residencia temporal
  int totalHabitaciones;
  int tipoHabitacion;
  int habitacionesDisp1, habitacionesDisp2, habitacionesDisp3, habitacionesDisp4;
  int precio;
  int dias;
  int precioTotal;
  int rut;
  // Variable de eleccion a evaluar segun lo ingresado por el usuario a lo largo del algoritmo 
  int opcion;
  // Variable tipo entero que indica el numero de solicitud con el que dará inicio el programa
  int solicitud = 0;
  // Variables contadoras de habitaciones ocupadas (por tipo), de acuerdo a las solicitudes procesadas
  int contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0;

  /* 
    Para implementarse en cualquier servicio
    En este proyecto, los datos estan dados por:

    Tipo de habitacion |    Cantidad de habitaciones   /        Variable          |   Precio
        Individual     |             15          ------>   (habitacionesDisp1)    |   $ 20.000
        Doble          |             25          ------>   (habitacionesDisp2)    |   $ 38.000
        Triple         |             15          ------>   (habitacionesDisp3)    |   $ 55.800
        Cuadruple      |             15          ------>   (habitacionesDisp4)    |   $ 72.000
    --------------------------------------------------------------------------------------------
    Total Habitaciones:              70          ------>   (totalHabitaciones)

  */

  cantidadHabitacionesOfrecidas(&totalHabitaciones, &habitacionesDisp1, &habitacionesDisp2, &habitacionesDisp3,       &habitacionesDisp4);

  // Evaluar la disponibilidad de habitaciones
  while( solicitud <= totalHabitaciones ){

    // Si la capacidad de habitaciones está ocupada al máximo, dar un aviso y terminar el programa
    if(solicitud == totalHabitaciones){
      noHayHabitaciones();
      break;
    }

    char nombre[15];
    char apellido[20];

    // "PORTADA" DE LOCAL DE ALOJAMIENTO
    presentacionDeLocal();
    // PEDIR EL NOMBRE AL USUARIO 
    pedirDatosUsuario(nombre, apellido);
    // BIENVENIDA 
    mensajeBienvenida(nombre, apellido);
    // MENU DE OFRECIMIENTO DE LOS DIFERENTES TIPOS DE HABITACIÓN
    menuTiposDeHabitacion(&tipoHabitacion);

    // Dependiendo de la opción ingresada por el usuario, se ejecutarán los diferentes procesos:
    if(tipoHabitacion == 1){
       // Evaluar la disponibilidad de las Habitaciones de tipo Individual.
        if(contador1 < habitacionesDisp1){
          // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
          reservarPiezaIndividual(contador1, precio);

        } else{
          // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
          ofrecerHabitacionDoble(&opcion);

          // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Doble.
          if((opcion == 1) && (contador2 < habitacionesDisp2)){
            // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
            reservarPiezaDoble(contador2, precio, tipoHabitacion);

          } else if((opcion == 1) && (contador2 == habitacionesDisp2)){
            // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
            ofrecerHabitacionTriple(&opcion);
            // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Triple.
            if((opcion == 1) && (contador3 < habitacionesDisp3)){
              // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
              reservarPiezaTriple(contador3, precio, tipoHabitacion);

            } else if((opcion == 1) && (contador3 == habitacionesDisp3)){
              // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
              ofrecerHabitacionCuadruple(&opcion);              

              // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Cuádruple.
              if((opcion == 1) && (contador4 < habitacionesDisp4)){
                // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
                reservarPiezaCuadruple(contador4, precio, tipoHabitacion);

              } else if((opcion == 1) && (contador4 == habitacionesDisp4)){
                // Si no hay más disponibilidad, imprimir un mensaje de aviso y dar pie al siguiente o último paso.
                mensajeNoDisponibilidad();
                continue;                 
              }   
              // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
              if(opcion == 2){
                cancelarOperacion();
                continue;
              }            
            }
            // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud
            if(opcion == 2){
              cancelarOperacion();
              continue;
            } 
          }
          // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
          if(opcion == 2){
            cancelarOperacion();
            continue;
          }   
        }  
    } else if(tipoHabitacion == 2){
      // Evaluar la disponibilidad de las Habitaciones de tipo Doble.
        if(contador2 < habitacionesDisp2){
          // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
          reservarPiezaDoble(contador2, precio, tipoHabitacion);

        } else{
          // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
          ofrecerHabitacionTriple(&opcion);

          // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Triple.
          if((opcion == 1) && (contador3 < habitacionesDisp3)){
            // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
            reservarPiezaTriple(contador3, precio, tipoHabitacion);

          } else if((opcion == 1) && (contador3 == habitacionesDisp3)){
            // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
            ofrecerHabitacionCuadruple(&opcion);

            // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Cuádruple.
            if(opcion == 1 && contador4 < habitacionesDisp4){
              // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
              reservarPiezaCuadruple(contador4, precio, tipoHabitacion);

            } else if((opcion == 1) && (contador4 == habitacionesDisp4)){
              // Si no hay más disponibilidad, imprimir un mensaje de aviso y dar pie al siguiente o último paso.
              mensajeNoDisponibilidad();
              continue;
            } 
            // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
            if(opcion == 2){
              cancelarOperacion();
              continue;
            }
          }
          // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
          if(opcion == 2){
            cancelarOperacion();
            continue;
          }   
        }
    } else if(tipoHabitacion == 3){
      // Evaluar la disponibilidad de las Habitaciones de tipo Triple.
        if(contador3 < habitacionesDisp3){
          // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
          reservarPiezaTriple(contador3, precio, tipoHabitacion);
          
        } else{
          // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
          ofrecerHabitacionCuadruple(&opcion);

          // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Cuádruple.
          if((opcion == 1) && (contador4 < habitacionesDisp4)){
            // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
            reservarPiezaCuadruple(contador4, precio, tipoHabitacion);

          } else if((opcion == 1) && (contador4 == habitacionesDisp4)){
            mensajeNoDisponibilidad();
            continue;
          } 
          // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
          if(opcion == 2){
            cancelarOperacion();
            continue;
          }
        }
    } else if(tipoHabitacion == 4){
      // Evaluar la disponibilidad de habitaciones de tipo Cuádruple.
        if(contador4 < habitacionesDisp4){
          // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
          reservarPiezaCuadruple(contador4, precio, tipoHabitacion);

        } else{
          // Si no hay disponibilidad de este tipo, ofrecer al usuario una opción conveniente.
          ofrecerHabitacionesDobles(&opcion);

          /*
            Si el usuario acepta, evaluar la disponibilidad de las habitaciones de tipo Doble.
            Consultando ésta vez, por la disponibilidad de 2 habitaciones de este tipo.
          */ 
          if((opcion == 1) && ((contador2 + 1) < habitacionesDisp2)){
            // Se reservan 2 habitaciones de este tipo, agregando una solicitud más y adjuntando el precio correspondiente.
            reservarPiezasDobles(contador2, solicitud, precio, tipoHabitacion);

          } else if((opcion == 1) && ((contador2 + 1) == habitacionesDisp2)){
            // Si al solicitar 2 habitaciones y no se disponen de estas, imprimir el aviso al usuario y continuar con el siguiente o último paso.
            mensajeNoDisponibilidad();
            continue;
          } 
          // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
          if(opcion == 2){
            cancelarOperacion();
            continue;
          }
        }
    } else{
      // En cualquier otro caso, Se cancela la operación y se reinicia la solicitud actual
      opcionInvalida(tipoHabitacion, 1, 4);
      continue;
    } 

    // Solicitar ingresar al usuario, los días que decidirá alojarse.
    cantidadDiasHospedaje(&dias);

    // Consultar el método de pago al usuario. Evaluando el método de pago según la opción que elija.
    
    metodoPago(&opcion, &rut, 1, 2);

    // El precio total a pagar, estará dado por el precio por tipo de habitación elegido anteriormente y la cantidad de días que se hospedará(n) el(los) clientes.
    precioTotal = totalAPagar(precio, dias);
    
    /* 
      De acuerdo al tipo de habitación solicitado por el usuario, en la 'boleta' se imprimirá el
      tipo de pieza correspondiente.   
      Luego. Imprimir la boleta con los datos correspondientes:
    */
    imprimirBoleta(solicitud, nombre, apellido, tipoHabitacion, dias, precioTotal, opcion, rut);
    
    solicitud++;  
  }
  return 0;
}
