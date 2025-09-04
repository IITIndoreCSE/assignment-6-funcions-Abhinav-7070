#include<iostream>
#include<vector>
#include<climits>
using namespace std;

    int secondLargest(const vector<int>& arr) {
    // TODO: complete the function as per instructions
    if(arr.size() <2){
        return -1 ;    
    }
    int largest = INT_MIN;
    int second = INT_MIN;
   
    for (int i = 0; i < arr.size() ; i++){
        int val= arr[i];
        if(val > largest){
            second = largest;
            largest = val;
        }else if(val > second && val != largest ){
            second = val ;
        }
    }
    if (second == INT_MIN){
        return -1 ;
    }else{
        return second ;
    }
}    

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << secondLargest(arr) << "\n";
    return 0;
}
