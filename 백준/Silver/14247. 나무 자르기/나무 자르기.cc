#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n;
	cin>>n;
    vector<pair<int,ll>> tree(n);

	for(int i=0;i<n;++i) cin>>tree[i].second;
	for(int i=0;i<n;++i) cin>>tree[i].first;
	sort(tree.begin(),tree.end());

	ll yang=0;
	for(int i=0;i<n;++i){
		yang += tree[i].second + tree[i].first * i;
	}
	cout<<yang;
}