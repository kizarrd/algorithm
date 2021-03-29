#include <iostream>
#include <deque>
#include <vector>

using namespace std;

enum Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

int xdir[4] = { 0, 0, -1, 1 };
int ydir[4] = { 1, -1, 0, 0 };

int main(){

/*

    get board size N --> create an NxN board
    get # of apple K
    for K times, get apple position and then mark the board array where apples are located
    get # of changing direction, L
    for L times, get the changing direction information: time and direction

    create snake with deque
    set initial direction as Right

    while(1)

        snake'head moves one unit

        if hit the wall/snake body
            --> break
        else if apple, 
            --> remove the apple
            --> keep the tail
        else if no apple, 
            --> move the tail (shrink)
        
        increase time
        if it's time to change direction
            change direction

*/

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K, L;
    cin >> N;
    bool board[N][N];
    bool snake_trace[N][N];

    cin >> K;
    while(K--){
        int ax, ay;
        cin >> ay >> ax;
        board[ax][ay] = true; 
    }

    cin >> L;
    vector<pair<int, char>> direction_instruction;
    while(L--){
        int X; char C;
        direction_instruction.push_back({X, C});
    }

    deque<pair<int, int>> snake_body; // < x, y >
    snake_body.push_back({0, 0});
    int time = 0;
    int direction_current = RIGHT;
    while(1){
        pair<int, int> current_body = make_pair(snake_body.front().first+xdir[direction_current], snake_body.front().second+ydir[direction_current] );
        
        bool hit_the_wall = !(current_body.first > -1 && current_body.second > -1 && current_body.first < N && current_body.second < N);

        // hit the wall 이 1이 되어야 함. 즉 뱀좌표가 board안쪽에 없으면 1이라는 것. 

        if()
    }


    return 0;
}