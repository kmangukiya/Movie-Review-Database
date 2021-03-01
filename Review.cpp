#include "Review.h"
#include <bits/stdc++.h>
#include<string.h>
using namespace std;
Review::Review()

{
    string ReviewerName="";
    string RestaurantName="";
    string Category="";
    float DeliveryCost=0;
    vector<int> CustomerRating;

   
}

Review::Review(string reviewerName, string restaurantName, string category, float deliveryCost, vector<int> customerating)
{
    
    ReviewerName = reviewerName;
    RestaurantName = restaurantName;
    Category = category;
    DeliveryCost = deliveryCost;
    CustomerRating=customerating;
    
}

Review::Review(const Review &param)
{
    ReviewerName = param.ReviewerName;
    RestaurantName = param.RestaurantName;
    Category = param.Category;
    DeliveryCost = param.DeliveryCost;
    CustomerRating = param.CustomerRating;
 
}

Review::~Review()
{

}


void Review::setreviewerName(string reviewerName)
{
    ReviewerName = reviewerName;
}

void Review::setrestaurantName(string restaurantName)
{
    RestaurantName=restaurantName;
}

void Review::setCategory(string Category)
{
    Category=Category;
}

void Review::setdeliveryCost(float deliveryCost)
{
    DeliveryCost=deliveryCost;
}

void Review::setcustomerRating(vector<int>customerating)
{
     CustomerRating=customerating;
}

string Review::getreviewerName()
{
    return ReviewerName;
}

string Review::getrestaurantName()
{

    return RestaurantName;
}
        
string Review::getCategory()
{
    return Category;
}

float Review::getdeliveryCost()
{
    return DeliveryCost;
}

vector<int> Review::getcustomerRating()
{
    return CustomerRating;
}

void Review::display()
{
    cout<<"\n\n\tCustomer Name:  "<<ReviewerName<<endl;
        cout<<"\tRestaurant Name:  "<<RestaurantName<<endl;
        cout<<"\tCategory:  "<<Category<<endl;
        cout<<"\tDelivery Cost:  $"<<DeliveryCost<<endl;
        cout<<"\n\n\tCustomer Reviews\n\n";
        string rateing[3] = {"Delivery time", "Food quality", "Overall satisfaction"};
        

         for (int i=0; i<CustomerRating.size(); i++)
         {
                 cout <<"\t"<<rateing[i]<<" :\t"<<CustomerRating[i]<<"/10" << endl;
         }
}
