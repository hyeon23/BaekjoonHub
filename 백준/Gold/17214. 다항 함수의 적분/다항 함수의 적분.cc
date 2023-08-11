#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	string s; //수식
	string check; //문자열에 있는 숫자를 각 계수와 상수로 구분하는 변수
	int coef = 0; //계수
	int order = 0; //차수
	int stop = 0; //x가 발견된 곳
	int k = 0; //일차항
 
	cin >> s;
 
	//일차식인지 검사하는 곳
	for (unsigned int i = 0; i < s.size(); i++) {
		if (s[i] == 'x') { //x가 있으면
			order = 1; //차수는 1차
			stop = i; //x가 발견된 곳
			break; //탈출
		}
	}
 
	if (order == 0) { //0차식이면
		coef = stoi(s); //입력한 문자열이 계수가 된다.
		if (coef == 0) { //계수가 0이면 
			cout << "W"; //상수항 출력
		}
		else if (abs(coef) == 1) { //입력한 수의 절댓값이 1이면
			if (coef == 1) { //양수 1이면
				cout << "x+W"; //1을 무시하고 그냥 출력
			}
			else if (coef == -1) { //음수 1이면
				cout << "-x+W"; //1을 무시하고 -기호 붙인채 출력
			}
		}
		else { //입력한 수의 절댓값 1이 아니면
			cout << coef << "x+W"; //계수를 붙인채로 출력
		}
	}
	else if (order == 1) { //일차식이면
		//계수를 구하기 위해 x가 발견된 바로 앞까지 숫자를 얻는다. 
		for (unsigned int i = 0; i < stop; i++) { 
			check = check + s[i];
		}
		coef = stoi(check) / 2; //적분을 하면 일차항의 계수는 절반으로 나뉘어져 이차항의 계수가 된다.
		check.clear(); //상수를 구하기 위해 초기화
 
		//상수를 구하기 위해 x가 발견된 바로 뒤부터 맨 마지막까지 숫자를 얻는다.
		for (unsigned int i = stop + 1; i < s.size(); i++) {
			check = check + s[i];
		}
 
		if (check == "") { //아무런 상수항도 입력되지 않았으면
			check = "0"; //check를 0으로 초기화
		}
 
		k = stoi(check); //문자열로된 일차항을 정수로 바꾼다.
 
		if (abs(coef) == 1) { //이차항 계수의 절댓값이 1이면
			if (coef == 1) { //양수 1인 경우
				cout << "xx"; //"xx"출력
			}
			else if (coef == -1) { //음수 1인 경우
				cout << "-xx"; //"-xx"출력
			}
		}
		else { //이차항의 절댓값이 1이 아닌 경우
			cout << coef << "xx"; //계수를 붙인 채로 출력
		}
 
		if (k != 0) { //일차항이 존재하는 경우
			if (abs(k) == 1) { //일차항의 절댓값이 1인경우
				if (k == 1) { //양수 1인 경우
					cout << "+x+W"; //+를 붙인채로 일차항과 상수항을 출력
				}
				else if (k == -1) { //음수 1인 경우
					cout << "-x+W"; //-를 붙인채로 일차항과 상수항을 출력
				}
			}
			else if (k > 0) { //일차항의 절댓값이 1이 아니면서 양수인 경우
				cout << "+" << k << "x+W"; //+기호를 출력하고 일차항의 계수를 출력하고 일차항과 상수항을 출력
			}
			else if (k < 0) { //일차항의 절댓값이 1이 아니면서 음수인 경우
				cout << k << "x+W"; //일차항의 계수를 출력하고 일차항과 상수항을 출력
			}
		}
		else { //일차항이 존재하지 않는 경우
			cout << "+W"; //상수항만 출력
		}
	}
}