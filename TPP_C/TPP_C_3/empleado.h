
// Definicion de enums
enum est_civ {soltero, casado, viudo, divorciado};
enum estudios {primarios, secundarios, terciarios, universitarios, posgrado};
enum sex {m,f};

// Definicion de la estructura empleado
struct empleado {
    char apellido[40];
    char nombre[40];
    char domicilio[50]; // Quizas es mejor usar un struct de tipo domicilio
    char telefono[30];
    enum sex sexo;
    int edad;
    enum estudios estudios_cursados;
    enum est_civ estado_civil;
};

// Declaracion de funciones relacionadas con empleado
void imprimir_empleado(struct empleado e);
