#include <iostream>
#include <deque>

using namespace std;

// 0: Right, 1: Down, 2: Left, 3: Up
int xdir[4] = { 1, 0, -1, 0 }; 
int ydir[4] = { 0, 1, 0, -1 };

const int MAX = 100;

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
    bool board[MAX][MAX]{};
    bool snake_trace[MAX][MAX]{}; // initialize all elements as false

    cin >> K;
    while(K--){
        int ax, ay;
        cin >> ay >> ax;
        board[ax-1][ay-1] = true; 
    }

    cin >> L;
    deque<pair<int, char>> direction_instruction;
    while(L--){
        int X; char C;
        cin >> X >> C;
        direction_instruction.push_back({X, C});
    }

    deque<pair<int, int>> snake_body; // < x, y >
    snake_body.push_front({0, 0});
    snake_trace[0][0] = true;
    int time = 0;
    int direction_current = 0;
    while(1){
        
        time++;

        pair<int, int> current_body = make_pair(snake_body.front().first+xdir[direction_current], snake_body.front().second+ydir[direction_current] );
        
        bool hit_the_wall = !(current_body.first > -1 && current_body.second > -1 && current_body.first < N && current_body.second < N);
        // hit the wall 이 1이 되어야 함. 즉 뱀좌표가 board안쪽에 없으면 1이라는 것. 
        bool hit_the_body = snake_trace[current_body.first][current_body.second];

        bool there_is_apple = board[current_body.first][current_body.second];

        if( hit_the_wall || hit_the_body ){
            break;
        }else if( there_is_apple ){
            board[current_body.first][current_body.second] = false;
        }else if( !there_is_apple ){
            snake_trace[snake_body.back().first][snake_body.back().second] = false;
            snake_body.pop_back();
        }
        
        snake_body.push_front({current_body.first, current_body.second});
        snake_trace[current_body.first][current_body.second] = true;
        
        bool time_to_change = ( time == direction_instruction.front().first );
        if(time_to_change){
            // direction_current = getNextDirection(direction_instruction);
            if( direction_instruction.front().second == 'L'){
                direction_current = (direction_current-1+4)%4;
            }else if( direction_instruction.front().second == 'D'){
                direction_current = (direction_current+1)%4;
            }
            direction_instruction.pop_front();
        }
    }

    cout << time;

    return 0;
}