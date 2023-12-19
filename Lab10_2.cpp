#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
    
    // กรอกโค้ดที่นี่
    cout << "-------------------- BOOM ---------------------" << "\n";
    string textline;
    while(getline(source,textline)){
        dest << textline << "\n";
    }
    cout << "-------------------- HA!! ---------------------";
    
    source.close();
    dest.close();
	return 0;
}
