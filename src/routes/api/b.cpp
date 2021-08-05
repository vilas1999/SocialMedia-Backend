#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int mx = arr[0];
    for(int i=0;i<n;i++)
       mx = max(mx, arr[i]);

    vector<vector<char> > g;

    int sign = 1, index = 0;

    //Find the peak

    for(int i=0;i<n;i++) {
        
    }





    for(int i=0;i<n;i++) {

        char dir;
        dir = sign == 1 ? '/' : '\\';
        cout << "Printing dir" << dir << endl;

        for(int j=0;j<arr[i];j++) {
            vector<char> temp(mx+3,'-');
            temp[index] = dir;
            index += sign;    
            for(int k=temp.size()-1;k>=0;k--) {
                cout << temp[k] << endl;
            }
            cout << "Ended" << endl;
            g.push_back(temp);
        }
        


        sign = -sign;
        index += sign;

    }
    cout << "Reached here" << endl;
    cout << g.size() << "->" << g[0].size() << endl;

    for(int i=g[0].size()-1;i>=0;i--) {
        for(int j=0;j<g.size();j++) {
            cout << g[j][i];
        }
        cout << endl;
    }

}