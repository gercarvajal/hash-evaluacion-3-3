#include <stdio.h>
#define tam 1000

typedef struct tnodo{

  	int CLAVE;
  	int peroido, usado //usado es un booliano para saber si el nodo ha sido usado
	float cmercancia;
	char pais[20],unidad[6];
	 
  struct nodo *siguiente;

  }nodo;

nodo vector [tam]


void leer_archibo(){
	
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
				fscanf(ptr,"%f",&CMERCANCIA);
				fscanf(ptr,"%c",&come);
				fscanf(ptr,"%c",&UNIDAD);
			
				
			}
	    }	
}

hash_chaining(float cmercancia,int clave){
	
	
	clave = (cmercancia%11);
	return(clave);
		
}

introducir_enarreglo(){
	
	hash_chaining(clave);
	if((vector[clave].usado)==0){
		
		vector[clave].periodo=PERIODO;
		vector[clave].pais=PAIS;
		vector[clave].cmercancia=CMERCANCIA;
		vector[clave].unidad=UNIDAD;
		vector[clave].usado=1;
	}
	else{
	 	
		 if(vector[clave].siguiente==NULL;)	{
	 
			aux =malloc ()//pedir el nuevo nodo
			vector[clave].periodo=PERIODO;
			aux.pais=PAIS;
			aux.cmercancia=CMERCANCIA;
			aux.unidad=UNIDAD;
		}
		else{
			
			
			
		}
	}
	
}

main(){
	
	
}

