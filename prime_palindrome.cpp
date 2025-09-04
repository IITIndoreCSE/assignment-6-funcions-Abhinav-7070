#include <iostream>
using namespace std;

bool isPrime(int n) {
    // TODO: complete the function as per instructions
    if(n<2){
        return false;
    }
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(int i=3; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool isPalindrome(int n) {
    // TODO: complete the function as per instructions
    int rev=0;
    int dup =n;
    while(dup>0){
        rev=rev*10 + dup%10;
        dup=dup/10;
    }
    if(rev == n){
        return true;
    }else{
        return false;
    }

}

bool primePalindrome(int n) {
    // TODO: complete the function as per instructions
    if(isPalindrome(n) && isPrime(n)){
        return true;
    }else{
        return false;
    }
}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}



