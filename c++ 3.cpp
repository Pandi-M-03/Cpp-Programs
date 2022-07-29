#include<iostream>
using namespace std;

int main()
{
       
	   
	   cout<<"\n"<<"\t"<<"Age Colculation Program "<<"\n";
	   
	   
	   char opt;
	   
	   
	do
	{
	   int birthYear;
	   
	   
	
	   cout<<"\n"<<"1. Enter Your Birth Year (2000 to 2020) : ";
	   cin>>birthYear;
	   
	   switch(birthYear)
	   
	   {
	        case 2000:
			cout<<"\n\tYour Age is 20";
			break;
			case 2001:
			cout<<"\n\tYour Age is 19";
			break;
			case 2002:
			cout<<"\n\tYour Age is 18";
			break;
			case 2003:
			cout<<"\n\tYour Age is 17";
			break;
			case 2004:
			cout<<"\n\tYour Age is 16";
			break;
			case 2005:
			cout<<"\n\tYour Age is 15";
			break;
			case 2006:
			cout<<"\n\tYour Age is 14";
			break;
			case 2007:
			cout<<"\n\tYour Age is 13";
			break;
			case 2008:
			cout<<"\n\tYour Age is 12";
			break;
			case 2009:
			cout<<"\n\tYour Age is 11";
			break;
			case 2010:
			cout<<"\n\tYour Age is 10";
			break;
			case 2011:
			cout<<"\n\tYour Age is 9";
			break;
			case 2012:
			cout<<"\n\tYour Age is 8";
			break;
			case 2013:
			cout<<"\n\tYour Age is 7";
			break;
			case 2014:
			cout<<"\n\tYour Age is 6";
			break;
			case 2015:
			cout<<"\n\tYour Age is 5 ";
			break;
			case 2016:
			cout<<"\n\tYour Age is 4 ";
			break;
			case 2017:
			cout<<"\n\tYour Age is 3 ";
			break;
			case 2018:
			cout<<"\n\tYour Age is 2 ";
			break;
			case 2019:
			cout<<"\n\tYour Age is 1 ";
			break;
			case 2020:
			cout<<"\n\tYour Birth Year ";
			break;
			default:
			cout<<"\n\tinvalid Year  Only 2000  to  2020 ";
			break;
			
			
			
			
			return 0;
				   	   	   
	     }
		 
		 cout<<"\n"<<"\nDo You Want to Continue : ";
		 cin>>opt;

   
   }while(opt=='y' || opt=='Y');
   
     


}


