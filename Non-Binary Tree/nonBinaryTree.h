#ifndef nonBinaryTree_h
#define nonBinaryTree_h

#include <stdlib.h>
#include <stdbool.h>

// Struktur data
typedef struct infotype {
	char nama [50];
	char jabatan [50];
} infotype;

typedef struct Node *address;

typedef struct Node {
	infotype info;
	address firstChild;
	address parent;
	address nextBrother;
}treeNode;


// Constructor
address createTree (infotype value);
/* IS : Infotype
 * FS : dialokasikan menjadi bagian dari sebuah Node semua penunjuk bernilai NULL
*/ 

void addChild (address *root, address *child);
/* IS : Ada Node yang akan menjadi child sebuah Node, tetapi belum saling menunjuk.
 * FS : Node parent dan child saling menunjuk
*/

void addSibling (address *brother, address *newBrother);
/* IS : Ada 2 Node yang akan dijadikan sibling (levelnya sama) 
 * FS : Salah satu Node menunjuk Node yang lain sebagau nextBrother dengan parent yang sama.
*/

// Destructor


// Read dan Print
void showNodeByPreOrder (address root);
/* IS : Info tidak ditampilkan
 * FS : Info ditampilkan
*/

address readNode ();

infotype readInfo ();

// Getter dan Setter
infotype getInfo ();


void setInfo(char infoNama, char infoJabatan, address *root);


// Modul Penunjang
void siapaAtasan (address root, char cariNama);
/* IS : Mengirimkan nama yang ingin dicari
 * FS : Menampilkan siapa parent dari nama tersebut
*/

void siapaBawahan (address root, char cariNama);
/* IS : Mengirimkan nama yang ingin dicari
 * FS : Menampilkan siapa child dari nama tersebut
*/

void searchJabatan (address root, char cariJabatan);
/* IS : Mengirimkan nama jabatan yang ingin dicari
 * FS : Menampilkan siapa yang menjabat
*/

#endif
