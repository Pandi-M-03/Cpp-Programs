#include <iostream>
#include <string>


int main(){

     
	 
	 std::string name;
	 int age;
	 int t;
	 int e;
	 int m;
	 
     std::cout<<"\n Enter Your name         : ";
	 std::cin>>name;
	 
	 std::cout<<"\n Enter Your Age          : ";
	 std::cin>>age;

     std::cout<<"\n Enter Your Tamil Mark   : ";
	 std::cin>>t;
	 
	 std::cout<<"\n Enter Your English Mark : ";
	 std::cin>>e;
	 
	 std::cout<<"\n Enter Your Maths Mark   : ";
	 std::cin>>m; 
	 
	 
	 
	 
	 std::cout<<"\n"<<"\t"<<"Your Name is "<<name<<" Your Age is "<<age<<"\n";
	 std::cout<<"\n"<<" Tamil Mark   : "<<t;
	 std::cout<<"\n"<<" English Mark : "<<e;
	 std::cout<<"\n"<<" Maths Mark   : "<<m;
	 std::cout<<"\n"<<" Total        : "<<t + e + m<<"\n";
	 
	 return 0;
	 
	 
}

