#include<iostream>
#include<windows.h>
#include<string.h>
using namespace std;

struct registroCliente{
	string nombrecompleto;
	int edad;
	string DNI;
	string numerotelefono;
	string sexo;
	string correo;
};


int main(){
	
	int opcion;
	SetConsoleOutputCP(CP_UTF8);
	
	cout<<"\n----BIENVENIDOS AL HOTEL EL 'TELO'----\n"<<endl;
	
	while(opcion!=9){ //Impresión del menú en la pantalla
	
	    cout<<"Seleccione una opción:"<<endl<<endl;
	    cout<<"1) Registrarse"<<endl
	        <<"2) Reserva de habitación"<<endl
	        <<"3) Servicio de limpieza"<<endl
	        <<"4) Restaurant"<<endl
	        <<"5) Estacionamiento"<<endl
	        <<"6) Actualizar datos"<<endl
	        <<"7) Eliminar datos"<<endl
	        <<"8) Historial de reservas"<<endl
	        <<"9) Salir"<<endl<<endl;
	    cout<<"Opción: ";
	    cin>>opcion;
	    
	    switch(opcion){
	    	case 1:
	    		break;
	    	case 2:
	    		break;
	    	case 3:
	    		break;
	    	case 4:
	    		break;
	    	case 5:
	    		break;
	    	case 6:
	    		break;
	    	case 7:
	    		break;
	    	case 8:
	    		break;
	    	case 9:
	    		cout<<"Saliendo...";
	    		break;
	    	default:
	    			cout<<"ERROR: Alternativa no válida, intente de nuevo..."<<endl<<endl;
	    		break;
		}
    }
}