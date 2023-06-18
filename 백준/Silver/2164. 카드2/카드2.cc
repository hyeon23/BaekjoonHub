#include <queue>
#include <iostream>
using namespace std;

int main(){
    //1 2 3 ... N
    int N;

    cin >> N;

    queue<int> deck;

    for(int i = 1; i <= N; ++i){
        deck.push(i);
    }

    while(deck.size() != 1){
        deck.pop();
        int temp = deck.front();
        deck.pop();
        deck.push(temp);
    }

    cout << deck.front();
}