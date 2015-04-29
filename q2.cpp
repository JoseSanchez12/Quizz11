#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void check_banana(string filename){
	int numdebananas = 0;
	ifstream infile(filename.c_str());
	infile.is_open();
	string line;
	string banana("banana");
	if(infile.good() == true){
		while (getline (infile, line)){
			transform(line.begin(), line.end(), line.begin(), :: tolower);
			if(line.find(banana)!=string::npos){
				numdebananas++;
			}
		}
	}
	cout << "Las bananas aparecieron " << numdebananas << " veces en el archivo";
}

int main(){
	string nombre;

	cout << "Pon el nombre del archivo que quieres analizar, " << endl;
	cout << "el archivo tiene que estar en la misma carpeta que el .cpp" << endl;
	cin >> nombre;
	check_banana(nombre);
	return 0;
}