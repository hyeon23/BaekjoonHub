#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	set<int> card;
	int N; 
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		card.insert(num);
	}
	int M; 
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;
		if (card.find(num) != card.end()) cout << "1 ";
		else cout << "0 ";
	}
	return 0;
}