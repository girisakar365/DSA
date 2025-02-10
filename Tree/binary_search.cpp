#include <iostream>
#include <time.h>

using namespace std;

int binary_search(int *arr, int len, int val){
    int start = 0;
    int end = len;
    int mid;
    while (start <= end){
        mid = start + (end - start) / 2;

        if (val == arr[mid]){
            return mid;
        }
        
        else if(val > arr[mid]){
            start = mid + 1;
        }
        else if(val < arr[mid]){
            end = mid - 1;
        }
    }

    return 0;
}

int main(){
    int arr[9] = {3,4,6,7,8,9,11,12,18};
    int len = sizeof(arr) / sizeof(arr[0]);

    clock_t start,end;

    start = clock();
    cout << binary_search(arr,len,6) << endl;
    end = clock();

    double time_taken = double(end - start) / CLOCKS_PER_SEC ;

    cout << "Time Taken: "  << time_taken << endl;

    return 0;
}
