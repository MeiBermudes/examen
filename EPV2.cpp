// EPV2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
	float salario, salarioBono;
	float aumentoSeg, aumentoMant, aumentoInfor, aumentoConta;
	string nombre;
	string apellido;
	string tipoUsuario;

	cout << "-----Bonificaciones segun Tipo de Usuario-----"<<endl;
	
	cout << "  ----------------------------" << endl;
	cout << "  | 1.Seguridad        |    8% |" << endl;
	cout << "  | 2.Mantenimiento    |    4% |" << endl;
	cout << "  | 3.Informatica      |    9% |" << endl;
	cout << "  | 4.Contabilidad     |    2% |" << endl;
	cout << "  ----------------------------" << endl << endl;

	cout << "Ingrese nombre de Usuario:";
	cin >> nombre;

	cout << endl << "Ingrese apellido de Usuario:";
	cin >> apellido;

	cout << endl << "Ingrese el salario:";
	cin >> salario;

	cout << endl << "ingrese el tipo de usuario: ";
	cin >> tipoUsuario;

	if (tipoUsuario=="Seguridad" || "seguridad") {
		aumentoSeg = salario * 0.08;
		salarioBono = salario + aumentoSeg;

		cout << "Hola " << nombre <<" " <<apellido << " Su Salario inicial era: " << salario << " ahora es Salario con bono: " << salarioBono << endl;
	}
	else if(tipoUsuario == "Mantenimiento" || "mantenimiento") {
		aumentoMant = salario * 0.04;
		salarioBono = salario + aumentoMant;
		cout << "Hola " << nombre << " " << apellido << " Su Salario inicial era: " << salario << " ahora es Salario con bono: " << salarioBono << endl;
	}
	else if (tipoUsuario == "Informatica" || "informatica") {
		aumentoInfor = salario * 0.09;
		salarioBono = salario + aumentoInfor;
		cout << "Hola " << nombre << " " << apellido << " Su Salario inicial era: " << salario << " ahora es Salario con bono: " << salarioBono << endl;
	}
	else if (tipoUsuario == "Contabilidad" || "contabilidad") {
		aumentoConta = salario * 0.02;
		salarioBono = salario + aumentoConta;
		cout << "Hola " << nombre << " " << apellido << " Su Salario inicial era: " << salario << " ahora es Salario con bono: " << salarioBono << endl;
	}
	else {
		cout << "Error";
		return 0;
	}

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
