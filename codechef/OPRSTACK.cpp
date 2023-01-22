#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'getTopKBitDistances' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY numbers
 *  2. INTEGER k
 */

void getTopKBitDistances(vector<int> numbers, int k) {
    priority_queue<int>pq;
    for(int i=0;i<(int)numbers.size();i++){
        int count=0;
        vector<int>v;
        int mx=-1;
        while(numbers[i]){
            int r=numbers[i]&1;
            if(r==1){
                v.emplace_back(1);
            }else{
                v.emplace_back(0);
            }
            numbers[i]=numbers[i]/2;    
        }
        int mx=-1
        bool ok=true,ok1=true;
        for(int i=0;i<(int)v.size();i++){
            if(v[i]==1 && ok){
                int first=i+1;
                ok=false;
            }else if(v[i]==1 && !ok && ok1){
                int last=i+1;
                mx=max(mx,last-first+1);
                first=last;
                
            }
        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string numbers_count_temp;
    getline(cin, numbers_count_temp);

    int numbers_count = stoi(ltrim(rtrim(numbers_count_temp)));

    vector<int> numbers(numbers_count);

    for (int i = 0; i < numbers_count; i++) {
        string numbers_item_temp;
        getline(cin, numbers_item_temp);

        int numbers_item = stoi(ltrim(rtrim(numbers_item_temp)));

        numbers[i] = numbers_item;
    }

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    vector<int> result = getTopKBitDistances(numbers, k);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
