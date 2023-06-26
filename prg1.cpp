#include<iostream>
#include<string>

using namespace std;

class msg{
	
	
	private:
		char name[20];
		
	public:
		
		msg(char a[]){
			
			strcpy(name, a);
			
		}
		void print(){
			cout<<"your namep";
		}
		void pirnt(char lastname[]){
			cout<<name<<""<<lastname<<endl;
		}
			
};
int main(){
	
	msg obj("harshit");
	
	obj.print();
	obj.print("lathiya");
	
	return 0;
}
