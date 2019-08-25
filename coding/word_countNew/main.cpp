#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
std::vector<std::string> words; //first vector for user strings
std::vector<std::string>::iterator iter; //iterator for first vector

//structure
struct word_record_t
 {
      std::string word;
      std::vector<std::string>::size_type count;
};

  std::vector<word_record_t> worddata; //second vector to conatin the unqiue data
  std::vector<word_record_t>::iterator it; //iterator for second vector

//ostream Function to cout the word_record_t sturture data
std::ostream& operator<<(std::ostream& os, const word_record_t& rightOp)
{
     os << rightOp.word << ":" << rightOp.count;
     return os;
}

 int main()
{
       std::string token;
       std::cout << "Please enter some text. Press <CTRL><D> to signal EoF: ";
       while (std::cin >> token)
       {
            words.push_back(token);
       }

       sort(words.begin(), words.end());

   //word by word checking and counting of words starts here
  int counter = 1;
  token = words[0];
  for (iter = words.begin() + 1; iter < words.end(); ++iter)
     {
           if (token != *iter)
          {
                //loading the value of word and numbers of time a word appeard to struct
                word_record_t temp;
                temp.count=counter;
                temp.word=token;
                //now pushing back that token and counter back to worddata container
                worddata.push_back(temp);
                counter = 0;
          }
        
         counter++;
         token = *iter;
    }
   
   //iteration throught worddata vector and printing the data on the screan
   std::cout<<"Here are the word counts for each word in your text: "<<std::endl;
   for (it = worddata.begin(); it != worddata.end(); it++)
   {
     std::cout << *it << std::endl;
   }
   return 0;
 }
