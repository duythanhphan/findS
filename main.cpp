/*

@author Zola 'adeebnqo' Mahlaza
@version 1.1
@license http://unlicense.org

*/
#include<iostream>
#include<string>
#include<fstream>
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
		while(!datafile.eof()){
			getline(datafile,line);
			if (!line.empty()){
				cout << line << endl;
			}
		}
	}
	else{
		cout << "too many argurments." << endl;
		return 1;
	}
	return 0;
}
