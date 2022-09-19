#include <iostream>
#include <vector>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  std::string reverse = "";
  int length = text.size() - 1;                 // y not -1 here?!?!?!?!

  for (int i = length; i > -1; i--){         // or y not -1 here?!?!?!
    reverse += text[i];		    // works here
    }
  if (reverse == text){
    return true;
  }
  else if (reverse != text){
    return false;
  }
}

int main() {

  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";

}