// PROTOTIPOS

void cantidadHabitacionesOfrecidas(int* habitacionesTotales, int* habitacionesIndividuales, int* habitacionesDoble, int* habitacionesTriple, int* habitacionesCuadruple);

void noHayHabitaciones();

void presentacionDeLocal();

void pedirDatosUsuario(char* ingresarNombre, char* ingresarApellido); 
void mensajeBienvenida(char* nombreIngresado, char* apellidoIngresado);

void menuTiposDeHabitacion(int* tipoHabitacionElegido);

void reservarPiezaIndividual(int &contador1, int &precio);

void ofrecerHabitacionDoble(int* opcionDeHabitacionEscogida); 
void reservarPiezaDoble(int &contador2, int &precio, int &tipoHabitacion);

void ofrecerHabitacionTriple(int* opcionDeHabitacionEscogida);
void reservarPiezaTriple(int &contador3, int &precio, int &tipoHabitacion);

void ofrecerHabitacionCuadruple(int* opcionDeHabitacionEscogida);
void reservarPiezaCuadruple(int &contador4, int &precio, int &tipoHabitacion);

void ofrecerHabitacionesDobles(int* opcionDeHabitacionEscogida);
void reservarPiezasDobles(int &contador2, int &solicitud, int &precio, int &tipoHabitacion);

void mensajeNoDisponibilidad(); 
void cancelarOperacion();

void cantidadDiasHospedaje(int* dias);
void metodoPago(int* ingresarOpcion, int* ingresarRut, int menor, int mayor);
int totalAPagar(int precioHabitacion, int cantidadDias);

void imprimirBoleta(int numeroSolicitud, char* nombreDelUsuario, char* apellidoDelUsuario, int tipoHabitacionElegida, int diasHospedaje, int precioFinal, int opcionIngresada, int rutIngresado);