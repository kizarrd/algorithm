// 덱 
#include <deque>
#include <iostream>
#include <string>

using namespace std;

int main(){

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string str;
    int X;
    deque<int> dq;

    cin >> N;

    while(N--){
        cin >> str;

        if(str == "push_front"){
            cin >> X;
            dq.push_front(X);
        }else if(str == "push_back"){
            cin >> X;
            dq.push_back(X);        
        }else if(str == "pop_front"){
            if(dq.empty()){
                cout << -1 << "\n";
            }else{
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }else if(str == "pop_back"){
            if(dq.empty()){
                cout << -1 << "\n";
            }else{
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }else if(str == "size"){
            cout << dq.size() << "\n";
        }else if(str == "empty"){
            cout << (dq.empty() ? 1 : 0) << "\n";
        }else if(str == "front"){
            if(dq.empty()){
                cout << -1 << "\n";
            }else{
                cout << dq.front() << "\n";
            }
        }else if(str == "back"){
            if(dq.empty()){
                cout << -1 << "\n";
            }else{
                cout << dq.back() << "\n";
            }
        }
    }
    return 0;
}