/*

@author Zola 'adeebnqo' Mahlaza
@version 1.1
@license http://unlicense.org

*/
#include "instance.hpp"
using namespace mhlzol004;
#include<sstream>
#include<iostream>
instance::instance(std::string line, int somevalue){
	using namespace std;
	if (somevalue == 1){
		line = "null null null null null null null null";
	}
	stringstream ss(line);
	int i = 0;
	string token;
	while(!ss.eof()){
		ss >> token;
		if (i!=0){
			tokens.push_back(token);	
		}
		else if (i==0){
			++i;
		}
	}
}
instance::instance(instance& smoeinstance){
	std::cout << "instance copied" << std::endl;
}
