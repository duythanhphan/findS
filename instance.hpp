/*

@author Zola 'adeebnqo' Mahlaza
@version 1.1
@license http://unlicense.org

*/
#ifndef _instance
#define _instance
#include<string>
#include<vector>
namespace mhlzol004{
	class instance{
		public:
			instance(std::string line, int somevalue);
			instance(instance& someotherinstance);
			std::vector<std::string> tokens;
			std::string& operator[](int i){
				return tokens[i];
			}
			bool operator!=(instance& someotherinstance){
				//used only my specific case -- does not work as you'd expect, it disregards
				//last item in someotherinstance
				int size = someotherinstance.size();
				for (int i=0; i<size-1; ++i){
					if (tokens[i].compare(someotherinstance[i]) != 0){
						return true;
					}
				}
				return false;
			}
			int size();
			static std::string _positive;
			static std::string _negative;
	};
}
#endif
