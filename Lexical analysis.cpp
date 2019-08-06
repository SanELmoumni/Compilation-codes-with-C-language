#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int** Matrice(){
	int** M;
	int i,j,l,c;
	FILE* f=NULL;
	f=fopen("mat.txt","r+");
	if(f!=NULL){
		printf("Ouverture du fichier avec succes ! \n");
		fscanf(f,"%d",&l);
		fscanf(f,"%d",&c);
		
			// LES ALLOCATIONS :
		
			M=(int**)malloc(l*sizeof(int*));
		for(i=0;i<l;i++)
			M[i]=(int*)malloc(c*sizeof(int*));				
			// Lecture des elements de la matrice
		for(i=0;i<l;i++){
			for(j=0;j<c;j++){
			fscanf(f,"%d",&M[i][j]);
				}
				}
	}		// AFFICHAGE DE LA MATRICE
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("%d \t",M[i][j]);
	}			printf("\n");	}
		
	fclose(f);
	return M;
}

int main(){
	// ANALYSEUR LEXICAL DE int x=10;
	// IDENTIFICATEUR {x,y,xy,yx}
	// DECLARATION {
	int **M=Matrice();
	int **p=mot();
	return 0;
}
