#include "nonBinaryTree.h"

#include <stdio.h>

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
		

int main (){
	
}
