#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class Review
{
    public:
        
        // Constructors
        Review();
        Review(string reviwerName, string restaurantName, string Category, float deliveryCost, vector<int> customerating);
        Review(const Review &param);
        ~Review();
        
        
        // Setters
        void setreviewerName(string reviwerName);
        void setrestaurantName(string restaurantName);
        void setCategory(string Category);
        void setdeliveryCost(float deliveryCost);
        void setcustomerRating(vector<int> customerating);
       
        
        // Getters
        string getreviewerName();
        string getrestaurantName();
        string getCategory();
        float getdeliveryCost();
        vector<int> getcustomerRating();
     
     
        //other methods
        
        void display();
        
    private:
    
        string ReviewerName;
        string RestaurantName;
        string Category;
        float DeliveryCost;
        vector<int> CustomerRating;
      
};