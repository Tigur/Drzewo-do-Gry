#include <iostream>
#include "headers/List.h"
#include "headers/priorQueue.h"

using namespace std;

int main()
{
     priorQueue<int>  L;
     //List <int> L;
    L.insert(1,0);
    L.insert(2,0);
    L.insert(3,0);
    L.insert(4,0);
    L.insert(5,1);



    L.show();


    cout << "\n\n "<< L.pick(3).value;
    return 0;
}