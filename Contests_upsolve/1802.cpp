// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
 
    for(int t = 0; t < testCases; t++){
        int arraySize;
        cin >> arraySize;
        
        int *arr = new int[arraySize];
        for(int i = 0; i < arraySize; i++){
            cin >> arr[i];
        }
        
        int xorSum = arr[0];
        for(int i = 1; i < arraySize; i++){
            xorSum = xorSum ^ arr[i];
        }
     
        if(arraySize % 2 == 0){ 
            if(xorSum == 0){
                cout << "0" << endl;
            }
            else{
                cout << "-1" << endl;
            }
        }
        else{
            cout << xorSum << endl;
        }
    }
    
    return 0;
}
