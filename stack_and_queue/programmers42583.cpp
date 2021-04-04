#include <string>
#include <vector>
#include <queue>

//다리를 지나는 트럭 문제

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    
    int answer_time = 0;
    int weight_on_bridge = 0;
    queue<int> things_on_bridge;    
    
    for(int i = 0; i < bridge_length; i++){
        things_on_bridge.push(0); // push air(zero weight with length 1, if you want to say so)
    }
    
    while(!truck_weights.empty()){            
        if(things_on_bridge.front() > 0){
            weight_on_bridge -= things_on_bridge.front();
        }
        things_on_bridge.pop();
        
        if( (weight_on_bridge + truck_weights.back()) > weight ){ 
            things_on_bridge.push(0); // enters air
        }else{
            things_on_bridge.push(truck_weights.back()); // enters the next truck
            weight_on_bridge += truck_weights.back();
            truck_weights.pop_back();
        }
        answer_time++;
    }
    
    while(weight_on_bridge > 0){
        if(things_on_bridge.front() > 0){
            weight_on_bridge -= things_on_bridge.front();
        }
        things_on_bridge.pop();
        answer_time++;
    }
    
    return answer_time;
}