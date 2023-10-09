#include <iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans = ans*a;
    }
    return ans;
}
int main()
{

    int x,y;
    cin>>x>>y;

    int ans = power(x,y);
    cout<<ans<<endl;

    return 0;
}
