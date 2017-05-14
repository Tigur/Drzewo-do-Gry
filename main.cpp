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
    L.insert(v,L.size);
    L.insert(v,L.size);
    L.insert(v,L.size);

    L.show();
     */
    Tree <int> T;
    T.create(0,12);
    T.create(0,11);
    T.create(1,10);
    //T.remove(1);



}