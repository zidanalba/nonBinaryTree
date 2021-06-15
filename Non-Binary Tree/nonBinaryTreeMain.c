#include "nonBinaryTree.h"

int main (){

// Masih Error

// proses pembentukan hierarki

infotype infoRoot;
infotype infoChild;
infotype infoChild2;
infotype infoChild3;
infotype infoChild4;
infotype infoChild5;
infotype infoChild6;
infotype infoChild7;
infotype infoChild8;
infotype infoChild9;
infotype infoChild10;
infotype infoChild11;
infotype infoChild12;
infotype infoChild13;
infotype infoChild14;
infotype infoChild15;
infotype infoChild16;
infotype infoChild17;
infotype infoChild18;

address root = createTree(infoRoot);
setInfo("Ujang Kartiwa", "Kepala Lembaga", root);

// LEVEL 1
address child = createTree(infoChild);
setInfo("Engkos Koswara", "Kepala Bagian Perencanaan", child);

addChild(&root, &child);

address child2 = createTree(infoChild2);
setInfo("Hoerul Anam", "Kepala Bagian SDM", child2);

addChild(&root, *child2);
addSibling(&child, &child2)

address child3 = createTree(infoChild3);
setInfo("Dana Sukirman", "Kepala Bagian Keuangan", child3);

addChild(&root, *child3);
addSibling(&child2, &child3);

// LEVEL 2
// bawahan engkos
address child4 = createTree(infoChild4);
setInfo("Tati Sulastri", "Kepala Sub Bagian Anggaran", child4);

addChild(&child, *child4);

address child5 = createTree(infoChild5);
setInfo("Irvan Susilo", "Kepala Sub Bagian Pendataan", child5);

addChild(&child, *child5);
addSibling(&child4, &child5);

address child6 = createTree(infoChild6);
setInfo("Evi Sukaesih", "Sambas Nugroho", child6);

addChild(&child2, *child6);
addSibling(&child5, &child6);

// bawahan Hoerul Anam
address child7 = createTree(infoChild7);
setInfo("Sambas Nugroho", "Kepala Sub Bagian Tata Laksana", child7);

addChild(&child2, *child7);
addSibling(&child6, &child7);

address child8 = createTree(infoChild8);
setInfo("Mujani Gani", "Kepala Sub Bagian Pendataan", child8);

addChild(&child2, *child8);
addSibling(&child7, &child8);

address child9 = createTree(infoChild9);
setInfo("Noviyanti", "Kepala Sub Bagian Pelaksana Keuangan", child9);

addChild(&child3, *child9);

// LEVEL 3
// bawahan Tati
address child10 = createTree(infoChild10);
setInfo("Muktadi", "Staf", child10);

addChild(&child4, *child10);

address child11 = createTree(infoChild11);
setInfo("Hartanto Utomo", "Staf", child11);

addChild(&child4, *child11);
addSibling(&child10, &child11);

// bawahan Irvan
address child12 = createTree(infoChild12);
setInfo("Chandra Dimuka", "Staf", child12);

addChild(&child5, *child12);

// bawahan Evi
address child13 = createTree(infoChild13);
setInfo("Kartono", "Staf", child13);

addChild(&child6, *child13);

// bawahan Sambas
address child14 = createTree(infoChild14);
setInfo("Markonah", "Staf", child14);

addChild(&child7, *child14);

address child15 = createTree(infoChild15);
setInfo("Jaelani Supri Utama", "Staf", child15);

addChild(&child7, &child15);
addSibling(&child14, &child15);

address child16 = createTree(infoChild16);
setInfo("Ukar Mustopa", "Staf", child16);

addChild(&child7, &child16);
addSibling(&child15, &child16);

// bawahan mujani

address child17 = createTree(infoChild17);
setInfo("Marcellino", "Staf", child17);

addChild(&child8, &child17);

address child18 = createTree(infoChild18);
setInfo("Opik Taufik", "Staf", child18);

addChild(&child8, &child18);
addSibling(&child17, &child18);

showNodeByPreOrder(root);

siapaAtasan (root, "Kartono");
siapaBawahan (root, "Sambas Nugroho");


return 0;
}
