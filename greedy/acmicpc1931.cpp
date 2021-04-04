#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Meeting {
    int begin;
    int end;
};

bool compareMeeting(Meeting f, Meeting s) {
    if(f.end == s.end){
        return f.begin < s.begin;
    }else{
        return f.end < s.end; 
    }
}

int main(){

    /*
        get all the meeting info (time begin and end)
        sort meetings by the end time. 
        (meeting with earlier end time should come first)
            if the end time is the same, sort by the begin time
            (meeting with earlier begin time should come first)
        
        for all meetings in the schedule, 
            if next meeting is possible, 
                counter++

        print counter
    */

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    vector<Meeting> schedule(N); // vector with N elements with default value 0.

    for(int i=0; i<N; i++){
        cin >> schedule[i].begin >> schedule[i].end;
    }

    sort(schedule.begin(), schedule.end(), compareMeeting);

    int meeting_max = 0;
    int last_end_time = 0;

    for(int i = 0; i < N; i++){
        if(schedule[i].begin >= last_end_time){
            meeting_max++;
            last_end_time = schedule[i].end;
        }
    }

    cout << meeting_max;

    return 0;
}