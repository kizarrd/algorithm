#include <iostream>

//거스름돈 문제

using namespace std;

void countTheCoin(int* count, int* exchange, int denomination){

    int quotient = (*exchange)/denomination;
    *count +=  quotient;
    *exchange -= denomination*quotient;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // get the input ( amount of money you need to pay )
    // calculate the exchange money ( 1000 - input )
    // divide it by each coin amount to get the quotient
    // add them all and print it

    int n;
    cin >> n;

    int exchange = 1000 - n;
    int count = 0;

    countTheCoin(&count, &exchange, 500);
    countTheCoin(&count, &exchange, 100);
    countTheCoin(&count, &exchange, 50);
    countTheCoin(&count, &exchange, 10);
    countTheCoin(&count, &exchange, 5);
    countTheCoin(&count, &exchange, 1);

    cout << count;

    return 0;
}