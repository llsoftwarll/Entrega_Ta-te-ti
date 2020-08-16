#include <iostream>
#include <conio2.h>
using namespace std;

//creo la clase Mostrador_inicial con los metodos de constructor y opciones
class Mostrador_inicial{
public:
	Mostrador_inicial();
	void opciones();
};
//sirve para mostrar en pantalla la parte inicial del juego
Mostrador_inicial::Mostrador_inicial(){
	cout<<"Juego del TA-TE-TI"<<endl;
	cout<<"Jugador 1 X"<<endl;
	cout<<"Jugador 2 O"<<endl<<endl;
	
	cout<<"====================================================="<<endl<<endl;
	cout<<"====================================================="<<endl;
	
	cout<<"Turno del jugador numero 1 X"<<endl<<endl;
	
	cout<<"     A   B   C"<<endl;
	cout<<"   ============="<<endl;
	cout<<"3  |"<<"   "<<"|"<<"   "<<"|"<<"   "<<"|"<<endl;
	cout<<"   -------------"<<endl;
	cout<<"2  |"<<"   "<<"|"<<"   "<<"|"<<"   "<<"|"<<endl;
	cout<<"   -------------"<<endl;
	cout<<"1  |"<<"   "<<"|"<<"   "<<"|"<<"   "<<"|"<<endl;
	cout<<"   ============="<<endl<<endl;
}
//sirve para mostrar en pantalla las opciones disponibles
void Mostrador_inicial::opciones(){
	cout<<"1A presione 1:"<<endl;
	cout<<"1B presione 2:"<<endl;
	cout<<"1C presione 3:"<<endl;
	cout<<"2A presione 4:"<<endl;
	cout<<"2B presione 5:"<<endl;
	cout<<"2C presione 6:"<<endl;
	cout<<"3A presione 7:"<<endl;
	cout<<"3B presione 8:"<<endl;
	cout<<"3C presione 9:"<<endl;
	cout<<"Opcion: "<<endl;
}

//creo la clase Ficha con atributos y metodos
class Ficha{
private:
	//los atributos pulsar y pase sirven para que se puede utilizar una vez. EJ: if(8 == 8 && bool == false) entra la primera vez
	//la segunda vez cambio el bool en true asi no entra nuevamente
	bool pulsar[9];
	bool pase;
	//el atributo parte sirve para guardar las 'x' o 'o'
	char parte[9];
	//el atributo numeros sirve para contador de empate
	int numeros;
	
public:
	//el constructor(metodo) sirve con los datos llegados de un entero y un char marca en el mapa la posion elegida
	Ficha(int numero, char ganadordos);
	//el metodo vencedor sirve para saber quie gano o se empato
	void vencedor();
	
};

//con los datos llegados de un entero y un char marca en el mapa la posion elegida
Ficha::Ficha(int numero, char ganadordos){
	
	if(pase == false)
	{
		numeros = 0;
		pase = true;
	}
	
	if(numero == 1 && pulsar[0] == false)
	{
		parte[0] = ganadordos;
		pulsar[0] = true;
		numeros++;
	}
	
	if(numero == 2 && pulsar[1] == false)
	{
		parte[1] = ganadordos;
		pulsar[1] = true;
		numeros++;
	}
	
	if(numero == 3 && pulsar[2] == false)
	{
		parte[2] = ganadordos;
		pulsar[2] = true;
		numeros++;
	}
	
	if(numero == 4 && pulsar[3] == false)
	{
		parte[3] = ganadordos;
		pulsar[3] = true;
		numeros++;
	}
	
	if(numero == 5 && pulsar[4] == false)
	{
		parte[4] = ganadordos;
		pulsar[4] = true;
		numeros++;
	}
	
	if(numero == 6 && pulsar[5] == false){
		
		parte[5] = ganadordos;
		pulsar[5] = true;
		numeros++;
	}
	
	if(numero == 7 && pulsar[6] == false)
	{
		parte[6] = ganadordos;
		pulsar[6] = true;
		numeros++;
	}
	
	if(numero == 8 && pulsar[7] == false)
	{
		parte[7] = ganadordos;
		pulsar[7] = true;
		numeros++;
	}
	
	if(numero == 9 && pulsar[8] == false)
	   
		parte[8] = ganadordos;
		pulsar[8] = true;
		numeros++;
	}
	
	cout<<"     A   B   C"<<endl;
	cout<<"   ============="<<endl;
	cout<<"3  | "<<parte[6]<<" | "<<parte[7]<<" | "<<parte[8]<<" | "<<endl;
	cout<<"   -------------"<<endl;
	cout<<"2  | "<<parte[3]<<" | "<<parte[4]<<" | "<<parte[5]<<" | "<<endl;
	cout<<"   -------------"<<endl;
	cout<<"1  | "<<parte[0]<<" | "<<parte[1]<<" | "<<parte[2]<<" | "<<endl;
	cout<<"   ============="<<endl<<endl;
	
}

//determina con todas la combinaciones pobibles si hay ganador
void Ficha::vencedor(){
	
	if(parte[0] == 'x' && parte[1] == 'x' && parte[2] == 'x')
	{
		cout<<"Ganador jugador 1"<<endl;
		exit(0);
	}
	
	if(parte[0] == 'o' && parte[1] == 'o' && parte[2] == 'o')
	{
		cout<<"Ganador jugador 2"<<endl;
		exit(0);
	}
	
	if(parte[3] == 'x' && parte[4] == 'x' && parte[5] == 'x')
	{
		cout<<"Ganador jugador 1"<<endl;
		exit(0);
	}
	
	if(parte[3] == 'o' && parte[4] == 'o' && parte[5] == 'o')
	{
		cout<<"Ganador jugador 2"<<endl;
		exit(0);
	}
	if(parte[6] == 'x' && parte[7] == 'x' && parte[8] == 'x')
	{
		cout<<"Ganador jugador 1"<<endl;
		exit(0);
	}
	
	if(parte[6] == 'o' && parte[7] == 'o' && parte[8] == 'o')
	{
		cout<<"Ganador jugador 2"<<endl;
		exit(0);
	}
	
	if(parte[0] == 'x' && parte[4] == 'x' && parte[8] == 'x')
	{
		cout<<"Ganador jugador 1"<<endl;
		exit(0);
	}
	
	if(parte[0] == 'o' && parte[4] == 'o' && parte[8] == 'o')
	{
		cout<<"Ganador jugador 2"<<endl;
		exit(0);
	}
	
	if(parte[2] == 'x' && parte[4] == 'x' && parte[6] == 'x')
	{
		cout<<"Ganador jugador 1"<<endl;
		exit(0);
	}
	if(parte[2] == 'o' && parte[4] == 'o' && parte[6] == 'o')
	{
		cout<<"Ganador jugador 2"<<endl;
		exit(0);
	}
	
	if(parte[0] == 'x' && parte[3] == 'x' && parte[6] == 'x')
	{
		cout<<"Ganador jugador 1"<<endl;
		exit(0);
	}
	
	if(parte[0] == 'o' && parte[3] == 'o' && parte[6] == 'o')
	{
		cout<<"Ganador jugador 2"<<endl;
		exit(0);
	}
	
	if(parte[1] == 'x' && parte[4] == 'x' && parte[7] == 'x')
	{
		cout<<"Ganador jugador 1"<<endl;
		exit(0);
	}
	
	if(parte[1] == 'o' && parte[4] == 'o' && parte[7] == 'o')
	{
		cout<<"Ganador jugador 2"<<endl;
		exit(0);
	}
	
	if(parte[2] == 'x' && parte[5] == 'x' && parte[8] == 'x')
	{
		cout<<"Ganador jugador 1"<<endl;
		exit(0);
	}
	
	if(parte[2] == 'o' && parte[5] == 'o' && parte[8] == 'o')
	{
		cout<<"Ganador jugador 2"<<endl;
		exit(0);
	}
	
	if(numeros == 9)
	{
		cout<<"Ningun jugador gano"<<endl;
		exit(0);
	}
	
}

int main(int argc, char *argv[]) {
	
	//sirve para darle valor al numero a travez del teclado
	int numero = 0;
	//sirve para diferenciar que turno le toca cada uno
	int jugador_control = 1;
	int control = 1;
	//sirve para saber si toca X y O
	int controldos = 1;
	int jugador_controldos = 1;
	//guardo el valor de X y O
	char ganador;
	//es un control para que no se pulse varia veces la mismo numero
	bool repeticion[9];
	
	//Muestra en pantalla todo lo que tiene el metodo(constructor)
	Mostrador_inicial mostrar;
	
	//sirve para repetir las 9 jugadas del tateti
	for(int i = 0;i < 100; i++)
	{
		//muestro en pantalla las posiciones para acupar a travez del metodo de opciones de la clase Mostrador_inicial
		mostrar.opciones();
		
		//sirve para resetear la variable a 0
		numero = 0;
		
		//guardo el valor del numero puesto por teclado
		int tecla = getch();
		
		//sirve para saber que tecla toco y dar valor a la variable numero. Solo se puede oprimir una vez por el bool llamado repeticion
		if(tecla == 49 && repeticion[0] == false)
		{
			numero = 1;
			repeticion[0] = true;
		}
		
		if(tecla == 50 && repeticion[1] == false)
		{
			numero = 2;
			repeticion[1] = true;
		}
		
		if(tecla == 51 && repeticion[2]== false)
		{
			numero = 3;
			repeticion[2] = true;
		}
		
		if(tecla == 52 && repeticion[3] == false)
		{
			numero = 4;
			repeticion[3] = true;
		}
		
		if(tecla == 53 && repeticion[4] == false)
		{
			numero = 5;
			repeticion[4] = true;
		}
		
		if(tecla == 54 && repeticion[5] == false)
		{
			numero = 6;
			repeticion[5] = true;
		}
		
		if(tecla == 55 && repeticion[6] == false)
		{
			numero = 7;
			repeticion[6] = true;
		}
		
		if(tecla == 56 && repeticion[7] == false)
		{
			numero = 8;
			repeticion[7] = true;
		}
		
		if(tecla == 57 && repeticion[8] == false)
		{
			numero = 9;
			repeticion[8] = true;
		}
		
		//sirve de control para saber si pulso una tecla del 1 a 9 en el caso de no oprimir una dentro del rango se termina el programa
		if(tecla < 49 || tecla > 57)
		{
			cout<<"============Tecla no existente============"<<endl;
			return 0;
		}
		
		//sirve para saber si toca X o en caso de O
		if(jugador_controldos == controldos)
		{
			
			ganador = 'x';
		}else{
			
			controldos++;
			controldos++;
			ganador = 'o';
			
		}
		//incremento el contador en 1 para luego ser utilizado en la parte de arriba
		jugador_controldos++;
		
		//le paso los datos de un entero y un char al constructor de la clase Ficha. EJ: (8,'x') 
		Ficha jugada(numero,ganador);
		//sirve para saber si hay ganador o hay empate
		jugada.vencedor();
		
		//sirve para mostrar en pantalla a que jugador le toca
		if(jugador_control == control)
		{
			cout<<"=============================="<<endl<<endl;
			cout<<"=============================="<<endl;
			cout<<"Turno del jugador numero 2 O"<<endl<<endl;
		}
		else
		{
			cout<<"=============================="<<endl<<endl;
			cout<<"=============================="<<endl;
			cout<<"Turno del jugador numero 1 X"<<endl<<endl;
			control++;
			control++;
		}
		//incremento el contador en 1 para luego ser utilizado en la parte de arriba
		jugador_control++;
	}
	
	return 0;
}

