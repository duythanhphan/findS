/*

@author Zola 'adeebnqo' Mahlaza
@version 1.1
@license http://unlicense.org

*/
#ifndef _instance
#define _instance
#include<string>
namespace mhlzol004{
	class instance{
		public:
			instance(std::string line);
			instance(instance& someotherinstance);
			~instance();
	};
}
#endif
