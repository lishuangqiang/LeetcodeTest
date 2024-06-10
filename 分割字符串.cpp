#include <sstream>
#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> getWords(const std::string &paragraph)
{
  std::vector<std::string> words;
  std::istringstream iss(paragraph);
  std::string word;

  while (iss >> word)
  {
    words.push_back(word);
  }

  return words;
}

int main()
{
  std::string paragraph = "This is a sample paragraph.";
  std::vector<std::string> words = getWords(paragraph);

  for (const std::string &word : words)
  {
    std::cout << word << std::endl;
  }

  return 0;
}