
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void display();
struct student
{

char f_name[80];
char l_name[80];
char course[80];
int ph_num;
int amount;
char grade[80];
};
student s[180];
int q;
char choice;
void display(){

	
}
void t_reg(){
ofstream out;
out.open("student.txt",ios::out|ios::app);
cout<<"HOW MANY STUDENT_YOU WANT TO REG?"<<endl;
cin>>q;
for(int i=0;i<q;i++){

//cout<<"ENTER YOUR NAME"<<endl;
cout<<"***********************"<<endl;
cout<<"Enter your student first name"<<endl;
cin>>s[i].f_name;
out<<" name:  "<<s[i].f_name<<endl;
cout<<"***********************";
//out<<"student first name"<<s[i].f_name<<endl;
cout<<"***********************"<<endl;;
cout<<"enter your last name"<<endl;
cin>>s[i].l_name;
cout<<"***********************"<<endl;;
out<<"student last name:  "<<s[i].l_name<<endl;
cout<<"***********************"<<endl;
cout<<"enter your ID_num"<<endl;
cin>>s[i].ph_num;
out<<"Student ID_num:   "<<s[i].ph_num<<endl;
cout<<"Grade:"<<"   "<<endl;
cin>>s[i].grade;
out<<"Grade:  "<<s[i].grade<<endl;
}

}
void dis_info()
{

string data;
fstream u;
u.open("student.txt");
if(u.is_open()){
	while(!u.eof()){
		getline(u,data);
		cout<<data<<endl;
	}
	u.close();
}
else cout<<"no file";
}


void view_dis()
{
string mm;
ifstream ww("student.text",ios::in|ios::app);
while(!ww.eof()){
getline(ww,mm);
cout<<mm<<endl;
}
}

void p_developer(){
	char name;
	
cout<<"USER NAME="<<endl;
cin>>name;
void p_developer();
}
int main(){

display();
char e;
do{		
  cout<<endl<<"WHAT DO YOU WANT TO DO???";
		  cout<<endl<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		  cout<<endl<<"@              MENU                      @\n";
		  cout<<endl<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		  cout<<endl<<"@        a.RECORD NEW STUDENT            @\n";
		  cout<<endl<<"@        b.SHOW THE STUDENT LIST          @\n";
		  cout<<endl<<"@        c.UPDATE STUDENT INFORMATION    @\n";
		  cout<<endl<<"@        d.DELETE STUDENT LIST           @\n";
		  cout<<endl<<"@        e.SEARCH FOR STUDENT NNAME      @\n";
		  cout<<endl<<"@        0.EXIT                          @\n";
		  cout<<endl<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout<<"==ENTER YOUR CHOICE=="<<endl;
cin>>e;
switch(e){
case 'a':
	cout<<"please enter password"<<endl;
	int t;
	cin>>t;
	if(t==2312){
	
t_reg();}
else 
cout<<"wrong password"<<endl;
//cout<<"TRY AGAIN";
//goto e;
break;
case 'b':
	cout<<"enter password"<<endl;
	int x;
	cin>>x;
	if(x==2312||x==1212||x==3232){
	
	
dis_info();}
else 
cout<<"wrong password"<<endl;

//goto e;
break;
case 'c':
view_dis();


//goto e;
break;
case 'd':
		cout<<"enter password"<<endl;
	int s;
	cin>>s;
	if(x==2312||x==1212||x==3232){
p_developer();

break;
case 'u':
	cout<<"enter password"<<endl;
	int x;
	cin>>x;
	if(x==2312||x==1212||x==3232){
		
}
else 
cout<<"wrong password"<<endl;	
}
	
default:
	cout<<"Please enter valid choice!\n";
			break;

	}
	cout<<"Do you want to continue?y/n\n";
	 cin>>choice;
} while (choice != 'n' && choice != 'n');


	return 0;
}

