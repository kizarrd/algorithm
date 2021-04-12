//good friends
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;
    queue<int> q[21];  // array of queues storing the order by students' grade. (= when it is added)
                       // index of the array represents the length of the name

    string str;
    long long counter=0;

    for(int t=0; t<n; t++){
        cin >> str;
        int l = str.length();
        while(!q[l].empty() && t - q[l].front() > k ){
            q[l].pop();
        }
        counter+=q[l].size();
        q[l].push(t);
    }

    cout << counter;

    return 0;
}