#include <iostream>
#include <vector>
using namespace std;
void qsort1(vector <int>arr,int left,int right)
{

}
int main()
{
    int n;
    cin >> n;
    vector <int> arr{9,8,6,6,4,5,3,2,1,1};
    qsort1(arr,0,n-1);
    for(auto i:arr)
    {
        cout << i<<" ";
    }
    return 0;
}