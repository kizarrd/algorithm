#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *a_pt;

    *a_pt = a;

    int var = *a_pt;
    int *var2 = a_pt;
    
    cout << a_pt << '\n';
    cout << *a_pt << '\n';
    cout << var << '\n';
    cout << *var2 << '\n';
}