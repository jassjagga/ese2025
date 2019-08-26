#include<iostream>
#include<map>
#include<iterator>
#include<string>
#include<vector>
#include<fstream>
//struct
struct word_rec_t
{
	int letter_count;
    bool takis_found;
    std::string word;
	};
 
 //iterator
std::map<std::string, word_rec_t>::iterator iter;
 
 //function to define cout to print word_rec_t(struct) according to us
std::ostream& operator<<(std::ostream& os, const word_rec_t& rightOp)
{
	os << "Total Letters: -" << rightOp.letter_count << std::endl;
    os << "Word Takis Found: -" << rightOp.takis_found << std::endl;
    os << "word: - " << rightOp.word << std::endl;
	return os;\
	}

// using Sub-string this function will find the word takis in word and return 0 or 1 if found word
bool wordcheck(std::string swords)
{
	int sub_string = swords.find("takis");
    if (sub_string < 1)
             return false;
    else
              return true;
			  }
			  
int main()
{
	std::map<std::string, word_rec_t> myMap;
    std::string words;
    //accessing the dictonary file to load word into map
    std::fstream myfile;
    myfile.open("words.txt");
	if (myfile.is_open())
		{
			while (getline(myfile, words))
				{
					//struct instantiation to load unique data about word
					word_rec_t rec;
                    rec.letter_count = words.size();
                    rec.takis_found = wordcheck(words);
                    rec.word = words;
					//pushing back that data to map key and value
                    myMap.insert(std::pair<std::string, word_rec_t>(words, rec));
					}
		}
		
		//if file is not at define loaction that we want to open
	else
	{
		std::cerr<<"No such File under this name found Please provide path to the file"<<std::endl;
		return 1;
	}
	
		
		//user word search part
		std::string search;
        std::cout << "Type the word you want to search: - ";
        std::cin >> search;
        iter = myMap.find(search); //map search using find by key

        //to check if key exit or not if exit print the value
        if (iter != myMap.end())
			{
				std::cout << iter->first << " - " << iter->second << std::endl;
         }
		 else
			 {
				 std::cout << "No such word Found" << std::endl;
				 }
		
	    myfile.close();
		std::cin.get();
	
}