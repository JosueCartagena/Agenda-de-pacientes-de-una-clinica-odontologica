//Primero ponemos la librerias que vamos a usar en este caso las cadenas o string que no viene incluido el c++ y el using namespace para hacer mas corto a la hora de mandar mensajes de salido o hacer mensajes de entrada
#include <iostream>
using namespace std;
#include <string>
int main() {
    //En esta parte del codigo declaramos todas la variables que vamos usar poniendo nombre de que es cada variable
    string nombre;
    string numero_seguro;
    string contraseña;
    string iniciar_numero;
    string odontologo;
    string aceptar;
    string iniciar_contraseña;
    int escoger;
    int Ciclo;
    //aqui asignamos valores a 3 variables que necesitamos en este caso ciclo para crear uno escoger para que no me tome como invalido las codicionales y la contraseña que es una nos van a dar
    escoger=1;
    Ciclo=1;
    contraseña="7892";
    //Aqui hacemos un pequeño registro para ingresar a la aplicion usando los cout como mensajes y los cin como variables de entrada
    cout<<"Bienvenida a la aplicacion MaclaionBO"<<endl;
    cout<<"Ingrese su nombre y su numero de seguro"<<endl;
    cin>>nombre;
    cin>>numero_seguro;
    cout<<"Su contraseña es:"<<contraseña<<endl;
    cout<<"Ingrese primero su numero de seguro"<<endl;
    //Usamos 2 ciclos para que confirmar la contraseña y el numero de seguro y si esta incorrecto pedimos hasta que este correcto
    while(Ciclo==1){
        cin>>iniciar_numero;
        if(iniciar_numero==numero_seguro){
            break;
        }
        cout<<"Numero incorrecto"<<endl;
        cout<<"Ingrese de nuevo su numero de seguro"<<endl;
    }
    Ciclo=1;
    
    cout<<"Ingrese su contraseña dada"<<endl;
    
    while(Ciclo==1){
        cin>>iniciar_contraseña;
        if(iniciar_contraseña==contraseña){
            break;
        }
        cout<<"contraseña incorrecta"<<endl;
        cout<<"Ingrese de nuevo su contraseña de seguro"<<endl;
    }
    //una ves iniciado hacemos un pequeño resumen de los datos ya dado y damos a escoger que odontologo quiere el usuario para su colsulta
    cout<<"Bienvenido "<<nombre<<" de nuevo a la clinica MaclaionBO"<<endl;
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"( ͡°( ͡° ͜ʖ( ͡° ͜ʖ ͡°)ʖ ͡°) ͡°)"<<endl;
    cout<<"numero de seguro:"<<numero_seguro<<endl;
    cout<<"Nro de cuenta:12"<<endl;
    //Estos ciclos es para escoger el odontolgo que se adapte a su hora o el mas comodo para el y si escogio el incorrecto o le parece mal la hora puede escoger otro y una ves escogido usamos el break para que el ciclo se rompa y siga con las demas lineas de codigo
    while(escoger==1){
    cout<<"Escoja a que odontolgo quiere escoger para su proxima cita Escriba el numero de su odontologo para escoger"<<endl;
    cout<<"1-Enrique Choque"<<endl;
    cout<<"2-Facundo Gonzales"<<endl;
    cout<<"3-Susana Sandoval"<<endl;
    cin>>odontologo;
    if (odontologo=="1"){
        cout<<"El odontologo Enrique se encuentra disponible solo en la mañana seguro que quiere sacar ficha? si/no"<<endl;
        cin>>aceptar;
        if(aceptar=="si"){
            break;
        }
    }
    if (odontologo=="2"){
        cout<<"El odontologo Facundo se encuentra disponible solo en la tarde seguro que quiere sacar ficha? si/no"<<endl;
        cin>>aceptar;
        if(aceptar=="si"){
            break;
        }
    }
      if (odontologo=="3"){
        cout<<"El odontologo Susana se encuentra disponible solo en la noche seguro que quiere sacar ficha? si/no"<<endl;
        cin>>aceptar;
        if(aceptar=="si"){
            break;
        }
    }
    }
    //ahora damos un resultado o la ficha que escogio el paciento y le decimos que aque hora tiene que venir y su numero de ficha
    cout<<"Muchas gracias por elegir la clinica MaclaionBO"<<endl;
    if(odontologo=="1"){
        cout<<"El odontologo Enrique lo atendera a las 9:30 am llegue 15 minutos antes de la hora acordada usted es la ficha:4"<<endl;
    }
    if(odontologo=="2"){
        cout<<"El odontologo Facundo lo atendera a las 2:10 pm llegue 15 minutos antes de la hora acordada usted es la ficha:1"<<endl;
    }
    if(odontologo=="3"){
        cout<<"El odontologo Enrique lo atendera a las 8:10 pm llegue 15 minutos de la hora acordada usted es la ficha:2"<<endl;
    }
    //acordamos un poco sobre la encuesta y si tiene alguna cosulta que le hable al odontologo mediante su numero o el chat la aplicacion
     cout<<"Se le acordadara 2 horas antes para que vaya a su cita cualquier consulta puede consultarlo en el numero del odontologo o mediante el chat de la aplicacion :D"<<endl;
    return 0;
}