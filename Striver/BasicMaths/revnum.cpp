// Constraints:
// 0 <= n <= 5000
// n will contain no leading zeroes except when it is 0 itself.
#include <iostream>
using namespace std;
class Solution {
public:
    int reverseNumber(int n) {
        int revnum=0, ld=0;
        while(n>0){
            ld= n%10;
            revnum= (revnum*10)+ld;
            n=n/10;
        }
        return revnum;

    }
};
int main(){
    int num=0;
    Solution obj;
    cout<<"Enter number to be reversed(0-5000):"<<" ";
    cin>>num;
    int result=obj.reverseNumber(num);
    cout<<result;
    return 0;
}