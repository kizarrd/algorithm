#include<iostream>
#include<string>

using namespace std;

int main(){

    string str = "adksljkl";
    string temp = "";

    for(int i = 0; i<str.size(); i++){
        temp += str[i];
    }

    cout << temp;

    return 0;
}