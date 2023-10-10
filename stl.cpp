#include<iostream>
#include<vector>
#include<unordered_map>
#include<utility>
#include<stack>
using namespace std;


int main(){

    // sort(arr, arr+5);
    // sqrt(5);

    // pow(5,9);

    // swap(arr[0], arr[4]);

    //vector

    // vector<int> v;
    // v.push_back(3);
    // cout<<v.size()<<endl;
    // v.push_back(4);
    // cout<<v.size()<<endl;

    // cout<<v[0]<<" "<<v[1]<<endl;

    // v.pop_back();
    // cout<<v.size()<<endl;

    // cout<<v.at(0)<<endl;
    // v.pop_back();
    // cout<<v.empty()<<endl;

    // unordered_map<string, int> mp;

    // mp["yes"] = 2;
    // mp["no"] = 10;
    // mp["yeah"] = 3;

    // cout<<mp["no"]<<endl;

    // for(auto i: mp){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    // cout<<mp.size()<<endl;

    // pair<int, int> p;

    // p = make_pair(1,5);

    // cout<<p.first<<" "<<p.second<<endl;


    stack<int> s;

    s.push(4);
    s.push(78);

    s.push(2);

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top()<<endl;


    





    return 0;
}