#include <iostream>
#include "List.h"
#include "TreeNode.h"
#include "Tree.h"

using namespace std;






int main()
{

    int *v=0;
    int val=12;
    v=&val;


    /*
    List <int> L;
    L.insert(v,L.sizeT);
    L.insert(v,L.sizeT);
    L.insert(v,L.sizeT);

    L.show();
     */
    Tree <int> T;
    T.create(0,12);
    T.create(0,11);
    T.create(1,10);
    T.create(1,20);
    T.create(1,22);
    T.create(2,23);

    T.create(1,34);
    T.create(2,33);
    T.remove(6);
    T.show();

    cout << "\nsprawdzanie poszczególnych komórek " << endl ;
    cout << T.getRoot().getSons().pick(6).value->getSize() << endl;
    cout << T.getRoot().getSons().pick(8).value->getId() << endl;


}