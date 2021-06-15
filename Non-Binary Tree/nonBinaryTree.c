#include "nonBinaryTree.h"

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
	(*root) -> firstChild = child;
	(*child) -> parent = root;
}

void addSibling (address *brother, address *newBrother){
	(*brother) -> nextBrother = newBrother;
	(*newBrother) -> parent = (*brother) -> parent;
}


int main (){
	
}
