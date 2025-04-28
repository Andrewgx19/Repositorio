#include <iostream>
using namespace std;

 int main() {
    string nombre;
    string tipo;

    cout <<"hola,soy kraven elcazador ¿cual es tu nombre?" <<endl;
    cin >> nombre;
    
    
    cout <<"ingrese su tipo" <<endl;
    cin >> tipo;

    if (tipo=="animal"){
        cout <<"hola" <<nombre <<"eres un animal y te protegere" <<endl;}
    else if (tipo == "persona") {
        cout << "hola" << nombre << "eres una persona y te saludo" <<endl;
    }
    else if ( tipo== "malo"){
        cout << "hola" << nombre << " eres una mala persona y estas en mi lista"<< endl;
        }
        return 0;    
    
        
    }
 
    