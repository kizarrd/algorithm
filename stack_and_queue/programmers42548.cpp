//주식가격 문제
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size());
    vector<pair<int, int>> record; // < price at the time, that time >
    
    for( int i=0; i<prices.size(); i++ ){
        if(!record.empty() && prices[i] < record.back().first){
            while(!record.empty() && prices[i] < record.back().first){
                answer[record.back().second] = i-record.back().second;
                record.pop_back();
            }
        }
        record.push_back({ prices[i], i });
    }
        
    while(!record.empty()){
        answer[record.back().second] = prices.size()-1-record.back().second;
        record.pop_back();
    }
    
    return answer;
}

int main(){

    vector<int> prices = {1,  2, 3, 2, 3};

    vector<int> copy = solution(prices);

    for(int i = 0; i < copy.size(); i++){
        cout << copy[i] << ' ';
    }    

}