#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char* argv[]){
	char filename1[256],filename2[256];
	cout<<"����Դ�ļ�����";
	cin>>filename1;
	cout<<"�����Ŀ���ļ�����";
	cin>>filename2;
	ifstream infile(argv[1],ios::in);
	ofstream outfile(argv[2]);
	if(!infile){
		cout<<"���ܴ������ļ���"<<filename1<<'\n';
		return 0; 
	}
	if(!outfile){
		cout<<"���ܴ�Ŀ���ļ���"<<filename2<<'\n';
		return 0; 
	}
	infile.unsetf(ios::skipws);
	char ch;
	while (infile>>ch)
	outfile<<ch;
	infile.close();
	outfile.close();
	return 0;	
} 
