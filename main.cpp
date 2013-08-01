/*

@author Zola 'adeebnqo' Mahlaza
@version 1.1
@license http://unlicense.org

*/
#include<iostream>
#include<string>
#include<fstream>
#include "instance.hpp"
#include<ostream>
using namespace mhlzol004;
std::ostream& operator<<(std::ostream& somestream, instance& someinstance);
void specialize(instance& gen_hypothesis, instance& someinstance);
int main(int argc, char** argv){
	
	using namespace std;
	if (argc<2){
		cout << "Missing filename." << endl;
		return 1;
	}
	else if(argc==2){
		string filename =  *(++argv);
		ifstream datafile(filename.c_str());
		string line;

		//general hypothesis
		instance gen_hypothesis(std::string("random text"),1);
		cout << gen_hypothesis << endl;		

		while(!datafile.eof()){
			getline(datafile,line);
			if (!line.empty()){
				cout << "line: "<< line << endl;
				instance in(line,0);
				specialize(gen_hypothesis, in);
				cout << "hypothesis: " << gen_hypothesis << endl;
			}
		}
	}
	else{
		cout << "too many argurments." << endl;
		return 1;
	}
	return 0;
}
std::ostream& operator<<(std::ostream& somestream, instance& someinstance){
	int size = someinstance.tokens.size();
	somestream << "<" ;
	for (int i=0; i<size ; ++i){
		somestream << someinstance.tokens[i] << " ";
	}
	somestream << ">";
}
void specialize(instance& gen_hypothesis, instance& someinstance){
	instance tmp(std::string("other random text"), 1);
	for (int i=0; i<7; ++i){
		if (gen_hypothesis[i].compare(std::string("?")) == 0){
			std::cout << "smethig matters" << std::endl;	
		}
		if (gen_hypothesis[i].compare(std::string("null")) == 0){
			gen_hypothesis[i] = someinstance[i];
			std::cout << "something is null" << std::endl;
			std::cout << gen_hypothesis << std::endl;
		}
	}
}
