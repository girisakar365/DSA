#include <iostream>
#include <time.h>

using namespace std;

int linear_search(int *arr, int val){
    int len = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; arr[i] != len; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

int main(){

    clock_t start,end;
    

    int arr[10] = {7,4,12,3,6,9,18,8,11};

    start = clock();
    cout << linear_search(arr,8) << endl;
    end = clock();

    double time_taken = double(end - start) / CLOCKS_PER_SEC ;

    cout << "Time Taken: "  << time_taken << endl;

}