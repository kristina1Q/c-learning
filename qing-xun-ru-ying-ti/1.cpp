// #include <iostream>
// using namespace std;
// int main()
// {
//     int cards[1010]{};
//     char a[6],b,c;
//     int d;
//     cin >>a>>b>>c;
//     c=',';
//     while(c!=']')
//     {
//         cin>>d>>c;
//         cards[d]++;
//     }
//     for(int i=0;i<1010;i++)
//     {
//         if(cards[i]==1)cout <<i;
//     }
//     return 0;
// }



#include <iostream>
#include <vector>

int solution(std::vector<int> cards) {
    int i;
    int a[1010]{};
    for(i=0;i<cards.size();i++)a[cards[i]]++;
    for(i=0;i<1010;i++)if(a[i]==1)break;
    return i;
}

int main() {
    // Add your test cases here
    
    std::cout << (solution({1, 1, 2, 2, 3, 3, 4, 5, 5})) << std::endl;
    std::cout << (solution({0, 1, 0, 1, 2})) << std::endl;
    
    return 0;
}
