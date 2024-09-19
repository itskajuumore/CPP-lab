Q1:
#include<iostream>
#include<fstream>
using namespace std;
class Bank 
{
private:
string str, Record;

public:
void addRecord(){
cout<<"\nEnter Bank Record ";
getline(cin, Record);

ofstream obj;
obj.open(Record+".txt",ios::app);
cout<<"\nEnter data ";
while(true){
getline(cin,str);
if(str=="exit"){
break;
}
obj<<str<<endl;
}
cout<<"\nRecord named "<<Record <<" Record Created successfully! ";
obj.close();
}

void showRecord(){
ifstream in;
in.open(Record+".txt");
while(getline(in,str)){
cout<<"\n"<<str;

}
in.close();
}

void DeleteRecord(){
if(remove((Record+".txt").c_str())==0)
cout<<"\nFile deleted sucessfully !";
else{
cout<<"\nNot deleted ";
}
}

};
int main(){
Bank b;
b.addRecord();
b.showRecord();
b.DeleteRecord();
return 0;

}