#include <iostream>


using namespace std;
struct Animal{
	char nombre[20];
	int edad;
} animal1,animal2;

int main(int argc, char** argv) {
	cout<<"nombre: ";
	cin.getline(animal2.nombre,20,'\n');
	cout<<"edad: ";
	cin>>animal2.edad;
	//animal1.edad=10;
	cout<<animal2.nombre<<endl;
	cout<<animal2.edad<<endl;
	system("pause");
	return 0;
}
