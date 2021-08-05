#include<bits/stdc++.h>
using namespace std;

int m(vector<int> v, int s, int e) {

    cout << s << " " << e << endl;
    if(s >= e) 
        return 0;

    int a = max(m(v, s+1, e-1), m(v,s+2, e));
    int b = max(m(v, s+1, e-1), m(v,s, e-2));

    int c = v[s];
    int d = v[e];

    return max(a + c, b + d);
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin >> arr[i];

    cout << m(arr,0,arr.size()-1) << endl;


}