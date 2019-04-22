typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;

} eEmpleado;

void menu(void);
void mostrarEmpleado(eEmpleado[], int);
void ingresarEmpleado(eEmpleado[], int);
void mostrarTodos(eEmpleado[], int);
void buscarLibre(eEmpleado[], int);
void darBaja(eEmpleado[], int);
void empleadosConMayorSueldo(eEmpleado[], int);
