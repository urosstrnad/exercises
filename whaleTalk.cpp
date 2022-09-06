#include <iostream>
#include <string>
#include <vector>

int main () {

  char retry;
  std::string sentence;
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  std::vector<char> result;

  do {
    
    sentence = "";
    result.clear();
    std::cout << "Type in the sentence to translate.\nSentence: ";
    //za vpis celotnega stavka s presledki...
    std::cin.ignore();                    
    getline(std::cin, sentence);
 
    for (int i = 0; i < sentence.size(); i++) {

      for (int j = 0; j < vowels.size(); j++) {
        
        if (sentence[i] == vowels[j] ) {
          
          if (vowels[j] == 'u' || vowels[j] == 'U' ||vowels[j] == 'e' ||vowels[j] == 'E') {

            result.push_back(vowels[j]);
            result.push_back(vowels[j]);

          } else {

            result.push_back(vowels[j]);

          }        
        }   
      }
    }

    for (int i = 0; i < result.size(); i++) std::cout << result[i];

    std::cout << "\n\nDo you wish to translate another sentence? y/n ";
    std::cin >> retry;
    std::cout << std::endl;


  } while (retry == 'y' || retry == 'Y');

}
