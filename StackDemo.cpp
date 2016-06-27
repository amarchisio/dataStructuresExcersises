#include <iostream>
#include "stack.h"
#include <vector>
#include <string>

using namespace std;

int main()
{
    Stack* intstack = new Stack();

    intstack->push(1);
    intstack->push(2);
    intstack->push(3);

    vector<string>* tim = new vector<string> ();
    tim->push_back("thing");
    cout << (*tim)[0] << endl;

    while(!instack->isEmpty())
        cout<< intstack->pop() <<endl;
    return 0;
}

