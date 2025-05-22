#include <stdio.h>

const float Gerentes = 5125;
const float Salario_Hora = 13.13;
const float Salario_Hora_Extra = 13.13 * 1.5;
const float Salario_Comision = 400;
const float Comision = 0.046;

int main()
{
    int categoria, horas_trabajadas;
    float ventas, salario_empleado, total_nomina = 0;
    char seguir;

    do {
        printf("Ingrese la categoria del empleado (1: Gerente, 2: Trabajador con horario, 3: Trabajador a comision): ");
        scanf("%d", &categoria);

        switch (categoria) {
            case 1:
                salario_empleado = Gerentes;
                break;
            case 2:
                printf("Ingrese las horas trabajadas por el empleado: ");
                scanf("%d", &horas_trabajadas);
                if (horas_trabajadas > 40) {
                    salario_empleado = (40 * Salario_Hora) + ((horas_trabajadas - 40) * Salario_Hora_Extra);
                } else {
                    salario_empleado = horas_trabajadas * Salario_Hora;
                }
                break;
            case 3:
                printf("Ingrese el monto de las ventas realizadas por el empleado: ");
                scanf("%f", &ventas);
                salario_empleado = Salario_Comision + (ventas * Comision);
                break;
            default:
                printf("Categoria ingresada no valida\n");
                break;
        }

        printf("El salario del empleado es: $%.2f\n", salario_empleado);
        total_nomina += salario_empleado;

        printf("¿Desea calcular el salario de otro empleado? (s/n) ");
        scanf(" %c", &seguir);
    } while (seguir == 's');

    printf("El monto total de la nómina es: $%.2f\n", total_nomina);

    return 0;
}