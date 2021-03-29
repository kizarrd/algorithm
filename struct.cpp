#include <stdio.h>
#include <iostream>

using namespace std;

struct IntPair {
    public:
        IntPair(): first(3), second(5) {}
        int sum() {return first + second; }
    private:
        int first, second;
};

int main(){

    IntPair obj;
    cout << obj.sum() << '\n';


    return 0;
}