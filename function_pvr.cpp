#include <iostream>

using namespace std;

void continuousAdd(int* a){

    *a = *a+1;

}

int main(){

    int b = 0;
    int* a = &b;

    continuousAdd(&b);
    continuousAdd(a);

    cout << b << '\n';


    return 0;
}