#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int>& a, vector<int>& b) {
    vector<int>arr{};
    return {};
}

int main() {
    vector<int> a1 = {1, 2, 3, 7};
    vector<int> b1 = {2, 5, 7};
    vector<int> res1 = solution(a1, b1);
    cout << (res1 == vector<int>{7, 2}) << endl;

    vector<int> a2 = {1, 4, 8, 10};
    vector<int> b2 = {2, 4, 8, 10};
    vector<int> res2 = solution(a2, b2);
    cout << (res2 == vector<int>{10, 8, 4}) << endl;

    vector<int> a3 = {3, 5, 9};
    vector<int> b3 = {1, 4, 6};
    vector<int> res3 = solution(a3, b3);
    cout << (res3 == vector<int>{}) << endl;

    vector<int> a4 = {1, 2, 3};
    vector<int> b4 = {1, 2, 3};
    vector<int> res4 = solution(a4, b4);
    cout << (res4 == vector<int>{3, 2, 1}) << endl;

    return 0;
}