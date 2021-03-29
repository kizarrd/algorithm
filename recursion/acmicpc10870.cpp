// Fibonacci number 5
#include <stdio.h>

using namespace std;

int nthFibo(int n){

    if(n==1) return 0;
    else if(n==2) return 1;
    else return nthFibo(n-1)+nthFibo(n-2);

}

int main(){
    int t;
    scanf("%d", &t);

    int a = nthFibo(t+1);

    printf("%d", a);

    return 0;
}