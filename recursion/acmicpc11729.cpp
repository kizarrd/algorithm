// Tower of Hanoi

#include <iostream>
#include <queue>

using namespace std;

int Hanoi(int n,int startPosition,int stopover,int destination, queue<int>& que){
    if(n == 1) {
        que.push(startPosition);
        que.push(destination);
        return 1;
    }
    
    return  Hanoi(n-1, startPosition, destination, stopover, que) 
            + Hanoi(1, startPosition, stopover, destination, que) 
            + Hanoi(n-1, stopover, startPosition, destination, que);

};

int main(){

    queue<int> q;
    int startPosition = 1, stopover = 2, destination = 3;
    int input;
    int num_of_steps;

    cin >> input;
    
    num_of_steps = Hanoi(input, startPosition, stopover, destination, q);
    cout << num_of_steps << '\n';

    for(int i = 0; i < num_of_steps; i++){
        cout << q.front() << " ";
        q.pop();
        cout << q.front() << '\n';
        q.pop();
    }


    return 0;
}