#include <iostream>

using namespace std;

/* * Basic Rules
 * 1. The auto keyword can’t be used with function parameters
 *
 * int sum(auto x, auto y)
 * {
 *     return x+y;
 * }
 *
 * 2. A Function can return auto type , But avoid it, The Proper return type value makes the code more readable
 *
 * auto sum(int x,int y)
 * {
 *     return x+y;
 * }
 *
 * 3. You can use "Trailing Return Type for a Function which returns an Auto type like below
 *
 * auto sum(int x,int y) ->int
 * {
 *    return x+y;
 * }
 *
 * */


auto sum(int x, int y) -> int
{
    return x+y;
}


int main()
{
    cout<<sum(10,10);
    return 0;
}


