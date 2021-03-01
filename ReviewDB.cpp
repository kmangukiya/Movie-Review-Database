#include "Review.h"
#include <bits/stdc++.h>
#include<string.h>
#include <ctype.h>
#include "ReviewDB.h"
using namespace std;

ReviewDB::ReviewDB()

{
  Review reviews[50];
  int numReviews=0;
}

ReviewDB::ReviewDB(const ReviewDB &param)
{
    
   
}

ReviewDB::~ReviewDB()
{
    
       
}

int ReviewDB::getTotalReviews()
{
    return numReviews;
}


void ReviewDB::insertReview(Review r)

{
     
     reviews[numReviews] = r;
     numReviews++;
     
     
}
  

void ReviewDB::printRestaurant(string restroName)
{
    
    cout<<"\n\n";
    cout<<"\tREVIEWS FOR "<<(restroName)<<endl;
    cout<<"  -----------------------------------------\n\n";
    for( int i=0; i<numReviews ; i++ )
    {
        if(reviews[i].getrestaurantName() == restroName)
        {
            vector<int>ratings = reviews[i].getcustomerRating();
            cout<<"\n\n";
            string rateing[3] = {"Delivery time", "Food quality", "Overall satisfaction"};
            
            cout<<"\tCustomer name: "<<reviews[i].getreviewerName()<<"\n";
            for (int i=0; i<ratings.size(); i++)
            {
                 cout <<"\t"<<rateing[i]<<" :\t"<<ratings[i]<<"/10" << endl;
            }
        }
        
    }
}
     

void ReviewDB::printCategory(string category)

{
    cout<<"\n\n";
    cout<<"\tREVIEWS FOR "<<(category)<<endl;
    cout<<"  -----------------------------------------\n\n";
    for( int i=0; i<numReviews ; i++ )
    {
        if(reviews[i].getCategory() == category)
        {
            
            vector<int>ratings = reviews[i].getcustomerRating();
            cout<<"\n\n";
            string rateing[3] = {"Delivery time", "Food quality", "Overall satisfaction"};
            
            cout<<"\tCustomer name: "<<reviews[i].getreviewerName()<<"\n";
            cout<<"\tRestaurant name: "<<reviews[i].getrestaurantName()<<"\n";

            for (int i=0; i<ratings.size(); i++)
            {
                 cout <<"\t"<<rateing[i]<<" :\t"<<ratings[i]<<"/10" << endl;
            }
        }
        
    }
}


void ReviewDB::printRecent(int number)
{
    cout<<"\n\n";
    cout<<"\t"<<number<<" MOST RECENT REVIEWS"<<endl;
    cout<<"  -----------------------------------------\n\n";
     for(int i=numReviews-1; i>numReviews-1-number ; i-- )
    {
        
        reviews[i].display();
        
        cout<<"\n\t--------------------------\n";
        
    }
        
}