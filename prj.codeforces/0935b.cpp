#include <iostream>
#include <vector>
int main()
{
 long long n = 0;
 std::cin >> n;
 std::string S;
 std::cin >> S;
 int cnt = 0, x = 0, y = 0;
 if (S[0] == 'R') {
  x++;
 }
 else {
  y++;
 }
 char t = 'x';
 for (long long i = 1; i < n; i++) {
  if (S[i] == 'R') {
   x++;
   t = 'x';
  }
  else {
   y++;
   t = 'y';
  }
  if (x == y) {
   int ft_x = 0, ft_y = 0;
   if (i + 1 != n) {
    if (S[i + 1] == 'R') {
     ft_x = x + 1;
    }
    else {
     ft_y = y + 1;
    }
    if (ft_x > x and t=='x') {
     cnt++;
    }
    else if (ft_y > y and t=='y') {
     cnt++;
    }
   }

  }
 }
 std::cout << cnt;
 return 0;
}
