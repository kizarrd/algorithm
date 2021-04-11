//로프 문제
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin >> t;
    int n;

    vector<int> ropes;

    while(t--){
        cin >> n;
        ropes.push_back(n);
    }

    sort(ropes.begin(), ropes.end());

    int max_weight=0;
    int n_ropes=ropes.size();

    for(int i : ropes){
        max_weight = (i*(n_ropes) > max_weight ? i*(n_ropes) : max_weight);
        n_ropes--;
    }

    cout << max_weight;

    return 0;
}
