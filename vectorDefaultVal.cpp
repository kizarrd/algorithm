#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Meeting {
    int begin;
    int end;
};

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    vector<Meeting> schedule(N); // vector with N elements with default value
    int a, b;

    int i = 0;

    while(N--){
        cout << schedule[i].begin << " " << schedule[i++].end << '\n';
    }

    return 0;
}