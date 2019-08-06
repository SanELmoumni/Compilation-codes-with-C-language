#include<stdio.h>
#include<stdlib.h>
int** Matrice(int l,int c){
	int **M;
	int i,j;
	M=(int**)malloc(l*sizeof(int*));
	for(i=0;i<l;i++)
			M[i]=(int*)malloc(c*sizeof(int*));



	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("Saisir la valeur : M[%d][%d] = ",i,j);
			scanf("%d",&M[i][j]);
		}
	}
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("%d \t",M[i][j]);
	}			printf("\n");
	}
	return M;
}

int trace(int* T,int **M,int taille){
	int suiv,i=0;
	suiv=M[0][T[i]];
	while(i<taille && suiv!=-1){
		suiv=M[suiv][T[i]];
		i++;
		printf("********** %d ********** \n",suiv);
	}
	return suiv;
					}					
int Reconnaissance(int etat){
	int fin;
	printf("Saisir l'etat final \n");
	scanf("%d",&fin);
	if(etat!=fin)
	return 0;
	else
	return 1;
}

 int *mot(int taille){
      int* t;
      t=(int*) malloc (taille*sizeof(int));
      for(int i=0;i<taille;i++){
	  printf("Saisir l'element %d : ",i);
      scanf("%d",&t[i]);
    }
    return t;  
}

int main(){
	int l,c;
	int n;
	printf("Saisir le nbr de lignes et colonnes : ");
	scanf("%d %d",&l ,&c);
	int **M=Matrice(l,c);
	do{
	printf("saisir la taille du mot : \n");
	scanf("%d",&n);
	int* m1=mot(n);
	if(Reconnaissance(trace(m1,M,n))==1)
	printf("Mot reconnu \n");
	else 
	printf("Mot non reconnu \n");} while(1);
return 0;	
}
