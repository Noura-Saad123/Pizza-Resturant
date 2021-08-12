#include <iostream>
#include <string>
using namespace std;
int main()
{
   float x,quantity=0.0 , price=0.0;
   char thesize;
   string top,another_order,answer;
 do
 {
	 cout <<"please select one of items"<<endl;
	 cout<<"1- SUPER SUPREME - S=50 /M=75.5/ L=100"<<endl;
	 cout<<"2- CHICKEN SUPREME - S=45/ M=73.88/ L=97.99"<<endl;
	 cout<<"3- MARGHERITA - S=35/ M=70/ L=95"<<endl;
	 cout<<"4- CHEESE LOVERS - S=60.96/ M=87.75/ L=113.16"<<endl;
	 cout<<"5- SEA FOOD LOVERS - S= 64.47/ M=94.30/ L=123.25"<<endl;
		cin>>x;
     if(x==1)
     {
         cout<<"you select:"<<" SUPER SUPREME"<<endl;
         cout<<"enter quantity\n";
			cin>>quantity;
         cout<<"enter size\n";
			cin>>thesize;
         if(thesize=='S' || thesize=='s' )
            {
            price += (50*quantity);
		 }
		 else if(thesize=='M' || thesize=='m')
		 {
			price +=(75.5*quantity);
		 }
		 else if(thesize=='L' || thesize=='l')
		 {
			 price +=(100*quantity);
		 }
         cout<<"do you want extra topping?\n";
			cin>>top;
         if(top=="yes")
            {
             cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10)\n";
             cin>>another_order;
             if(another_order=="mushroom")
                price +=(10*quantity);
             else if(another_order=="onion")
                price += (5*quantity);
             else
                price +=(10*quantity);
           }
     }
      if (x==2)
      {
         cout<<"you select:"<<" CHICKEN SUPREME"<<endl;
         cout<<"enter quantity:"<< endl;
         cin>>quantity;
         cout<<"enter your size:"<<endl;
         cin>>thesize;
         if(thesize=='S' || thesize=='s' )
         {
             price+=quantity*45;
         }
         else if(thesize=='M' || thesize=='m' )
         {
            price+=(quantity*73.88);
         }
         else if(thesize=='L' || thesize=='l' )
         {
            price+=(quantity*97.99);
         }
         cout<<"Do you want extra topping?"<< endl;
         cin>>top;
         if(top=="yes")
         {
             cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10) "<<endl;
             cin>>another_order;
             if(another_order=="mushroom")
             {
               price+=(10*quantity);
             }
             else if (another_order=="onion")
            {
               price+=(5*quantity);
            }
            else
            {
              price+=(10*quantity);
            }
         }
      }
      if (x==3)
      {
         cout<<"you select:"<<"MARGHERITA"<<endl;
         cout<<"enter quantity:"<< endl;
         cin>>quantity;
         cout<<"enter your size:"<<endl;
         cin>>thesize;
         if(thesize=='S' || thesize=='s' )
         {
             price+=(quantity*35);
         }
         else if(thesize=='M' || thesize=='m' )
         {
            price+=(quantity*70);
         }
         else if(thesize=='L' || thesize=='l' )
         {
            price+=(quantity*95);
         }
         cout<<"Do you want extra topping?"<< endl;
         cin>>top;
         if(top=="yes")
         {
            cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10) "<<endl;
            cin>>another_order;
            if(another_order=="mushroom")
            {
               price+=(10*quantity);
            }
            else if (another_order=="onion")
            {
               price+=(5*quantity);
            }
            else
            {
              price+=(10*quantity);
            }
         }

      }
      if (x==4)
      {
         cout<<"you select:"<<"CHEESE LOVERS"<<endl;
         cout<<"enter quantity:"<< endl;
         cin>>quantity;
         cout<<"enter your size:"<<endl;
         cin>>thesize;
         if(thesize=='S' || thesize=='s' )
         {
             price+=(quantity*60.96);
         }
         else if(thesize=='M'||thesize=='m')
         {
            price+=(quantity*87.75);
         }
         else if(thesize=='L'||thesize=='l')
         {
            price+=(quantity*113.16);
         }
         cout<<"Do you want extra topping?"<< endl;
         cin>>top;
         if(top=="yes")
         {
            cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10) "<<endl;
            cin>>another_order;
            if(another_order=="mushroom")
            {
               price+=(10*quantity);
            }
            else if (another_order=="onion")
            {
               price+=(5*quantity);
            }
            else
            {
               price+=(10*quantity);
            }
         }
      }
      if (x==5)
      {
         cout<<"you select:"<<"SEA FOOD LOVERS"<<endl;
         cout<<"enter quantity:"<< endl;
         cin>>quantity;
         cout<<"enter your size:"<<endl;
         cin>>thesize;
         if(thesize=='S' || thesize=='s' )
         {
             price+=(quantity*64.47);
         }
         else if(thesize=='M' || thesize=='m' )
         {
            price+=(quantity*94.30);
         }
         else if(thesize=='L' || thesize=='l' )
         {
            price+=(quantity*123.25);
         }
         cout<<"Do you want extra topping?"<< endl;
         cin>>top;
         if(top=="yes")
         {
            cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10) "<<endl;
            cin>>another_order;
            if(another_order=="mushroom")
            {
                price+=(10*quantity);
            }
             else if(another_order=="onion")
              {
                  price+=(5*quantity);
              }
             else
             {
               price+=(10*quantity);
             }
            }
          }
          cout<<"Do you want to select another item?"<<endl;
         cin>>answer;
}
    while(answer=="yes");
	cout<<"thanks for using our application"<<endl;
    cout<<"Total Price ="<<price<<endl;
return 0;
 }
