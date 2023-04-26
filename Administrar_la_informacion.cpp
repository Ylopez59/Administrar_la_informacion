#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definici�n de estructura para informaci�n de usuario
struct UserInfo {
    string nombre;
    int age;
    string sexo;
};

// Funci�n para editar la informaci�n del usuario
void editUserInfo(UserInfo& user) {
    // Edici�n de informaci�n de usuario
    cout << "Edici�n de su informaci�n: " << endl;
    cout << "Escriba su nuevo nombre: " << endl;
    cin >> user.nombre;
    cout << "Escriba su nueva edad: " << endl;
    cin >> user.age;
    cout << "Escriba su nuevo sexo (si aplica): " << endl;
    cin >> user.sexo;
    // Informaci�n actualizada del usuario
    cout << "Su informaci�n actualizada es: " << endl;
    cout << "Su nuevo nombre es: " << user.nombre << endl;
    cout << "Su nueva edad es: " << user.age << endl;
    cout << "Su nuevo sexo es (si aplica): " << user.sexo << endl;
}

// Funci�n para mostrar informaci�n del usuario
void displayUserInfo(UserInfo user) {
    // Visualizaci�n de informaci�n de usuario
    cout << "Visualizaci�n de su informaci�n:" << endl;
    cout << "Nombre: " << user.nombre << endl;
    cout << "Edad: " << user.age << endl;
    cout << "Sexo: " << user.sexo << endl;
}

int main() {
    cout << " ___________________________________________________________________________________________________________________\n";
    cout << "|                                            Bienvenido a Federal HCOI                                              |\n";
    cout << "| AVISO: USTED ESTA ENTRANDO A UN SERVIDOR FEDERAL, DE NO SER AUTORIZADO CONLLEVA UNA MULTA 1.5M Y CADENA PERPETUA. |\n";
    cout << "|        AL ENTRAR AL SERVIDOR, USTED ACCEPT� QUE PODAMOS GRABAR LA PANTALLA Y CAMARA CON AUDIO DE SU ORDENADOR.    |\n";
    cout << "|___________________________________________________________________________________________________________________|\n";

    // Declaraci�n de variables
    vector<UserInfo> usuarios;
    usuarios.push_back({ "John", 30, "Masculino" });
    usuarios.push_back({ "Kimberly", 25, "Femenina" });
    string username;
    string password;
    bool editAccess;

    while (true) {
        // Autenticaci�n de usuario
        cout << "Ingrese el nombre de usuario (admin1 o admin2): " << endl;
        cin >> username;
        cout << "Ingrese la contrase�a (password1 o password2): " << endl;
        cin >> password;
        cout << "Tiene permiso para editar informaci�n? (1 para cierto / 0 para falso)" << endl;
        cin >> editAccess;

        // Validaci�n de visualizaci�n y edici�n de informaci�n
        if (username == "admin1" && password == "password1") {
            if (editAccess) {
                // Visualizaci�n de informaci�n de admin1
                displayUserInfo(usuarios[0]);
                // Edici�n de informaci�n de admin1
                editUserInfo(usuarios[0]);
            }
            else {
                // Visualizaci�n de informaci�n de admin1
                displayUserInfo(usuarios[0]);
            }
            break;
        }
        else if (username == "admin2" && password == "password2") {
            if (editAccess) {
                // Visualizaci�n de informaci�n de admin2
                displayUserInfo(usuarios[1]);
                // Edici�n de informaci�n de admin2
                editUserInfo(usuarios[1]);
            }
            else {
                // Visualizaci�n de informaci�n de admin2
                displayUserInfo(usuarios[1]);
            }
            break;
        }
        else {
            cout << "Nombre de usuario o contrase�a incorrectos. Por favor intente de nuevo." << endl;
        }
    }

    return 0;
}

