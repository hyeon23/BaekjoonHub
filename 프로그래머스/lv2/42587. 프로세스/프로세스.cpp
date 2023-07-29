#include <deque>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    //before
    //[A, B, C, D]
    //[2, 1, 3, 2]
    //after
    //[3, 2, 2, 1]
    //[2, 3, 0, 1]
    
    // [2, 3, 0, 1]
    // [3, 2, 2, 1]
    
    deque<int> pq;
    deque<int> idx;
    
    for(int i = 0; i < priorities.size(); ++i){
        pq.push_back(priorities[i]);
        idx.push_back(i);
    }
    
    vector<int> ansvec;
    vector<int> idxvec;
    
    while(!pq.empty()){
        int top = pq.front();
        int topidx = idx.front();
        if(top != *max_element(pq.begin(), pq.end())){
            pq.push_back(top);
            idx.push_back(topidx);
        }
        else{
            ansvec.push_back(top);
            idxvec.push_back(topidx);
        }
        pq.pop_front();
        idx.pop_front();
    }
    
    for(auto i : idx){
        cout << i << ' ';
    }
    
    //[C, D, E, F, A, B]
    
    return find(idxvec.begin(), idxvec.end(), location) - idxvec.begin() + 1;
}