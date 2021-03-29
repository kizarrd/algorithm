// Tower of Hanoi

#include <iostream>

using namespace std;

int Hanoi(int n,int startPosition,int stopover,int destination){
    if(n == 1) {
        cout << startPosition << ' ' << destination << '\n';
        return 0;
    }
    
    Hanoi(n-1, startPosition, destination, stopover);
    Hanoi(1, startPosition, stopover, destination);
    Hanoi(n-1, stopover, startPosition, destination);

};

int main(){

    int startPosition = 1, stopover = 2, destination = 3;
    int input;
    int num_of_steps;

    cin >> input;
    
    num_of_steps = (1<<input) - 1;
    cout << num_of_steps << '\n';

    if(input <= 20) Hanoi(input, startPosition, stopover, destination);


    return 0;
}