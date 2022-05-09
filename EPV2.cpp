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
		aumentoSeg =salario+ (salario * 0.08);
		
		cout << "Hola " << nombre <<" " <<apellido << " Su Salario inicial era: " << salario << " ahora es Salario con bono: " << aumentoSeg << endl;
	}
	else if(tipoUsuario=="Mantenimiento" || "mantenimiento") {
		aumentoMant = salario +(salario*0.04) ;
		cout << "Hola " << nombre << " " << apellido << " Su Salario inicial era: " << salario << " ahora es Salario con bono: " << aumentoMant << endl;
	}
	else if (tipoUsuario=="Informatica" || "informatica") {
		aumentoInfor =salario+ (salario * 0.09);
		cout << "Hola " << nombre << " " << apellido << " Su Salario inicial era: " << salario << " ahora es Salario con bono: " <<aumentoInfor << endl;
	}
	else if (tipoUsuario=="Contabilidad" || "contabilidad") {
		aumentoConta =salario+ (salario * 0.02);
		cout << "Hola " << nombre << " " << apellido << " Su Salario inicial era: " << salario << " ahora es Salario con bono: " << aumentoConta << endl;
	}
	else {
		cout << "Error";
		
	}
	return 0;
}
