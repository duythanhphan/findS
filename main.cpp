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
		
		cout << "\t===Problem One===" << endl;
		//setting the positive and negative identifier
		instance::_positive = std::string("Yes");
		instance::_negative = std::string("No");
		//general hypothesis
		instance gen_hypothesis(std::string("random text"),1);

		while(!datafile.eof()){
			getline(datafile,line);
			if (!line.empty()){
				cout << "instance: "<< line << endl;
				instance in(line,0);
				specialize(gen_hypothesis, in);
				cout << "hypothesis: " << gen_hypothesis << endl;
				cout << endl;
			}
		}
		
		cout << "\t===Problem Two===" << endl;
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
	for (int i=0; i<size-1 ; ++i){
		somestream << someinstance.tokens[i] << " ";
	}
	somestream << ">";
}
void specialize(instance& gen_hypothesis, instance& someinstance){
	int size = someinstance.size();
	if (someinstance[6].compare(instance::_positive)== 0){
		for (int i=0; i<size-1; ++i){
			if (gen_hypothesis[i].compare(std::string("null")) == 0){
				gen_hypothesis[i] = someinstance[i];
			}
			else if ((someinstance[i].compare(std::string("?"))==0) || (someinstance[i].compare(gen_hypothesis[i]) != 0)){
				gen_hypothesis[i] = std::string("?");
			}
		}
	}
}
