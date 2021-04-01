#include <iostream>
#include <queue>

using namespace std;

int pushingIntoQueue(int n, queue<int>& que) {
    for(int i=0; i < n*2; i++){
        que.push(i);
    }
}


int main(){

    queue<int> que;
    int n;

    cin >> n;

    pushingIntoQueue(n, que);

    for(int i = 0; i < n; i++){
        cout << que.front() << " ";
        que.pop();
        cout << que.front() << endl;
        que.pop();
    }


    return 0;
}