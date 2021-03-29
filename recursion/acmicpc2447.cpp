// recursive asterisks
#include <stdio.h>

using namespace std;

void asterik(int c, int i, int j){
    if(i%3==1 && j%3==1){
        printf(" ");
    }else if( c==1 ){
        printf("*");
    }else{
        asterik(c-1, i/3, j/3);
    }
    return ;
}

int main(){

    int t;
    scanf("%d", &t);

    int d = t;
    int c = 0;

    while(d!=1){
        d /= 3;
        c++;
    }

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            asterik(c, i, j);
        }
        printf("\n");
    }

    return 0;
}