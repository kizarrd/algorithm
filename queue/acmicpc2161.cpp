#include <iostream>
#include <queue>

using namespace std;

int main(){

/*
    get the input n

    for i = 1 to n,
        q.push(i)

    while queue size > 1
        0. print q.front
        1. q.pop 
        2. push(q.front) and then q.pop
    
    print q.front
*/
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    int n;

    cin >> n;
    for(int i = 1; i <= n; i++)
        q.push(i);

    while(q.size() > 1){
        cout << q.front() << ' ';
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front();

    return 0;
}