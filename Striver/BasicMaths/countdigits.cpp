// 0 <= n <= 5000
#include <iostream>
using namespace std;
class Solution {
public:
    int ans=0;
    int countDigit(int n) {
        if(n>=1000){
            ans=4;
        }
        else if(n>=100){
            ans=3;
        }
        else if(n>=10){
            ans=2;
        }
        else{
            ans=1;
        }
        return ans;

    }
};
int main(){
    Solution obj;
    int num=0;
    cout<<"Enter number to count the number of digits:"<<" ";
    cin>>num;
    int result=obj.countDigit(num);
    cout<<result;
    return 0;
}
//warna we can do it with the %10 method...and using a for loop try ek baar