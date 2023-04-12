#include <iostream>
using namespace std;

int staircase3(int n){

    //base case 

    if (n < 0 ){
        return 0;
    }
    if (n == 0)
        return 1;
 
    
    int count = 0;
    count += staircase3(n - 1) + staircase3(n -2 ) + staircase3(n - 3);
    return count;

}

int main() {

    cout << "number of paths =  " << staircase3(5);
    return 0;
}