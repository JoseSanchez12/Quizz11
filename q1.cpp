#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void readNumbersfromfile(string filename){
int num, Lineas = 0;
float total = 0.0,  promedio = 0.0, destand = 0.0; 
	
	ifstream infile(filename.c_str());
	infile.is_open();
	string line;
	if(infile.good() == true){
		while (getline (infile, line)){
			num = atoi(line.c_str());
			total = total + num;
			Lineas++;
			promedio = (total/Lineas);
			destand = sqrt(promedio/(Lineas - 1));
}
		cout << "Total de valores = " << total << endl;
		cout << "Numero de valores = " << Lineas << endl;
		cout << "Promedio de los valores = " << promedio << endl;
		cout << "Desviacion Estandar de los valores = " << destand << endl;
	}
}

int main(){
	string nombre;

	cout << "Pon el nombre del archivo que quieres analizar, " << endl;
	cout << "el archivo tiene que estar en la misma carpeta que el .cpp" << endl;
	cin >> nombre;
	readNumbersfromfile(nombre);
	return 0;
}