#include<bits/stdc++.h>
using namespace std;

bool comp(string a, string b) {

    for(int i =0;i<min(a.size(), b.size());i++) {
        if(a[i] < b[i])
            return false;
        if(a[i] > b[i])
            return true;
    }

    if(a.size() < b.size())
        return true;

    return false;
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++)   
        cin >> arr[i];
    

    vector<string> s;

    for(int i=0;i<n;i++)   
        s.push_back(to_string(arr[i]));

    sort(s.begin(), s.end(), comp);

    for(int i=0;i<n;i++)   
        cout << s[i] << ", ";
    
    


}