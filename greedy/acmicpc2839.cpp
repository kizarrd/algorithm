#include <iostream>

using namespace std;


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q5, r5, q3, r3;

    cin >> n;

    q5 = n/5;
    r5 = n%5;
    q3 = r5/3;
    r3 = r5%3;

    for(int i = 0; i < 4; i++){
        if(r3 == 0){
            break;
        }else{
            if(q5 > 0){
                q5-=1;
                r5+=5;
            }else{
                break;
            }
            q3=r5/3;
            r3=r5%3;
        }
    }

    if(r3!=0){
        cout << -1;
    }else{
        cout << q5+q3;
    }


    return 0;
}