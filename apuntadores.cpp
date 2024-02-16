#include <iostream>
#include <string>
using namespace std;

struct alumno {
  string nombre;
  int codigo;
  int nota[3];

  int promedio() {
    return (nota[0] + nota[1] + nota[2]) / 3;
  }
}; 

int main() {
  alumno estudiantes[4];
  alumno* apuntador = estudiantes; 

  for (int i = 0; i < 4; i++) {
    cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
    getline(cin, (apuntador + i)->nombre);
    cout << "Ingrese el código del estudiante " << i + 1 << ": "; 
    cin >> (apuntador + i)->codigo;
    cin.ignore(); // Ignorar el salto de línea después de leer el código
    for (int j = 0; j < 3; j++) {
      cout << "Ingrese la nota " << j + 1 << " del estudiante " << (apuntador + i)->nombre << ": ";
      cin >> (apuntador + i)->nota[j];
    }
    cin.ignore();
  }

  for (int i = 0; i < 4; i++) {
    cout << "Estudiante " << i + 1 << ":" << endl;
    cout << "Nombre: " << (apuntador + i)->nombre << endl;
    cout << "El codigo del estudiante es: " << (apuntador + i)->codigo << endl;
    for (int j = 0; j < 3; j++) {
        cout << "Nota "<<j<<": "<<(apuntador + i)->nota[j] << " "<<endl;
      }
    cout << endl;
    cout << "El promedio de las notas del estudiante es: " << (apuntador + i)->promedio() << endl;
    
    }
  
  return 0;
}

 

