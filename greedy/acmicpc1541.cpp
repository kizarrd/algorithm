#include <iostream>
#include <string>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;


    bool once_minus = 0;
    int result = 0; 
    string temp = "";

    for(int i=0; i <= str.size(); i++){ // i < str.size()를 해버리면 마지막에 '\0'경우를 포함하지 않게됨.  

        if(str[i]=='+' || str[i]=='-'|| str[i]=='\0'){
            if(once_minus){
                result -= stoi(temp);
            }else{
                result += stoi(temp);
            }
            temp = "";
            if(str[i]=='-'){
                once_minus = true;
            }
        }else{
            temp += str[i]; // 이게 되네;
        }

    }    
    
    cout << result;

    return 0;
}