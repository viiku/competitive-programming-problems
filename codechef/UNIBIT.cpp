#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main(){
    int t,n;cin>>t;while(t--){
            cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i += 1) {
        int x;
        cin >> x;
        mp[x]++;
    }

    map<int, int> freq;
    for (auto itr : mp) {
        freq[itr.second] += 1;
    }

    for (auto itr : freq) {
        if (itr.second == 1) {
            for (auto a : mp) {
                if (a.second == itr.first) {
                    cout << a.first << '\n';
                    break;
                }
            }
        }
    }
    }
    return 0;
}