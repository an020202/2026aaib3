#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>a; ///c++伸縮自如的陣列的宣告
    a.push_back(99);
    a.push_back(88);
    a.push_back(77);
    for (int i =0;i<a.size();i++)cout << a[i] << " " ;
    cout << "\n" ;

    a.push_back(88);
    a.push_back(77);
    for (int i =0;i<a.size();i++)cout << a[i] << " " ;
    cout << "\n";
}
