#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int p_p=0,p_b=0,p_c=0,p_i=0,p_s=0;
	int s_p=0,s_b=0,s_c=0,s_i=0,s_s=0;
	int p=0,b=0,c=0,i=0;c=0;
	int choice,q,s;
	cout<<"\n\t\tPurchase Items ";
	cout<<"\n\n Number of Pizza : ";
	cin>>p_p;
	cout<<"\n\n Number of Burger : ";
	cin>>p_b;
	cout<<"\n\n Number of Sandwich : ";
	cin>>p_s;
	cout<<"\n\n Number of Cake : ";
	cin>>p_c;
	cout<<"\n\n Number of Icecream : ";
	cin>>p_i;
	p:
	system("cls");
	cout<<"\n\t\t\t Control Panel";
	cout<<"\n 1. Pizza";
	cout<<"\n 2. Burger";
	cout<<"\n 3. Sandwich";
	cout<<"\n 4. Ice Cream";
	cout<<"\n 5. Cake";
	cout<<"\n 6. Details";
	cout<<"\n 7. Exit";
	cout<<"\n\nEnter your Choice : ";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"\n\n Enter Pizza Quantity :";
			cin>>q;
			if(p_p-s_p >= q)
			{
				s_p += q; 
				p += q*1000;
				cout<<"\n\n\n\t\t\t"<<q<<" Pizza Sales Thank You!!";
			}
			else 
			cout<<"\n\n\n\t\t\t Sorry "<<p_p-s_p<<" Pizza Remaining in Restaurent...";
			break;
		case 2:
			cout<<"\n\n Enter Burger Quantity :";
			cin>>q;
			if(p_b-s_b >= q)
			{
				s_b += q; 
				b += q*300;
				cout<<"\n\n\n\t\t\t"<<q<<" Burger Sales Thank You!!";
			}
			else 
			cout<<"\n\n\n\t\t\t Sorry "<<p_b-s_b<<" Burger Remaining in Restaurent...";
			
			break;
		case 3:
			cout<<"\n\n Enter Sandwich Quantity :";
			cin>>q;
			if(p_s-s_s >= q)
			{
				s_s += q; 
				s =+ q*400;
				cout<<"\n\n\n\t\t\t" <<q<<" Sandwich Sales Thank You!!";
			}
			else 
			cout<<"\n\n\n\t\t\t Sorry "<<p_s-s_s<<" Sandwich Remaining in Restaurent...";
			break;
		case 4:
			cout<<"\n\n Enter Icecream Quantity :";
			cin>>q;
			if(p_i-s_i >= q)
			{
				s_i += q; 
				i += q*200;
				cout<<"\n\n\n\t\t\t"<<q<<" Icecream Sales Thank You!!";
			}
			else 
			cout<<"\n\n\n\t\t\t Sorry "<<p_i-s_i<<" Icecream Remaining in Restaurent...";
			break;
		case 5:
			cout<<"\n\n Enter Cake Quantity :";
			cin>>q;
			if(p_c-s_c >= q)
			{
				s_c += q; 
				c += q*900;
				cout<<"\n\n\n\t\t\t"<<q<<" Cake Sales Thank You!!";
			}
			else 
			cout<<"\n\n\n\t\t\t Sorry "<<p_c-s_c<<" Cake Remaining in Restaurent...";
			break;
		case 6:
			system("cls");
			cout<<"\n\t\t\tDetails Panel";
			cout<<"\n\n Purchase Pizza Quantity : "<<p_p;
			cout<<"\n\n Sales Pizza Quantity : "<<s_p;
			cout<<"\n\n Remaining Pizza Quantity : "<<p_p-s_p;
			cout<<"\n\n Total Pizza Price in a day : "<<p;
			cout<<"\n\n Purchase Burher Quantity : "<<p_b;
			cout<<"\n\n Sales Burger Quantity : "<<s_b;
			cout<<"\n\n Remaining Burger Quantity : "<<p_b-s_b;
			cout<<"\n\n Total Burger Price in a day : "<<b;
			cout<<"\n\n Purchase Sandwich Quantity : "<<p_s;
			cout<<"\n\n Sales Sandwich Quantity : "<<s_s;
			cout<<"\n\n Remaining Sandwiich Quantity : "<<p_s-s_s;
			cout<<"\n\n Total Sandwich Price in a day : "<<s;
			cout<<"\n\n Purchase Ice cream Quantity : "<<p_i;
			cout<<"\n\n Sales Ice cream Quantity : "<<s_i;
			cout<<"\n\n Remaining Ice cream Quantity : "<<p_i-s_i;
			cout<<"\n\n Total Ice cream Price in a day : "<<i;
			cout<<"\n\n Purchase Cake Quantity : "<<p_c;
			cout<<"\n\n Sales Cake Quantity : "<<s_c;
			cout<<"\n\n Remaining Cake Quantity : "<<p_c-s_c;
			cout<<"\n\n Total Cake Price in a day : "<<c;
			cout<<"\n\nTotal Day Price : "<<p+b+s+i+c;
			break;
		case 7:
			exit(0);
		default:
			cout<<"\n\nInvalid value...Please try again";		
	}
	getch();
	goto p;
	}
