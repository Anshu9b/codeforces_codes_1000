#include <bits/stdc++.h>
 
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned long ul;
 
using namespace std;


 
int main(int argc, char *argv[]) {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[n][3];
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    arr[0][0] = 1;
    if(a[0] == 1 || a[0] == 3) {
        arr[0][1] = 0;
    } else {
        arr[0][1] = 1;
    }
    if(a[0] == 2 || a[0] == 3) {
        arr[0][2] = 0;
    } else {
        arr[0][2] = 1;
    }
    for(int i = 1; i < n; i++) {
        arr[i][0] = min(arr[i-1][0], min(arr[i-1][1], arr[i-1][2])) + 1;
        //cout << "arr[" << i << "][0] = " << arr[i][0] << endl;
        if(a[i] == 1 || a[i] == 3) {
            arr[i][1] = min(arr[i-1][2], min(arr[i-1][0], arr[i-1][1] + 1));
        } else {
            arr[i][1] = min(arr[i-1][0], min(arr[i-1][1], arr[i-1][2])) + 1;
        }
        //cout << "arr[" << i << "][1] = " << arr[i][1] << endl;
        if(a[i] == 2 || a[i] == 3) {
            arr[i][2] = min(arr[i-1][2] + 1, min(arr[i-1][0], arr[i-1][1]));
        } else {
            arr[i][2] = arr[i][0];
        }
        //cout << "arr[" << i << "][2] = " << arr[i][2] << endl;
    }
    int ans = min(arr[n-1][0], min(arr[n-1][1], arr[n-1][2]));
    cout << ans;

    return 0;
}