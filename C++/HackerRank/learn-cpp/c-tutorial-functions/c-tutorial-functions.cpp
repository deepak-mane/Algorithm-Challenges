#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
  /* Compare 4 integer values and outputs the max value */

    if(a >= b && a >= c && a >= d){
        return a;
    }
    else if(b >= a && b >= c && b >= d){
        return b;
    }
    else if(c >= a && c >= b && c >= d){
        return c;
    }
    else if(d >= a && d >= b && d >= c){
        return d;
    }
   return 0;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans;

    return 0;
}
