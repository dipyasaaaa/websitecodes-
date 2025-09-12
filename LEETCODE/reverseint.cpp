// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x cause
//the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
// Example 1:
// Input: x = 123
// Output: 321
// Example 2:
// Input: x = -123
// Output: -321
// Example 3:
// Input: x = 120
// Output: 21
// Constraints:
// -231 <= x <= 231 - 1

#include <iostream>
#include <climits>
using namespace std;
class Solution {
public:
    int reverse(long long int x) {
        long long int ld=0;
        long long int revnum=0;
        if(x<0){
            long long int n=abs(x);
            while(n>0){
                ld=n%10;
                revnum=(revnum*10)+ld;
                n=n/10;
            }
            revnum=revnum*-1;
        }
        else{
            while(x>0){
                ld=x%10;
                revnum=(revnum*10)+ld;
                x=x/10;
            }
        }
        if(revnum>INT_MAX or revnum<INT_MIN){
            revnum=0;
            return revnum;
        }
        else{
            return revnum;
        }
        
    }
};
int main(){
    long long int i=0;
    cout<<"Enter integer to be reversed:"<<" ";
    cin>>i;
    Solution obj;
    int result=obj.reverse(i);
    cout<<result;
    return 0;

}
