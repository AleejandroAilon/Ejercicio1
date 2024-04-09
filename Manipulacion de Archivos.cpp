#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream archivo("datos.txt");
	
	if(!archivo.is_open()){
		cout << "No se pudo abrir." << endl;
		return 1;
	} // Fin del if
	
	string nombre;
	int edad;
	
	while(true){
		cout << "Ingrese su nombre o 'fin' para salir: ";
		getline(cin, nombre);
		
		if(nombre == "fin") break;
		
		cout << "Ingrese su edad:  ";
		cin >> edad;
		cin.ignore(); // Sirve para limpiar el buffer del salto de linea
		
		archivo << nombre << " " << edad << endl;
	} // Fin del while
	
	archivo.close();
	
	ifstream Leer("datos.txt");
	if(!Leer.is_open()){
		cout << "Error al abrir el archivo." << endl;
		return 1;
	} // Fin del if
	
	cout << "Se han guardado correctamente los datos." << endl;
	while(Leer >> nombre >> edad){
		cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
	} // Fin del while
	
	Leer.close();
	return 0;
	
}




