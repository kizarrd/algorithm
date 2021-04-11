#include <iostream>
#include <stack>
#include <queue>

using namespace std;


int main(){

    stack<int> space;
    queue<int> line;

    int n, temp;
    cin >> n;
    while(n--){
        cin >> temp;
        line.push(temp);
    }
    
    int next_number = 1;

    while(1){
        if(!line.empty() && line.front()==next_number){
            line.pop();
            next_number++;
        }else if(!space.empty() && space.top()==next_number){
            space.pop();
            next_number++;
        }else if(!line.empty()){
            space.push(line.front());
            line.pop();
        }else if(line.empty()){
            break;
        }
    }

    if(space.empty()) cout << "Nice";
    else cout << "Sad";

    return 0;
}