#include <bits/stdc++.h>
using namespace std;
vector<pair<char, char>> vec(27);
void preorder(char cur){
    if(cur == '.') return;
    cout << cur;
    preorder(vec[cur-'A'].first);
    preorder(vec[cur-'A'].second);
}
void inorder(char cur){
    if(cur == '.') return;
    inorder(vec[cur-'A'].first);
    cout << cur;
    inorder(vec[cur-'A'].second);
}
void postorder(char cur){
    if(cur == '.') return;
    postorder(vec[cur-'A'].first);
    postorder(vec[cur-'A'].second);
    cout << cur;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N;
    char a, b, c;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> a >> b >> c;
        vec[a - 'A'] = {b, c};
    }
    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');
    return 0;
}