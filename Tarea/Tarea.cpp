#include <iostream>

using namespace std;

int fibonacci(int x) {

	if (x == 0) {

		return 0;

	} if (x == 1) {

		return 1;

	}
	else {

		return (fibonacci(x - 2) + fibonacci(x - 1));

	}
}
int suma(int x) {
	if (x == 1) {
		return 1;
	}
	else {
		return x + suma(x - 1);
	}
}

int main() {

	int x = 1;

	while (x != 0) {

		int n;

		cout << "\nIngrese la cantidad de numeros a sumar: ";
		cin >> n;
		
		cout << " \nLa suma es: " << suma(n);

		cout << "\n\nPara continuar el programa inserte un valor distinto de 0: ";
		cin >> x;
	}


	return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
