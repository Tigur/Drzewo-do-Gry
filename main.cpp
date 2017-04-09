#include <iostream>
#include "List.h"

using namespace std;






int main()
{

    int *v=0;
    int val=12;
    v=&val;
    List <int> L;
    L.insert(1,L.size);
    L.insert(2,L.size);
    L.insert(3,L.size);

    L.show();
}