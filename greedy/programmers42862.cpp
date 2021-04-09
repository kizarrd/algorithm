//체육복 문제

#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    vector<int> uniform_count(n, 1); // initialize n vector elements with default value 1
    
    for(int i=0; i<reserve.size(); i++){ // same as ==> for(int i : reserve) uniform_count[i-1] += 1;
        uniform_count[reserve[i]-1]+=1;
    }
    for(int i=0; i<lost.size(); i++){
        uniform_count[lost[i]-1]-=1;
    }
    
    int counter=0; // # of students who can take the class
    
    for(int i=0; i<n; i++){
        if(uniform_count[i]>0){
            counter++;
        }else if(uniform_count[i]==0){
            if(i!=n-1 && uniform_count[i+1]==2){ // handle the last student case
                uniform_count[i+1]-=1;
                uniform_count[i]+=1;
                counter++;
            }else if(i && uniform_count[i-1]==2){ // handle the first student case
                uniform_count[i-1]-=1;
                uniform_count[i]+=1;
                counter++;
            }
        }
    }
    
    answer = counter;
    
    return answer;
}