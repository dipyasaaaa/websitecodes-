#include <iostream>
using namespace std;
class Solution {
public:
    void whichWeekDay(int day) {
        if(day>7 or day<1){
            cout<<"Invalid";
        }
        else{
            switch(day){
                case 1:
                     cout<<"Monday";
                     break;
                case 2:
                     cout<<"Tuesday";
                     break;
                case 3:
                     cout<<"Wednesday";
                     break;
                case 4:
                     cout<<"Thursday";
                     break;
                case 5:
                     cout<<"Friday";
                     break;
                case 6:
                     cout<<"Saturday";
                     break;
                case 7:
                     cout<<"Sunday";
                     break;
            }
        }

    }
};
int main(){
    Solution obj;
    int n=0;
    cout<<"Enter number of the day(0-7) to know the day:"<<" ";
    cin>>n;
    obj.whichWeekDay(n);
    return 0;
}