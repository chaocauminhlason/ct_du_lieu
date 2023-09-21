/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
   // Loại bỏ khoảng trắng và chuyển đổi thành chữ thường
   for (int i = 0; i < s.length(); i++) {
       if (isalpha(s[i])) {
           s[i] = tolower(s[i]);
       }
       else {
           s.erase(i, 1);
           i--;
       }
   }

   // Base case: Nếu chiều dài chuỗi là 0 hoặc 1, nó là palindrome
   if (s.length() <= 1) {
       return true;
   }

   // So sánh ký tự đầu và cuối của chuỗi
   if (s[0] != s[s.length() - 1]) {
       return false;
   }

   // Đệ quy: Kiểm tra chuỗi con giữa ký tự đầu và cuối
   return isPalindrome(s.substr(1, s.length() - 2));
}

int main() {
   string input;
   cout << "Nhập chuỗi: ";
   getline(cin, input);

   if (isPalindrome(input)) {
       cout << "Chuỗi là chuỗi palindrome." << endl;
   } else {
       cout << "Chuỗi không phải là chuỗi palindrome." << endl;
   }

   return 0;
}
