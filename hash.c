#include <stdio.h>
#define tam 1000

typedef clave;

typedef struct tnodo{

  	clave CLAVE;
  	int peroido, usado //usado es un booliano para saber si el nodo ha sido usado
	float cmercancia, arancel;
	char pais[20],unidad[6];
	 
  struct nodo *siguiente;

  }nodo;

nodo vector [tam]


void leer_archivo(){
	
int PERIODO;
float CMERCANCIA;
char PAIS[20],UNIDAD[6],come;	
	
	FILE * ptr;
	ptr =fopen("TABLA.txt","r");
	
		if(ptr==NULL){
			
			printf("no se pudo leer");
			return;
		}
		else{
		
			while(!feof(ptr)){
				
				fscanf(ptr,"%i",&PERIODO);
				fscanf(ptr,"%c",&come);
				fscanf(ptr,"%c",&PAIS);
				fscanf(ptr,"%c",&come);
				fscanf(ptr,"%f",&arancel);
				fscanf(ptr,"%c",&come);
				fscanf(ptr,"%f",&CMERCANCIA);
				fscanf(ptr,"%c",&come);
				fscanf(ptr,"%c",&UNIDAD);
			
				
			}
	    }	
}

hash_chaining(float arancel,clave CLAVE){
	
	
	clave = (arancel%4000);
	return(clave);
		
}

introducir_enarreglo(){
	
	hash_chaining(clave);
	if((vector[clave].usado)==0){
		
		vector[clave].periodo=PERIODO;
		vector[clave].pais=PAIS;
		vector[clave].arancel=arancel;
		vector[clave].cmercancia=CMERCANCIA;
		vector[clave].unidad=UNIDAD;
		vector[clave].usado=1;
	}
	else{
	 	
		 if(vector[clave].siguiente==NULL;)	{
	 
			aux =malloc ()//pedir el nuevo nodo
			vector[clave].periodo=PERIODO;
			aux.pais=PAIS;
			vector[clave].arancel=arancel;
			aux.cmercancia=CMERCANCIA;
			aux.unidad=UNIDAD;
		}
		else{
			
			
			
		}
	}
	
}

main(){
	
	leer archivo();
	hash_chaining()
	introducir_enarreglo();
}

