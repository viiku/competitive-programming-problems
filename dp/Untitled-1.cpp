#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main() {
    int num;
    int carry = 0;
    cin >> num;
    vector <int> vec(200, 0);
    vec[0] = 1; //Initial product = 1

    int k = 0; //Current size of the number stored in arr

    for(int i = 1; i <= num; i++) {
        for(int j = 0;j <= k; j++) {
            vec[j] = vec[j] * i + carry;
            carry = vec[j] / 10;
            vec[j] = vec[j] % 10;
        }
        while(carry) { //Propogate the remaining carry to higher order digits
            k++;
            arr[k] = carry % 10;
            carry /= 10;
        }   
    }
    for(int i = k; i >= 0; i--) {
        cout << vec[i];
    }
    cout << endl;
    return 0;
}