#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char** argv)
{
	string info="/*\n *Date: "+string(__DATE__)+"\n *Time: "+__TIME__+"\n *Author: Shriraj P.S. (a.k.a SR13)\n *Description: \n**/\n";
	string headers="\n#include<iostream>\n\nusing namespace std;\n";
	string main="\nint main()\n{\n\n	return 0;\n}\n";
	
	if(argc!=2) {
		cout<<"\nBro.. keep calm and keep coding!!"<<endl;
		return 0;
	}
	ifstream ftst(argv[1]);
	bool fexist=ftst.good();
	ftst.close();
	
	if(!fexist) {
		ofstream fout(argv[1]);
		fout<<info<<headers<<main;
		fout.close();
	}
	else {
		cout<<"\nERROR!! File already exist, can't replace!!"<<endl;
	}	
	
	return 0;
}
