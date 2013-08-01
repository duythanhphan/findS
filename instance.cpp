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
	string token;
	stringstream ss(line);
	while(getline(ss, token, ',')){
		cout << token << endl;
	}
}
