/*    Universidad de la Frontera
*     Departamento de Ingeniería Eléctrica
*     
*     ICC-202 PROGRAMACION DE COMPUTADORES
*
*     Tarea 2
*
*     Autores: Daniel Trafian Millán. (d.trafian01@ufromail.cl)
*
*
*     Fecha: 20 de Junio del 2021
*
*     Algoritmo de software que ayuda a manejar el servicio de gestión de reserva/arriendo       *     de piezas en un local de estadía temporal. 
*     Al implementarse, éste algoritmo estará funcionando hasta que la totalidad de dormitorios   *     ya no estén disponibles, y su objetivo es mejorar la calidad del servicio de agencia,
*     permitiéndole un acceso más cómodo y expedito al cliente. 
*/


#include <stdio.h>

// Variables de Servicio Principal correspondientes, ofrecidas por el local de residencia temporal

int totalHabitaciones;
int tipoHabitacion;
int Habitacionesdisp1;
int Habitacionesdisp2;
int Habitacionesdisp3;
int Habitacionesdisp4;
int precio;
int dias;
int PrecioTotal;
int rut;
// Variable de eleccion a evaluar segun lo ingresado por el usuario a lo largo del algoritmo 
int opcion;
// Variable tipo entero que indica el numero de solicitud con el que dará inicio el programa
int solicitud = 0;
// Variables contadoras de habitaciones ocupadas (por tipo), de acuerdo a las solicitudes procesadas
int contador1 = 0;
int contador2 = 0;
int contador3 = 0;
int contador4 = 0;

// Acotación: En varios printf(""); del programa, omití tildes y '¿' debido a la lectura de mi Visual Studio que al ejecutarlo, no me permite leerlos sin que me de una símbología rara.

int main(){
  //Para implementarse en cualquier servicio
  // En este proyecto, los datos estan dados por:
  // Tipo de habitacion | Cantidad de habitaciones | Precio
  //     Individual     |           15             | $ 20.000
  //     Doble          |           25             | $ 38.000
  //     Triple         |           15             | $ 55.800
  //     Cuadruple      |           15             | $ 72.000
  //   ---------------------------------------------------------
  //   Total Habitaciones:          70

  printf("Ingresar el total de habitaciones que ofrece su local de estancia temporal.\n");
  scanf("%d", &totalHabitaciones);
  printf("Ingresar de cuantas habitaciones de tipo individual dispone en total.\n");
  scanf("%d", &Habitacionesdisp1);
  printf("Ingresar de cuantas habitaciones dobles dispone en total.\n");
  scanf("%d", &Habitacionesdisp2);
  printf("Ingresar de cuantas habitaciones triples dispone en total.\n");
  scanf("%d", &Habitacionesdisp3);
  printf("Ingresar de cuantas habitaciones cuadruples dispone en total.\n");
  scanf("%d", &Habitacionesdisp4);

  // Evaluar la disponibilidad de habitaciones
  while( solicitud <= totalHabitaciones ){

    // Si la capacidad de habitaciones está ocupada al máximo, dar un aviso y terminar el programa
    if(solicitud == totalHabitaciones){
      printf("\n");
      printf("\n");
      printf("\n");
      printf("---------------------------------------------------------\n");
      printf("---------------------------------------------------------\n");
      printf("-----------  LO SENTIMOS. LA TOTALIDAD DE  --------------\n");
      printf("-------  LAS HABITACIONES HAN SIDO OCUPADAS!!  ----------\n");
      printf("---------------------------------------------------------\n");
      printf("---------------------------------------------------------\n");
      break;
    }

    char nombre[15];
    char apellido[20];
    // BIENVENIDA Y OPCIÓN DE SOLICITUD DE RESERVA
    printf("--------------------------------------------\n");
    printf("----------------- GESTION ------------------\n");
    printf("------------------- DE ---------------------\n");
    printf("---------------- HOTELERIA -----------------\n");
    printf("--------------------------------------------\n");
    // PEDIR EL NOMBRE AL USUARIO 
    printf("Para comenzar con una nueva solicitud.\nA continuacion. Ingrese su nombre:\n");
    scanf("%s", nombre);
    printf("Ingrese su apellido:\n");
    scanf("%s", apellido);
    printf("Bienvenido(a) %s %s.\n", nombre, apellido);
    printf("\n");
    printf("\n");

    // OFRECER A ELEGIR LOS DIFERENTES TIPOS DE HABITACIÓN
    printf("------- TIPOS DE HABITACION --------");
    printf("\n  1.- Pieza Individual:  $20.000  ");
    printf("\n  2.- Pieza Doble:       $38.000  ");
    printf("\n  3.- Pieza Triple:      $55.800  ");
    printf("\n  4.- Pieza Cuadruple:   $72.000  ");
    printf("\n Que tipo de habitacion necesita?:\n");
    scanf("%d", &tipoHabitacion);

    switch(tipoHabitacion){
      // Dependiendo de la opción ingresada por el usuario, se ejecutará lo de a continuación:
      case 1: 
        // Evaluar la disponibilidad de las Habitaciones de tipo Individual.
        if(contador1 < Habitacionesdisp1){
          printf("\n");
          printf("Ha seleccionado una habitacion individual.\n");
          // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
          contador1++ ;
          precio = 20000;
          tipoHabitacion = 1 ;

        } else{
          // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
          printf("\n");
          printf("Lo sentimos. No tenemos disponible mas habitaciones individuales.\n");
          printf("Desea optar por una Habitacion Doble?:\n");
          printf("1.- CONFIRMAR.\n");
          printf("2.- CANCELAR.\n");
          scanf("%d", &opcion);

          // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Doble.
          if(opcion == 1 && contador2 < Habitacionesdisp2){
            printf("\n");
            printf("Ha seleccionado una habitacion doble.\n");
            // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
            contador2++;
            precio = 38000;
            tipoHabitacion = 2 ;

          } else if(contador2 == Habitacionesdisp2){
            // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
            printf("\n");
            printf("Lo sentimos, no quedan mas habitaciones Doble disponibles.\n");
            printf("Desea optar por una Habitacion Triple?:\n");
            printf("1.- CONFIRMAR.\n");
            printf("2.- CANCELAR.\n");
            scanf("%d", &opcion);

            // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Triple.
            if(opcion == 1 && contador3 < Habitacionesdisp3){
              printf("\n");
              printf("Ha seleccionado una habitacion triple.\n");
              // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
              contador3++;
              precio = 55800;
              tipoHabitacion = 3 ;
              
            } else if(contador3 == Habitacionesdisp3){
              // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
              printf("\n");
              printf("Lo sentimos, no quedan mas habitaciones Triple disponibles.\n");
              printf("Desea optar por una Habitacion Cuadruple?:\n");
              printf("1.- CONFIRMAR.\n");
              printf("2.- CANCELAR.\n");
              scanf("%d", &opcion);

              // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Cuádruple.
              if(opcion == 1 && contador4 < Habitacionesdisp4){
                printf("\n");
                printf("Ha seleccionado una habitacion cuadruple.\n");
                // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
                contador4++;
                precio = 72000;
                tipoHabitacion = 4;

              } else if(contador4 == Habitacionesdisp4){
                // Si no hay más disponibilidad, imprimir un mensaje de aviso y dar pie al siguiente o último paso.
                printf("\n");
                printf("Lo sentimos, no tenemos mas habitaciones que podamos ofrecerle.\n");
                printf("\n");
                printf("\n");
                continue;
                  
              } else if(opcion == 2){
                // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
                printf("\n");
                printf("SOLICITUD CANCELADA. NO SE HA REALIZADO LA OPERACION.\n");
                printf("\n");
                printf("\n");
                continue;

              } else{
                printf("\n");
                printf("OPCION INVALIDA. NO SE PUDO REALIZAR LA OPERACION.\n");
                printf("\n");
                printf("\n");
                continue;
              }
            } else if(opcion == 2){
              // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud
              printf("\n");
              printf("SOLICITUD CANCELADA. NO SE HA REALIZADO LA OPERACION.\n");
              printf("\n");
              printf("\n");
              continue;

            } else{
              printf("\n");
              printf("OPCION INVALIDA. NO SE PUDO REALIZAR LA OPERACION.\n");
              printf("\n");
              printf("\n");
              continue;
            }
          } else if(opcion == 2){
            // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
            printf("\n");
            printf("SOLICITUD CANCELADA. NO SE HA REALIZADO LA OPERACION.\n");
            printf("\n");
            printf("\n");
            continue;

          } else{
            printf("\n");
            printf("OPCION INVALIDA. NO SE PUDO REALIZAR LA OPERACION.\n");
            printf("\n");
            printf("\n");
            continue;
          }     
        }
          break;
      case 2:
        // Evaluar la disponibilidad de las Habitaciones de tipo Doble.
        if(contador2 < Habitacionesdisp2){
          printf("\n");
          printf("Ha seleccionado una habitacion doble.\n");
          // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
          contador2++;
          precio = 38000;
          tipoHabitacion = 2 ;

        } else{
          // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
          printf("\n");
          printf("Lo sentimos. No tenemos disponible mas habitaciones dobles.\n");
          printf("Desea optar por una Habitacion Triple?:\n");
          printf("1.- CONFIRMAR.\n");
          printf("2.- CANCELAR.\n");
          scanf(" %d", &opcion);

          // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Triple.
          if(opcion == 1 && contador3 < Habitacionesdisp3){
            printf("Ha seleccionado una habitacion triple.\n");
            // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
            contador3++;
            precio = 55800;
            tipoHabitacion = 3 ;

          } else if(contador3 == Habitacionesdisp3){
            // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
            printf("\n");
            printf("Lo sentimos, no quedan mas habitaciones Triple disponibles.\n");
            printf("Desea optar por una Habitacion Cuadruple?:\n");
            printf("1.- CONFIRMAR.\n");
            printf("2.- CANCELAR.\n");
            scanf("%d", &opcion);

            // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Cuádruple.
            if(opcion == 1 && contador4 < Habitacionesdisp4){
              printf("\n");
              printf("Ha seleccionado una habitacion de tipo cuadruple.\n");
              // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
              contador4++;
              precio = 72000;
              tipoHabitacion = 4 ;

            } else if(contador4 == Habitacionesdisp4){
              // Si no hay más disponibilidad, imprimir un mensaje de aviso y dar pie al siguiente o último paso.
              printf("\n");
              printf("Lo sentimos, no contamos con otras opciones de habitacion que podamos ofrecerle.\n");
              printf("\n");
              printf("\n");
              continue;

            } else if(opcion == 2){
              // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
              printf("\n");
              printf("SOLICITUD CANCELADA. NO SE HA REALIZADO LA OPERACION.\n");
              printf("\n");
              printf("\n");
              continue;

            } else{
              printf("\n");
              printf("OPCION INVALIDA. NO SE PUDO REALIZAR LA OPERACION.\n");
              printf("\n");
              printf("\n");
              continue;
            }
          } else if(opcion == 2){
            // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
            printf("\n");
            printf("SOLICITUD CANCELADA. NO SE HA REALIZADO LA OPERACION.\n");
            printf("\n");
            printf("\n");
            continue;

          } else{
            printf("\n");
            printf("OPCION INVALIDA. NO SE PUDO REALIZAR LA OPERACION\n");
            printf("\n");
            printf("\n");
            continue;
          }
        }
          break;                                            
      case 3:
        // Evaluar la disponibilidad de las Habitaciones de tipo Triple.
        if(contador3 < Habitacionesdisp3){
          printf("\n");
          printf("Ha seleccionado una habitacion triple.\n");
          // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
          contador3++;
          precio = 55800;
          tipoHabitacion = 3 ;
          
        } else{
          // Si no hay disponibilidad, ofrecer una habitación de un grado mayor.
          printf("\n");
          printf("Lo sentimos. No quedan mas habitaciones Triple disponibles.\n");
          printf("¿Desea optar por una Habitacion Cuadruple?:\n");
          printf("1.- CONFIRMAR.\n");
          printf("2.- CANCELAR.\n");
          scanf("%d", &opcion);

          // Si el usuario acepta, evaluar la disponibilidad de las Habitaciones de tipo Cuádruple.
          if(opcion == 1 && contador4 < Habitacionesdisp4){
            printf("\n");
            printf("Ha seleccionado una habitacion cuadruple.\n");
            // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
            contador4++;
            precio = 72000;
            tipoHabitacion = 4 ;

          } else if(contador4 == Habitacionesdisp4){
            printf("\n");
            printf("Lo sentimos, no contamos con otras opciones de habitacion que podamos ofrecerle.\n");
            printf("\n");
            printf("\n");
            continue;

          } else if(opcion == 2){
            // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
            printf("\n");
            printf("SOLICITUD CANCELADA. NO SE HA REALIZADO LA OPERACION.\n");
            printf("\n");
            printf("\n");
            continue;

          } else{
            printf("\n");
            printf("OPCION INVALIDA. NO SE PUDO REALIZAR LA OPERACION\n");
            printf("\n");
            printf("\n");
            continue;
          }
        }
          break;
      case 4:
        // Evaluar la disponibilidad de habitaciones de tipo Cuádruple.
        if(contador4 < Habitacionesdisp4){
          printf("\n");
          printf("Ha seleccionado una habitacion cuadruple.\n");
          // Se reserva una habitación de este tipo y se le adjunta el precio correspondiente.
          contador4++;
          precio = 72000;
          tipoHabitacion = 4 ;

        } else{
          // Si no hay disponibilidad de este tipo, ofrecer al usuario una opción conveniente.
          printf("\n");
          printf("Lo sentimos. No tenemos Habitaciones Cuadruple disponibles.\n");
          printf("Como alternativa, le podemos ofrecer 2 habitaciones de tipo Doble.\n");
          printf("¿Desea optar por 2 Habitaciones Dobles?\n");
          printf("1.- CONFIRMAR.\n");
          printf("2.- CANCELAR.\n");
          scanf("%d", &opcion);

          // Si el usuario acepta, evaluar la disponibilidad de las habitaciones de tipo Doble.
          // Consultando ésta vez, por la disponibilidad de 2 habitaciones de este tipo.
          if((opcion == 1) && ((contador2 + 1) < Habitacionesdisp2)){
            printf("\n");
            printf ("Ha seleccionado 2 habitaciones de tipo Doble.\n");
            // Se reservan 2 habitaciones de este tipo, agregando una solicitud más y adjuntando el precio correspondiente.
            contador2 += 2;
            solicitud++;
            precio = (2 * 38000); 
            tipoHabitacion = 2 ;

          } else if((contador2 + 1) == Habitacionesdisp2){
            // Si al solicitar 2 habitaciones y no se disponen de estas, imprimir el aviso al usuario y continuar con el siguiente o último paso.
            printf("\n");
            printf("Lo sentimos, no contamos con otras opciones de habitacion que podamos ofrecerle.\n");
            printf("\n");
            printf("\n");
            continue;

          } else if(opcion == 2){
            // Si la solicitud no se efectúa, cancelar el proceso y seguir con una nueva solicitud.
            printf("\n");
            printf("SOLICITUD CANCELADA. NO SE HA REALIZADO LA OPERACION.\n");
            printf("\n");
            printf("\n");
            continue;

          } else{
            printf("\n");
            printf("OPCION INVALIDA. NO SE PUDO REALIZAR LA OPERACION\n");
            printf("\n");
            printf("\n");
            continue;
          }
        }
          break;
        // En cualquier otro caso, Se cancela la operación y se reinicia la solicitud actual  
      default:  printf("OPCION INVALIDA. NO SE PUDO REALIZAR LA OPERACION.\n");
                printf("\n"); 
                printf("\n"); 
          continue;
    }    

    // Solicitar ingresar al usuario, los días que decidirá alojarse.
    printf("\n");
    printf("Cuantos dias desea hospedarse?:\n");
    scanf("%d", &dias); 
    printf("\n");

    // Consultar el método de pago al usuario.
    printf("||-------------------------------------------||\n");
    printf("||    Como desea realizar su pago?:          ||\n");
    printf("||  1.- PAGO CON EFECTIVO.                   ||\n");
    printf("||  2.- PAGO CON TARJETA DE CREDITO/DEBITO.  ||\n");
    printf("||-------------------------------------------||\n");
    scanf("%d", &opcion);
    printf("\n");

    // Evaluando el método de pago según la opción que elija.
    // De acuerdo a lo ingresado por el usuario, se ejecutará...
    if(opcion == 1){
      printf("Ha elegido costear la(s) habitacion(es) en efectivo !!\n");

    } else if(opcion == 2){
      printf("El pago de la(s) habitacion(es) se realizara con tarjeta !!\n");
      // Consultar por el rut sin el dígito verificador al usuario.
      printf("A continuacion, ingrese su rut sin el digito verificador.\nDe la forma: RUT ----> 12345678 \n");
      scanf("%d", &rut);

    } else{
      printf("OPCION INVALIDA. NO SE PUDO REALIZAR LA OPERACION.\n");
      continue;
    }

    // De acuerdo al tipo de habitación solicitado por el usuario, en la 'boleta' se imprimirá el tipo de pieza correspondiente
    
    // El precio total a pagar, estará dado por el precio por tipo de habitación elegido anteriormente y la cantidad de días que se hospedará(n) el(los) clientes.
    PrecioTotal = (precio * dias);

    // Imprimir la boleta con los datos correspondientes:
    printf("\n");
    printf("\n");
    printf("     *** SOLICITUD NUMERO %d ***\n - Nombre: %s %s \n - Tipo de Habitacion: Opcion %d \n - Dias a Hospedarse: %d \n - Total a Pagar: $%d pesos.\n", solicitud + 1, nombre, apellido, tipoHabitacion, dias, PrecioTotal);
    if(opcion == 1){
      printf(" - Metodo de Pago: EFECTIVO.\n");

    } else if(opcion == 2){
      printf(" - Metodo de Pago: TARJETA.\n");

    } else{
      printf("\n");
      printf("OPCION INVALIDA. NO SE PUDO REALIZAR LA OPERACION.\n");
      continue;
    }
    
    // De acuerdo al método de pago elegido por el usuario, se imprimirá el rut del cliente si paga con tarjeta.
    if(opcion == 2){
      printf("    * RUT ---> %d\n", rut);
    }
    printf("\n");
    printf("\n");
    
    solicitud++;  
  }
  return 0;
}

// TAL VEZ SE ME HAYA QUEDADO ALGO PENDIENTE, PERO INTENTÉ CUBRIR TODAS O POR LO MENOS LA MAYORIA DE LAS VARIABLES POSIBLES
 
