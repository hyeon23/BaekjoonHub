#include <iostream>

using namespace std;

int field[100];

int main()
{
  int C, P; // 열, 블록 번호
  int ans = 0;
  cin >> C >> P;
  for (int i = 0; i < C; i++)
  {
    cin >> field[i];
  }

  switch (P)
  {
  case 1:
    // h
    ans += C;
    for (int i = 0; i < C - 3; i++)
    {
      if (field[i] == field[i + 1] && field[i + 1] == field[i + 2] && field[i + 2] == field[i + 3]) ans++; // hhhh
    }
    break;
  case 2:
    for (int i = 0; i < C - 1; i++)
    {
      if (field[i] == field[i + 1]) ans++; // hh
    }
    break;
  case 3:
    for (int i = 0; i < C - 2; i++)
    {
      if (field[i] == field[i + 1] && field[i] + 1 == field[i + 2]) ans++; // h h h+1
    }
    for (int i = 0; i < C - 1; i++)
    {
      if (field[i] - 1 == field[i + 1]) ans++; // h h-1
    }
    break;
  case 4:
    for (int i = 0; i < C - 2; i++)
    {
      if (field[i] - 1 == field[i + 1] && field[i + 1] == field[i + 2]) ans++; // h h-1 h-1
    }
    for (int i = 0; i < C - 1; i++)
    {
      if (field[i] + 1 == field[i + 1]) ans++; // h h+1
    }
    break;
  case 5:
    for (int i = 0; i < C - 2; i++)
    {
      if (field[i] == field[i + 1] && field[i + 1] == field[i + 2]) ans++; // hhh
      if (field[i] - 1 == field[i + 1] && field[i] == field[i + 2]) ans++; // h h-1 h
    }
    for (int i = 0; i < C - 1; i++)
    {
      if (field[i] + 1 == field[i + 1]) ans++; // h h+1
      if (field[i] - 1 == field[i + 1]) ans++; // h h-1
    }
    break;
  case 6:
    for (int i = 0; i < C - 2; i++)
    {
      if (field[i] == field[i + 1] && field[i + 1] == field[i + 2]) ans++; // hhh
      if (field[i] + 1 == field[i + 1] && field[i + 1] == field[i + 2]) ans++; // h h+1 h+1
    }
    for (int i = 0; i < C - 1; i++)
    {
      if (field[i] - 2 == field[i + 1]) ans++; // h h-2
      if (field[i] == field[i + 1]) ans++; // hh
    }
    break;
  case 7:
    for (int i = 0; i < C - 2; i++)
    {
      if (field[i] == field[i + 1] && field[i + 1] == field[i + 2]) ans++; // hhh 
      if (field[i] == field[i + 1] && field[i] - 1 == field[i + 2]) ans++; // h h h-1
    }
    for (int i = 0; i < C - 1; i++)
    {
      if (field[i] == field[i + 1]) ans++;// hh
      if (field[i] + 2 == field[i + 1]) ans++;// h h+2
    }
    break;
  default:
    break;
  }

  cout << ans;
}