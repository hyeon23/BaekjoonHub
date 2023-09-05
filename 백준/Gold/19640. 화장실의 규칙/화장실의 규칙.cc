#include <bits/stdc++.h>
using namespace std;

struct info{
	int k, l, d, h;
};

struct cmp{
	bool operator()(info a, info b){
		if (a.d == b.d){
			if (a.h == b.h)
				return a.l > b.l;
			return a.h < b.h;
		}	
		return a.d < b.d;
	}
};

int N, K, M, d, h;
queue<info> arr[100000];
int cnt = 0;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> N >> M >> K; // 총인원, 줄, 데카순번

	for (int i = 0; i < N; i++){
		cin >> d >> h;
		arr[i%M].push({ i, i%M, d, h });
	}

	// M개 line별로 한명씩 뽑아서 d desc, h desc, line_number asc 들어감
	// init
	priority_queue<info, vector<info>, cmp> pq;
	for (int i = 0; i < M; i++){
		if (!arr[i].empty()){
			pq.push(arr[i].front());
			arr[i].pop();
		}
	}
	
	while (cnt < N){
		info next = pq.top();
		pq.pop();

		if (next.k == K)
			break;
		else{
			if (!arr[next.l].empty()){
				pq.push(arr[next.l].front()); // 빠진 line 새로 충원
				arr[next.l].pop();
			}
		}
		cnt++;
	}

	cout << cnt;

	return 0;
}