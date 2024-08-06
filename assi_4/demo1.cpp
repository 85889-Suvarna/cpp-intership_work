/*question 1:
Create a cpp class named as Artist having

ata member 
		name , rating (3 ,4) , country 
member function 
		acceptArtistData()
		printArtistData()
		bool isFamous() --> [if rating is 1/2 then not 	Famous ], [if rating is 3/4 then Famous Artist  ]




Create a cpp class named as painter derived from Artist  class having 
data member 
		string type [decorative, commercial]
		PaintingRate [500 per Painting]
		number of Painting.

member function 
		acceptPainterData()
		printPainterData()
		calcuteTotalIncome()
Ex( M_F_Husain , 2 ,India,  commercial, 50000, 250)




Create a cpp class named as singer derived from Artist  class having 
data member 
		number of album 
		RatePerSong [1000 per song]
member function 
		acceptsingerData()
		printsingerData()
		calcuteTotalIncome()
Ex( Michael Jackson, 4 , American ,  70000, 1350)*/
#include<iostream>
#include<string>
using namespace std;

class Artist{
    public:
    string name;
    string country;
    int rating;

    void acceptArtistData(){
        cout<<" enter the name of the artist: "<<endl;
        cin>> name;
        cout<<" enter the country name:"<<endl;
        cin>>country;
        cout<< "enter the rating :"<<endl;
        cin>>rating;

    }
    void printArtistData(){
        cout<<"name";
        cout<<"country";
        cout<<"rating";

    }
    bool isFamous() 
    {
        if(rating<=2)
        {
             return false;
        }
        else if( rating>=3 && rating< 6)
        {
            return true;
        }
    }
};

int main()
{
    bool Result;

    Artist a1;
    a1.acceptArtistData();
    a1.printArtistData();

    Result = a1.isFamous();
    if(Result == true)
    {
        cout << "Artist is Famous" << endl;
    }
    else
    {
        cout << "Artist is not famous"<<endl;
    }

}







