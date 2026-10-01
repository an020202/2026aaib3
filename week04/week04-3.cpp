#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int>a;
	a.push_back(99);
	a.push_back(88);
	a.push_back(77);
	for(int num : a)cout << num << ' ';
		cout << "\n";
}
