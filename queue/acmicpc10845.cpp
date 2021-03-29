#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(){

    int t, u;
    string str;
    cin >> t;

    queue<int> q;

    while(t--){
        cin >> str;

        if(str == "push"){
            cin >> u;
            q.push(u);
        }else if(str == "pop"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() << '\n';
                q.pop();
            }
        }else if(str == "size"){
            cout << q.size() << '\n';
        }else if(str == "empty"){
            cout << q.empty() << '\n';
        }else if(str == "front"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front() << '\n';
            }
        }else if(str == "back"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.back() << '\n';
            }
        }
    }

    return 0;
}