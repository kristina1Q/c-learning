#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int n, int l, int r, vector<int>& a) {
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(!(a[i]&1)&&l<=a[i]&&r>=a[i])ans++;
    }
    // cout<<ans<<"\n";
    return ans;
}

int main() {
    vector<int> a1 = {1, 2, 6, 8, 7};
    cout << (solution(5, 3, 8, a1) == 2) << endl;

    vector<int> a2 = {12, 15, 18, 9};
    cout << (solution(4, 10, 20, a2) == 2) << endl;

    vector<int> a3 = {2, 4, 6};
    cout << (solution(3, 1, 10, a3) == 3) << endl;
}