#include <iostream>

using namespace std;

struct direccion{
	char calle[20];
	int numero;
	
}; 
struct revista{
	char nombre [20];
	int meses;
	char titulo [20];
	
	struct direccion dire;
};

int main(int argc, char** argv) {
	struct revista R1[6];
	struct revista *apuntador;
	apuntador=&R1[0];
	
	int num;
	cout<<"\t.::Elija una opcion::.\n"<<endl;
	cout<<"1. Datos del usuario "<<endl;
	cout<<"2. Mostrar datos del usuario "<<endl;
	cout<<"3. Cambiar datos"<<endl;
	cout<<"4. Salir "<<endl;
	cin>>num;
	
 switch (num)
 {
 	case 1:
	 cout<<"*Opcion 1* "<<endl;
	 cout<<"Ingresa el nombre de la persona: "<<endl;
	 fflush(stdin);
	 cin.getline(R1[0].nombre,20);
	 cout<<"Ingresa los meses a utilizar: "<<endl;
	 cin>>R1[0].meses;
	 cout<<"Ingrese el titular: "<<endl;
	 cin>>R1[0].titulo;
	 system("pause");
		break;
		
	case 2:
		break;
 		
 		
 		
    }while (num !=4);
	return 0;
}
