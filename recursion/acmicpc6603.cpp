#include <stdio.h>

using namespace std;

// int curr_index, int curr_pos, int num_ps

void germanLottery(int curr_index, int curr_pos, int num_ps, int* array){

    printf("%d", array[curr_index+curr_pos-1]);
    if(curr_index<5){
        printf(" ");
        germanLottery(curr_index+1, curr_pos, num_ps, array);
    } 
    else{
        printf("\n");
        return ;
    }   

    germanLottery(curr_index, curr_pos+1, num_ps, array);

    if(curr_pos == num_ps) return ;
    // for(int j = 0; j< (sizeof(array)/sizeof(int)); j++){
    //     printf("%d ", array[j]);
    // }
}


int main() {

    int k;
    int a;
    int i = 0;
    
    scanf("%d", &k);

    int array[k];

    int t = k;

    while(t--) {
        scanf("%d", &a);
        array[i++] = a;
    }

    germanLottery(0, 1, k-5, array);

    return 0;
}