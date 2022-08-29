#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'quartiles' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int comp(vector<int> arr){
    int q2;
    if (arr.size() & 1) q2 = arr[arr.size()/2];
    else q2 = (arr[arr.size()/2 - 1] + arr[arr.size()/2])/2;
    return q2;
}

vector<int> quartiles(vector<int> arr) {
    int q2 = comp(arr);
    
    vector<int> ans, arr1, arr2;
    
    for (int i = 0; i<arr.size()/2; i++){
        arr1.push_back(arr[i]);
    }
    for (int i = ((arr.size()&1)?arr.size()/2+1:arr.size()/2); i<arr.size(); i++){
       arr2.push_back(arr[i]); 
    }
    int q1 = comp(arr1), q3 = comp(arr2);
    
    ans.push_back(q1);
    ans.push_back(q2);
    ans.push_back(q3);
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string data_temp_temp;
    getline(cin, data_temp_temp);

    vector<string> data_temp = split(rtrim(data_temp_temp));

    vector<int> data(n);

    for (int i = 0; i < n; i++) {
        int data_item = stoi(data_temp[i]);

        data[i] = data_item;
    }
    sort(data.begin(), data.end());
    vector<int> res = quartiles(data);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
