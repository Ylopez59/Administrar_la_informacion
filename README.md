# Administrar_la_informacion

In this code you can modify the user information.

How to use 

the code is going to ask you user and password.
You are going to put the user and password correctly.
When the user and password is correct, the program is going to ask your security access.
In the security access you a going select (1 for true or 0 for false).
When you select de correct option you are going to access for the info.

//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definición de estructura para información de usuario
struct UserInfo {
    string nombre;
    int age;
    string sexo;
};

// Función para editar la información del usuario
void editUserInfo(UserInfo& user) {
    // Edición de información de usuario
    cout<<"Edición de su información: "<<endl;
    cout<<"Escriba su nuevo nombre: "<<endl;
    cin>> user.nombre;
    cout<<"Escriba su nueva edad: "<<endl;
    cin>>user.age;
    cout<<"Escriba su nuevo sexo (si aplica): "<<endl;
    cin>>user.sexo;
    // Información actualizada del usuario
    cout<<"Su información actualizada es: "<<endl;
    cout<<"Su nuevo nombre es: "<<user.nombre<<endl;
    cout<<"Su nueva edad es: "<<user.age<<endl;
    cout<<"Su nuevo sexo es (si aplica): "<<user.sexo<<endl;
}

// Función para mostrar información del usuario
void displayUserInfo(UserInfo user) {
    // Visualización de información de usuario
    cout<<"Visualización de su información:"<<endl;
    cout<<"Nombre: "<<user.nombre<<endl;
    cout<<"Edad: "<<user.age<<endl;
    cout<<"Sexo: "<<user.sexo<<endl;
}

int main() {
    cout << " ___________________________________________________________________________________________________________________\n";
    cout << "|                                            Bienvenido a Federal HCOI                                              |\n";
    cout << "| AVISO: USTED ESTA ENTRANDO A UN SERVIDOR FEDERAL, DE NO SER AUTORIZADO CONLLEVA UNA MULTA 1.5M Y CADENA PERPETUA. |\n";
    cout << "|        AL ENTRAR AL SERVIDOR, USTED ACCEPTÓ QUE PODAMOS GRABAR LA PANTALLA Y CAMARA CON AUDIO DE SU ORDENADOR.    |\n";
    cout << "|___________________________________________________________________________________________________________________|\n";
    
    // Declaración de variables
    vector<UserInfo> usuarios;
    usuarios.push_back({"John", 30, "Masculino"});
    usuarios.push_back({"Kimberly", 25, "Femenina"});
    string username;
    string password;
    bool editAccess;
  
    while (true) {
        // Autenticación de usuario
        cout<< "Ingrese el nombre de usuario (admin1 o admin2): "<<endl;
        cin>> username;
        cout<< "Ingrese la contraseña (password1 o password2): "<<endl;
        cin>> password;
        cout<<"Tiene permiso para editar información? (1 para cierto / 0 para falso)"<<endl;
        cin>>editAccess;

        // Validación de visualización y edición de información
        if (username == "admin1" && password == "password1") {
            if (editAccess) {
                // Visualización de información de admin1
                displayUserInfo(usuarios[0]);
                // Edición de información de admin1
                editUserInfo(usuarios[0]);
            } else {
                // Visualización de información de admin1
                displayUserInfo(usuarios[0]);
            }
            break;
        } else if (username == "admin2" && password == "password2") {
            if (editAccess) {
                // Visualización de información de admin2
                displayUserInfo(usuarios[1]);
                // Edición de información de admin2
                editUserInfo(usuarios[1]);
            } else {
                // Visualización de información de admin2
                displayUserInfo(usuarios[1]);
            }
            break;
        } else {
            cout << "Nombre de usuario o contraseña incorrectos. Por favor intente de nuevo." << endl;
        }
    }

    return 0;
}

