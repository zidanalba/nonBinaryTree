#include "nonBinaryTree.h"

#include <stdio.h>
#include <string.h>

// Constructor
address createTree (infotype value){
	address newTree = malloc(sizeof(treeNode));
	if (newTree != NULL){
		newTree -> info = value;
		newTree -> parent = NULL;
		newTree -> firstChild = NULL;
		newTree -> nextBrother = NULL;
	} else return NULL;
}

void addChild (address *root, address *child){
	(*root) -> firstChild = *child;
	(*child) -> parent = *root;
}

void addSibling (address *brother, address *newBrother){
	(*brother) -> nextBrother = *newBrother;
	(*newBrother) -> parent = (*brother) -> parent;
}

void showNodeByPreOrder (address root){
	if (root == NULL){
		printf ("Empty");
		return;
	}
	
	printf ("Nama : %c\n", root -> info.nama);
	printf ("Nama : %c\n", root -> info.jabatan);
	printf (" - ");
	showNodeByPreOrder (root -> firstChild);
	printf (" - ");
	showNodeByPreOrder (root -> nextBrother);
	printf ("\nDone\n ");

}	

void siapaAtasan (address root, char cariNama){
	char cariNama2 = cariNama;
	
	if (root == NULL){
		return;
	}
	
	if (strcmp(root -> info.nama, cariNama) == 0)
	{
		printf ("\nAtasannya adalah %c\n", root -> parent-> info.nama);
		return ;
		}
	
	siapaAtasan (root -> firstChild, cariNama2);
	
	siapaAtasan (root -> nextBrother, cariNama2);
}

void siapaBawahan (address root, char cariNama){
	char cariNama2 = cariNama;
	
	if (root == NULL){
		return;
	}
	
	if (strcmp(root -> info.nama, cariNama) == 0)
	{
		printf ("\nBawahannya adalah %c\n", root -> firstChild -> info.nama);
		return ;
		}
	
	siapaAtasan (root -> firstChild, cariNama2);
	
	siapaAtasan (root -> nextBrother, cariNama2);
}

void searchJabatan (address root, char cariJabatan){
	char cariJabatan2 = cariJabatan;
	
	if (root == NULL){
		return;
	}
	
	if (strcmp(root -> info.jabatan, cariJabatan) == 0)
	{
		printf ("%c : %c", root -> info.jabatan, root -> info.nama);
		return ;
		}
	
	searchJabatan (root -> firstChild, cariJabatan2);
	
	searchJabatan (root -> nextBrother, cariJabatan2);
}

void setInfo(char infoNama, char infoJabatan, address *root){
	strcpy((*root) -> info.nama, infoNama);
	strcpy((*root) -> info.jabatan, infoJabatan);
}
