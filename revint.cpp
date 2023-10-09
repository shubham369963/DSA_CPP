#include <iostream>
using namespace std;

int main()
{

    int a = 2456;

    int ans = 0;

    while (a > 0)
    {
        int digit = a % 10;

        a = a / 10;

        ans = ans * 10 + digit;
    }

    cout << ans << endl;



    int x = 1;

    for(int i=1; i<=5; i++){
        x = x*3;
    }
    cout<<x<<endl;

    return 0;
}
