#include <iostream>
#include <string>
using namespace std;
struct Alumno {
    string nombre;
    int cod;
    int nota[3];
    float pro;
};


void ingreso(Alumno estudiantes[], int i){
    cout<<"informacion del estudiante "<<i+1<<endl;
    cout<<"Ingrese el nombre: ";
    cin>>estudiantes[i].nombre;
    cout<<"Ingrese el codigo: ";
    cin>>estudiantes[i].cod;
    for (int j =0; j<3; j++){
        cout<<"Ingresa la nota "<<i+1<<": ";
        cin>>estudiantes[i].nota[j];
    }
    estudiantes[i].pro=(estudiantes[i].nota[0]+estudiantes[i].nota[1]+estudiantes[i].nota[2])/3;
    
}

int main() {
    int cant;
    cout<<"Cuantos estudiantes desea ingresar? "<<endl;
    cin>>cant;
    Alumno estudiantes[cant];
    for (int j=0;j<cant;j++){
        ingreso(estudiantes,j);
    }
    Alumno* ptrEstudiantes = estudiantes; // Apuntador a la estructura
    for (int i=0;i<cant;i++ ){
        cout << "\nDatos del estudiante:" << endl;
        cout << "Nombre: " << (ptrEstudiantes+i)->nombre << endl;
        cout<<"Codigo: "<<(ptrEstudiantes+i)->cod<<endl;
        cout << "Notas: "<<endl;
        for (int j = 0; j < 3; ++j) {
            cout << (ptrEstudiantes+i)->nota[j] << " ";
            cout << endl;
        }
        cout<<"Promedio: "<<(ptrEstudiantes+i)->pro;
    }
    
    
    return 0;
}

