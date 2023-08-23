#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, Q, cmd2;
    deque<int> backwebgo;
    int curpage = -1;
    deque<int> forwebgo;
    char cmd1;
    cin >> N >> Q;
    for(int i = 0; i < Q; ++i){
        cin >> cmd1;
        if(cmd1 == 'B'){//뒤로가기
            if(!backwebgo.empty()){
                forwebgo.push_back(curpage);
                curpage = backwebgo.back();
                backwebgo.pop_back();
            }
        }
        else if(cmd1 == 'F'){//앞으로가기
            if(!forwebgo.empty()){
                backwebgo.push_back(curpage);
                curpage = forwebgo.back();
                forwebgo.pop_back();
            }
        }
        else if(cmd1 == 'A'){//i번 웹페이지 접속
            cin >> cmd2;
            if(curpage != -1){
                forwebgo.clear();
                backwebgo.push_back(curpage);
            }
            curpage = cmd2;
        }
        else if(cmd1 == 'C'){//압축 실행
            deque<int> tmp;

            while(backwebgo.size() > 1){
                int b = backwebgo.back();
                backwebgo.pop_back();
                if(b != backwebgo.back()){
                    tmp.push_back(b);
                }
            }

            while(!tmp.empty()){
                backwebgo.push_back(tmp.back());
                tmp.pop_back();
            }
        }
    }

    cout << curpage << '\n';

    if(backwebgo.empty()){
        cout << -1;
    }
    else{
        while(!backwebgo.empty()){
            cout << backwebgo.back() << ' ';
            backwebgo.pop_back();
        }
    }
    cout << '\n';

    if(forwebgo.empty()){
        cout << -1;
    }
    else{
        while(!forwebgo.empty()){
            cout << forwebgo.back() << ' ';
            forwebgo.pop_back();
        }
    }
}