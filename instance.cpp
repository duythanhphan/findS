/*

@author Zola 'adeebnqo' Mahlaza
@version 1.1
@license http://unlicense.org

*/
#include "instance.hpp"
using namespace mhlzol004;
#include<sstream>
#include<iostream>
instance::instance(std::string line){
	using namespace std;
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
