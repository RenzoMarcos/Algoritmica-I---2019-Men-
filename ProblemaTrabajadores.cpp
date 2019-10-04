#include<iostream>
using namespace std;

int main(){
	char nombre[30];
	double sueldo,sueldototal=0,cont=0;
	double porcentaje1, porcentaje2, cantidad;
	int opc;
	

	
do{	
	cout<<"\t Menú de trabajadores \n"<<endl;
	cout<<"1. Ingresar datos de trabajadores: "<<endl;
	cout<<"2. Calculo de porcentaje: "<<endl;
	cout<<"3. Calculo de pago total: "<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Digite una opcion: ";
	cin>>opc;
	system("cls");
	switch(opc){
		case 1:
			int n;
			cout<<"Digite la cantidad de empleados: "<<endl;
			cin>>n;
			for (cont=1;cont<=n;cont++){
			cout<<"Nombre del empleado: ";
			cin>>nombre;	
	
			cout<<"Sueldo: ";
			cin>>sueldo;	
	
			sueldototal=sueldototal+sueldo;
	
				if(sueldo>1500){
				cantidad++;
				}
			}
		break;
		
		case 2: porcentaje1=((cantidad/cont)*100);
				porcentaje2= 100-porcentaje1; 
				cout<<"El porcentaje de sueldo mayor a 1500 es: "<<porcentaje1<<" %"<<endl;
				cout<<"El porcentaje de sueldo menor a 1500 es: "<<porcentaje2<<" %"<<endl;
		break;
		
		case 3: cout<<"El pago total es: "<<sueldototal<<endl;
		break;
		
		case 4: break;
		
		default: cout<<"ERROR"<<endl;
	
	}
	system("pause");
	system("cls");
}	while(opc != 4);

return 0;
}
	
