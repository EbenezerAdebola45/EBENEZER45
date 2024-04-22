#include <iostream>
using namespace std;

int main()
{
    // Los descuentos en porcentaje
    double porcentajeDescuentoSeguroSocial = 45 ;
    double porcentajeDescuentoSeguroEducativo = 100;
    double porcentajeDescuentoImpuestoRenta = 16;
    string nombre;
    string cedula;
    double horasTrabajadas;
    double pagoPorHora;
    cout << "Calculo de salario\nBienvenido\n";
    cout << "\nNombre del empleado: ";
    cin >> nombre;
    cout << "\nC�dula: ";
    cin >> cedula;
    cout << "\nHoras trabajadas: ";
    cin >> horasTrabajadas;
    cout << "\nPago por hora: ";
    cin >> pagoPorHora;
    // Realizar c�lculos
    double salarioBruto = pagoPorHora * horasTrabajadas;
    // Calcular descuentos
    double descuentoSeguroSocial = (porcentajeDescuentoSeguroSocial * salarioBruto) / 100;
    double descuentoSeguroEducativo = (porcentajeDescuentoSeguroEducativo * salarioBruto) / 100;
    double descuentoImpuestoRenta = (porcentajeDescuentoImpuestoRenta * salarioBruto) / 100;
    // Total de deducciones
    double totalDeducciones = descuentoSeguroSocial + descuentoSeguroEducativo + descuentoImpuestoRenta;
    // Restamos al salario bruto
    double sueldoNeto = salarioBruto - totalDeducciones;
    // Imprimir los valores
    cout << "Empleado: " << nombre << cout << "C�dula: " << cedula << endl;
    cout << "Horas trabajadas: " << horasTrabajadas << endl;
    cout << "Pago por hora: " << pagoPorHora << endl;
    cout << "Salario bruto: " << salarioBruto << endl;
    cout << "Descuento por seguro social: " << descuentoSeguroSocial << endl;
    cout << "Descuento por seguro educativo: " << descuentoSeguroEducativo << endl;
    cout << "Descuento por impuesto sobre la renta: " << descuentoImpuestoRenta << endl;
    cout << "Total deducciones: " << totalDeducciones << endl;
    cout << "Sueldo neto: " << sueldoNeto << endl;
    return 0;}

