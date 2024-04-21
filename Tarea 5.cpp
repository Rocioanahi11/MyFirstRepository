#include<iostream>
#include<cstdlib>
using namespace std;
class software
{
	public:
		string so;
		int bitz;
		string version;
	public:
		void cargarsoft();
		void mostrarsoft();
		software();
		~software();
};
class hardware
{	public:
		int hdd;
		int ram;
		string procesador;
	public:
		void cargarhard();
		void mostrarhard();
		hardware();
		~hardware();
};
class computadora 
{
	public:
		string marca;
		string color;
		software soft;
		hardware hard;
		
	public:
		void cargarcompu();
		void mostrarcompu();
		computadora();
		~computadora();
};

void menu1();
int main()
{
	computadora objcomputadora;
	
	int op;
	system ("color 0b");
	do
{
	menu1(); cin >> op;
	
	switch (op)
	{
		case 1:
				objcomputadora.cargarcompu();
			break;
		case 2:
				objcomputadora.mostrarcompu();
			break;
		case 3:
			break;	
	}
	cout <<endl<<endl;
	system ("pause"); system ("cls");	
}  while (op!=9);
   system("pause");
   return 0;		
}

void software::cargarsoft()
{
	cout<<"Nombre del Sistema Operativo"<<endl;cin>>so;
	cout<<"Cuantos Bitz"<<endl;cin>>bitz;
	cout<<"Version del Sistema"<<endl;cin>>version;
}
void software::mostrarsoft()
{
	cout<<"Nombre del Sistema Operativa = " <<so<<endl;
	cout<<"Bitz = "<<bitz<<endl;
	cout<<"Version del Sistema = "<<version<<endl;
	
}
void hardware::cargarhard()
{
	cout<<"Tamaño del Disco Duro "<<endl;cin>>hdd;
	cout<<"Tamañp de RAM"<<endl;cin>>ram;
	cout<<"Procesador"<<endl;cin>>procesador;
	
}
void hardware::mostrarhard()
{
	cout<<"Tamaño del Disco Duro = " <<hdd<<endl;
	cout<<"Tamaño de RAM = "<<ram<<endl;
	cout<<"Procesador = "<<procesador<<endl;
}
void computadora::cargarcompu()
{	
	cout<<"Marca" <<endl;cin>>marca;
	cout<<"Color"<<endl;cin>>color;
	cout<<endl;
	hard.cargarhard();
}

void computadora::mostrarcompu()
{	
	cout<<"Marca = "<<marca<<endl;
	cout<<"Color = "<<color<<endl;
	cout<<endl;
	soft.mostrarsoft();
	cout<<endl;
	hard.mostrarhard();
}
software::software()
{
	
}
software::~software()
{
	
}
hardware::hardware()
{
	
}
hardware::~hardware()
{
	
}
computadora::computadora()
{
	
}
computadora::~computadora()
{
	
}
void menu1()
{
	cout<<"\n\t\t COMPU TEC \n\n";
	cout<<" 1. Cargar Compu           "<<endl;
	cout<<" 2. Mostrar Compu           "<<endl;
	
	
	cout<<" 9. SALIR           "<<endl;
	cout<<"\n INGRESE OPERACION:   ";
}

