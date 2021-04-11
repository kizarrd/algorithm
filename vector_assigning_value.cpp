#include <vector>
#include <iostream>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    v[2] = 10;

    cout << v[2] << '\n';

    for(int i : v) cout << i << ' ';

    return 0;
}