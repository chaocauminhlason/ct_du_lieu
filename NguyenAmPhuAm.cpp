#include <iostream>
#include <string>
using namespace std;

// Hàm kiểm tra xem một ký tự có phải là nguyên âm không
bool isVowel(char c) {
   c = tolower(c);
   return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowels(string s, int index = 0, int vowelCount = 0, int consonantCount = 0) {
   // Base case: Nếu đã duyệt hết chuỗi, so sánh số lượng nguyên âm và phụ âm
   if (index == s.length()) {
       return (vowelCount > consonantCount);
   }

   char currentChar = s[index];

   // Nếu ký tự hiện tại là nguyên âm, tăng biến đếm nguyên âm lên 1
   if (isVowel(currentChar)) {
       vowelCount++;
   }
   // Nếu không, tăng biến đếm phụ âm lên 1
   else {
       consonantCount++;
   }

   // Đệ quy: Kiểm tra ký tự tiếp theo
   return countVowels(s, index + 1, vowelCount, consonantCount);
}

int main() {
   string input;
   cout << "Nhập chuỗi: ";
   getline(cin, input);

   if (countVowels(input)) {
       cout << "Chuỗi có nhiều nguyên âm hơn phụ âm." << endl;
   } else {
       cout << "Chuỗi không có nhiều nguyên âm hơn phụ âm." << endl;
   }

   return 0;
}
