#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n,m;
    cin >> n >> m;

    

    vector<vector<int> > v(n,vector<int>(m,0));

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> v[i][j];
        }
    }

    if(n==0 || m==0) {
        cout << "NOT POSSIBLE" << endl;
        return 0;
    }

    int count  = 0;
    for(int i=0;i<m;i++) {
        int temp = 0;
        for(int j=0;j<n;j++) {
            temp += s[j][i];
        }

        if(temp>1) {
            count += (temp-1);
        }
    }

    return count;

    cout << count << endl;
    return 0;

}