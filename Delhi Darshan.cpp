#include<iostream>
using namespace std;
#include<string.h>


void personal_details();
void food_finder();
int p;
void hotel_scheme();

void border()
{

const string greeting = "WELCOME  TO  DELHI DARSHAN!";

const int pad = 1;

const int rows = pad * 2 + 3;
const string::size_type cols = greeting.size() + pad * 2 + 2;

cout <<endl;

int r = 0;

while (r != rows)
{
string::size_type c = 0;

while(c != cols)
{
   if (r == 0 || r == rows -1 || c == 0 || c == cols -1)
   {
            cout << "*";
        }
		else
		{
            if (r == pad + 1 && c == pad + 1)
			{
                cout << greeting;
                c += (greeting.size()-1);
            }
			else
			{
                 cout << " ";
            }
        }

        ++c;
    }
    ++r;
    cout <<endl;
}


}


int main()
{

	border();

cout<<"\nTo plan the best trips in Delhi, this is your go-to place!!\n\n";
char name[100];
int x;
cout<<"Enter your first name: ";
cin>>name;

cout<<"\nHelp us serve you in the best way possible,"<<name<<"!\n\n";
cout<<"Enter your choice\n\n 1-Plan a short  trip to explore Delhi before you hop off to another destination\n\n "
"2-Know more about Delhi\n";
cin>>x;

   if(x==2)
{
	try
	{
	    cout<<"\nDelhi, city and national capital territory, north-central India.\n";
        cout<<"The city of Delhi actually consists of two components:\n";
        cout<<"Old Delhi, in the north, the historic city; and New Delhi, in the south, since 1947 the capital of India\n";
        cout<<"Built in the first part of the 20th century as the capital of British India.\nIn Old Delhi, a neighborhood dating to the 1600s, stands the imposing Mughal-era Red Fort,\n a symbol of India, and the sprawling Jama Masjid mosque, whose courtyard accommodates 25,000 people.\n Nearby is Chandni Chowk, a vibrant bazaar filled with food carts, sweets shops and spice stalls.\n";


    throw 1;
	}

//throwing integer

catch(int x)
	{
	    cout<<"\nThank you for reading! Do consider booking your trip with us!\n";
	}
	exit(0);

}


//if 1 is entered it will help plan your trip

if(x==1)
{


int y;

cout<<"\nEnter number of days: \n\n";
cout<<"1 day\n2 days\n3 days\n";
cin>>y;

if(y==1)
{
    char a[6][100];

//creating array for choices to display

    strcpy( a[1],"Qutub Minar");
    strcpy( a[2],"India Gate");
    strcpy( a[3],"Lotus Temple");
    strcpy(a[4],"Akshardham Temple");
    strcpy( a[5],"Dilli Haat");
    strcpy( a[6],"Connaught Place");

          cout<<"\nChoose places to visit:\n\n";
           cout<<"   MONUMENTS\n\n";

           cout<<"1.Qutub Minar\n";
           cout<<"2.India Gate\n\n";
           cout<<"   RELIGIOUS PLACES\n\n";
           cout<<"3.Lotus Temple\n";
           cout<<"4.Akshardham Temple\n\n";
           cout<<"   MARKETS\n";
           cout<<"5.Dilli Haat\n";
           cout<<"6.Connaught Place\n";

           int z;
           int i;
           char itinery[4][100];
           char ch;
           int count2=0 ;


           i=0;

           //place chosen is copied to another array with final places to visit

           do {

                cout<<"\nEnter choice number:\n";
                cin>>z;
                 strcpy(itinery[i],a[z]);


                 if(i<4)
                 {
                      cout<<"Do u want to continue? Y or N\n";
                        cin>>ch;
                        i++;
                 }

            count2++;

           }

           while((ch=='y'||ch=='Y')&&i<4);
           cout<<"\nYour final itinerary is\n\n";
           int t=11;

		   //displays elements of 'itinerary' array

           for(i=0;i<count2;i++)
           {
               cout<<itinery[i]<<"\t\t"<<t<<"hrs"<<endl;
               t++;
           }

personal_details();

food_finder();

}

//helps plan 3 day trip

if(y==3)
{
    char monuments[9][100];

    strcpy(monuments[0],"Humayun's Tomb");
    strcpy(monuments[1],"Qutub Minar");
    strcpy(monuments[2],"Lajpat Nagar");
    strcpy(monuments[3],"Hauz Khas Village");
    strcpy( monuments[4],"India Gate");
    strcpy( monuments[5],"Lotus Temple");
    strcpy(monuments[6],"Akshardham Temple");
    strcpy( monuments[7],"Dilli Haat");
    strcpy( monuments[8],"Connaught Place");

    char day_1[3][100];
    int y;

   int i=0;
   int n=9;

   int p;
   int j;

   cout<<"Choose places to visit for day 1\n";
        for(i=0;i<9;i++)
        {
            cout<<"\n"<<i+1<<". "<<monuments[i]<<"\n";
        }


            for(i=0;i<3;)
            {
                cout<<"\nEnter choice "<<i+1<<"\n";
                cin>>p;
                cout<<endl;
                strcpy(day_1[i],monuments[p-1]);
                i++;
            }
    int r,s=9;


                for(j=0;j<3;j++)
                {
                    for(i=0;i<s;i++){
                    if(strcmp(day_1[j],monuments[i])==0)
                    {
                        for(r=i;r<s-1;r++)
                        {
                            strcpy(monuments[r],monuments[r+1]);
                        }
                        s--;
                    }


                    }


                }


int q=0;
cout<<"DAY 1 ITINERARY\n\n";

        for(q=0;q<3;q++)
        {
            cout<<day_1[q]<<endl;

        }
        cout<<endl;
        cout<<"\nFor day 2 select places from updated catalogue\n\n";
for(i=0;i<6;i++)
{
    cout<<"\n"<<i+1<<". "<<monuments[i]<<endl;
}
char day_2[3][100];
int z;
cout<<endl;
cout<<endl;

cout<<endl;
cout<<endl;

for(i=0;i<3;i++)
{
    cout<<"Enter choice number\n";
    cout<<endl;
    cout<<endl;
    cin>>z;
    strcpy(day_2[i],monuments[z-1]);

}
cout<<"\nDAY 2 ITINERARY\n\n";
for(i=0;i<3;i++)
{
     cout<<day_2[i];
     cout<<endl;

}
int S = 6;
int R;
                for(j=0;j<3;j++)
                {
                    for(i=0;i<S;i++)
                        {
                    if(strcmp(day_2[j],monuments[i])==0)
                    {
                        for(R=i;R<S-1;R++)
                        {
                            strcpy(monuments[R],monuments[R+1]);
                        }
                        S--;
                    }
                        }
                }
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"DAY 3 ITINERARY\n";
                cout<<endl;

                for(i=0;i<3;i++)
                {

                    cout<<monuments[i];
                    cout<<endl;
                }
                personal_details();

                food_finder();

}

//helps plan 2 day trip

if(y==2)
{
    char monuments[9][100];
    strcpy(monuments[0],"Humayun's Tomb");
    strcpy(monuments[1],"Qutub Minar");
    strcpy(monuments[2],"Lajpat Nagar");
    strcpy(monuments[3],"Hauz Khas Village");
        strcpy( monuments[4],"India Gate");
    strcpy( monuments[5],"Lotus Temple");
    strcpy(monuments[6],"Akshardham Temple");
    strcpy( monuments[7],"Dilli Haat");
    strcpy( monuments[8],"Connaught Place");
    char day_1[3][100];

   int i=0;
   int n=9;

   int p;
   int j;


        for(i=0;i<9;i++)
        {
            cout<<monuments[i]<<i+1<<endl;
        }


            for(i=0;i<3;)
            {
                cout<<"Enter choice "<<"\t"<<i+1<<"\n";
                cin>>p;
                cout<<endl;
                strcpy(day_1[i],monuments[p-1]);
                i++;
            }

    int r,s=9;


                for(j=0;j<3;j++)
                {
                    for(i=0;i<s;i++){
                    if(strcmp(day_1[j],monuments[i])==0)
                    {
                        for(r=i;r<s-1;r++)
                        {
                            strcpy(monuments[r],monuments[r+1]);
                        }
                        s--;
                    }


                    }


                }


int q=0;
cout<<"\nDAY 1 ITINERARY";
cout<<endl;
        for(q=0;q<3;q++)
        {
            cout<<day_1[q]<<endl;

        }
        cout<<endl;
        cout<<"\nFor day 2 select places from updated catalogue\n\n";
for(i=0;i<6;i++)
{
    cout<<monuments[i]<<"\t"<<i+1<<endl;
}
char day_2[3][100];
int z;

cout<<endl;
cout<<endl;

for(i=0;i<3;i++)
{
    cout<<"\nEnter choice number: \n";
    cout<<endl;
    cin>>z;
    strcpy(day_2[i],monuments[z-1]);
}

//displays chosen places to visit on day 2

cout<<"\nDAY 2 ITINERARY\n";
cout<<endl;
for(i=0;i<3;i++)
{
     cout<<day_2[i];
     cout<<endl;
     cout<<endl;
}
personal_details();

food_finder();
}
}
int p;

void hotel_scheme();



  char a[4][100];
  char b[4][100];
  char c[4][100];

  cout<<"\nLet us help you book a hotel for your stay\n\n";
  cout<<"Press 1 for 3 star hotel\n";
  cout<<"Press 2 for 4 star hotel\n";
  cout<<"Press 3 for exotic 5 star hotel\n";

  cin>>p;

  //switchcase for the rating of hotel chosen

  switch(p)
  {
  case 1:

    strcpy(a[0],"Hotel Aerocity");
    strcpy(a[1],"Ajanta Hotel");
    strcpy(a[2],"Lemon Tree Premier");
    strcpy(a[3],"Hotel Kingston");

    int i;

    //options displayed for the rating chosen

    cout<<"\nChoose from our list\n\n";

    for(i=0;i<4;i++)
    {
        cout<<i+1<<". "<<a[i];
        cout<<endl<<endl;
    }
    cout<<"\nChoose number corresponding to the hotel of choice\n";
    int x;
    cin>>x;
    cout<<"\n"<<a[x-1]<<" welcomes you!\n\n";

    break;


  case 2:


        strcpy(b[0],"4 points by Sheraton");
        strcpy(b[1],"Hotel De Pavilion");
        strcpy(b[2],"Radisson Blu");
        strcpy(b[3],"The Royal Plaza");

    int p;

     cout<<"\nChoose from our list\n\n";

    for(p=0;p<4;p++)
    {
        cout<<p+1<<". "<<b[p]<<"\t";
        cout<<endl;
    }

    cout<<"\nChoose number corresponding to the hotel of choice\n";
    int z;
    cin>>z;
    cout<<"\n"<<b[z-1]<<"\n"<<"welcomes you!\n\n";
    break;


    case 3:

    strcpy(c[0],"The Lalit");
    strcpy(c[1],"The Taj Palace");
    strcpy(c[2],"Welcome Hotel-ITC");
    strcpy(c[3],"JW Mariott");

    int s;

     cout<<"\nChoose from our list\n\n";

    for(s=0;s<4;s++)
    {
        cout<<s+1<<". "<<c[s]<<"\t";
        cout<<endl;
    }
    cout<<"\nChoose number corresponding to the hotel of choice\n";
    int h;
    cin>>h;
    cout<<"\n"<<c[h-1]<<" welcomes you\n\n";

    break;

  }

hotel_scheme();

//offering guide facility

cout<<"\n\nDo you want a tour guide?";
cout<<endl;

cout<<"\n(Tour guide services are not included in package.Payment for the same is done separately.)\n";
cout<<endl;

cout<<"Charges are as follows(per day):\n ";
cout<<endl;

cout<<"Rupees 1000 for Hindi and English";
cout<<endl;

cout<<"Rupees 1500 for European languages";
cout<<endl;

cout<<"Rupees 2000 for Asian languages";
cout<<endl;

cout<<"\nIf yes press 1 and if no press 2";
cout<<endl;

int h,l;
cin>>h;

switch(h){
case 1:

    cout<<"\nEnter the preffered language: ";
    cout<<endl;

    cout<<"\nCurrently we are providing guide servecies in English ,Hindi,Asian and European languages!\n";
    cout<<endl;

    cout<<"For Hindi press 1\n";
    cout<<endl;

    cout<<"For English press 2\n";
    cout<<endl;

    cout<<"For a European language press 3\n";
    cout<<endl;

    cout<<"For an Asian language press 4\n";
    cout<<endl;

    cin>>l;

    //switchcase to display guide according to language chosen
    //also calculates cost of guide accordingly

    switch(l)
	{
case 1:

    cout<<"\nYour guide is Suresh Gupta";
    cout<<endl;
    cout<<"His contact number is 1234526378";
    cout<<endl;
    cout<<"\nFor how many days will our be requiring the services of our guide?\n";
    int Z;
    cin>>Z;
    cout<<"\nTour guide expenditure="<<"Rs."<<(1000*Z);
    break;

case 2:

    cout<<"\nYour guide is Ajay Mehta";
    cout<<endl;
    cout<<"His contact number is 123452636548";
    cout<<endl;
    cout<<"\nFor how many days will our be requiring the services of our guide?";
    int Q;
    cin>>Q;
    cout<<"\nTour guide expenditure="<<"Rs."<<(1000*Q);
    break;

    case 3:

    cout<<"\nYour guide is Ritu Sharma ";
    cout<<endl;
    cout<<"Her contact number is 1234434548";
    cout<<endl;
    cout<<"\nFor how many days will our be requiring the services of our guide?";
    int T;
    cin>>T;
    cout<<"\nTour guide expenditure="<<"Rs."<<(1500*T);
    break;

    case 4:

    cout<<"\nYour guide name is Jay Singh";
    cout<<endl;
    cout<<"His contact number is 132336548";
    cout<<endl;
    cout<<"\nFor how many days will our be requiring the services of our guide?";
    cout<<endl;
    int M;
    cin>>M;
    cout<<"\nTour guide expenditure="<<"Rs."<<(2000*M);
    cout<<endl;
    break;
    }


case 2:

	int rt;
    cout<<" \n\nHOPE YOU ENJOY YOUR TRIP!";

    cout<<"\nRate us and help improve our website!";
    cout<<"\nEnter the number of stars you would give us: ";
    cin>>rt;
    cout<<"\nThank you for your "<<rt<<" star rating!";
    cout<<endl;
}
return 0;

}

void personal_details()
{
    int i;
    int p;
    cout<<"\nEnter number of members: \n";
    cin>>p;
    char car[100];

    struct details
    {
        char name[100];
        char age;
        char gender;

    }S[p];

    for(i=0;i<p;i++)
    {
		cout<<"\nEnter details for member "<<i+1<<endl;
     	char car[100];

        cout<<"\nEnter name:\n";
        cin>>S[i].name;

        cout<<"\nEnter age:\n";
        cin>>S[i].age;

        cout<<"\nEnter gender:\n";
        cout<<"M/F/O\n";

        getchar();
        cin>>S[i].gender;

    }

    //if statements to choose car according to number of membes entered

    if(p>=1&&p<=3)
    {
        strcpy(car,"Nissan Micra");
    }
    if(p>=4&&p<=6)
    {
        strcpy(car,"Maruti Suzuki Ertiga");
    }
    if(p>=7)
    {
        strcpy(car,"Mini Bus");
    }
    cout<<"\nOur recommended mode of transport is\n\n";
    cout<<car;
}

void food_finder()
{
	int a;
    char place[100];

    cout<<"\n\nEnter your favourite cuisine\n\n";
    cout<<"1-Punjabi\n2-Chinese\n3-South Indian\n";

    cin>>a;
    switch(a)
    {
    case 1:
        strcpy(place,"Rajinder Da Dhaba");
        break;

    case 2:
        strcpy(place,"Bercos");
        break;
    case 3:
        strcpy(place,"Andhra Bhawan");
        break;
    }
    cout<<"\n\nWoohoo! You just got flat 20% off coupon for lunch at "<<place<<endl;
}

void hotel_scheme()

{

    cout<<"\nChoose from our schemes\n\n";
    int r;
    cout<<"Press 1 for Bed And Breakfast\n";
    cout<<"Press 2 for Bed,Breakfast and Lunch or Dinner\n";
    cout<<"Press 3 for Bed and All meals\n";

    cin>>r;

    switch(r)
    {
      case 1:

          cout<<"\nThis offer includes:\nBreakfast (select menu available)\n2 piece laundry per day\n";
          cout<<"2 bottles water/person/night\n 500 Bonus points!\n\n";


        if(p==1)
        {
            cout<<"Thanks for choosing\n";
            cout<<"The cost for 1 night stay is 7000 Rupees\n";


        }
        if(p==2)
        {
           cout<<"Thanks for choosing\n";
            cout<<"The cost for 1 night stay is 8000 Rupees\n";

        }
        if(p==3)
        {
            cout<<"Thanks for choosing\n";
            cout<<"The cost for 1 night stay is 9000 Rupees\n";

        }

        break;

      case 2:

          cout<<"\nThis offer includes:Breakfast (select menu available)Lunch or dinner (select menu available)\n\n";
    cout<<"2 piece laundry per day\n2 bottles water/person/night,1000 Bonus points\n";

        if(p==1)
        {
            cout<<"Thanks for choosing\n";
            cout<<"The cost for 1 night stay is 8500 Rupees\n";

        }

        if(p==2)
        {
           cout<<"Thanks for choosing\n";
            cout<<"The cost for 1 night stay is 9000 Rupees\n";
        }

        if(p==3)

        {
            cout<<"\nThanks for choosing\n";
            cout<<"The cost for 1 night stay is  9500 Rupees\n";
        }
        break;

        case 3:

            cout<<"\nThis offer includes:Breakfast (select menu available)Lunch (select menu available) Bonus points=";
            cout<<"1500\n";
            cout<<"\n2 piece laundry per day\n2 bottles water/person/night\n";
            cout<<"Dinner (select menu available)";

        if(p==1)
        {
            cout<<"Thank you for booking\n";
            cout<<"The cost for 1 night stay is 10,000 Rupees\n";

        }

        if(p==2)
        {
           cout<<"Thank you for booking!\n";
            cout<<"The cost for 1 night stay is 11,000 Rupees\n";
        }

        if(p==3)
        {
            cout<<"Thank you for booking!\n";
            cout<<"The cost for 1 night stay is  12,000 Rupees\n";
        }

    break;

    }

}
