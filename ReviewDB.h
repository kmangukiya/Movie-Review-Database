#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class ReviewDB
{
  
  public:
  
  //costructors
  
  ReviewDB();
  ReviewDB( const ReviewDB &copy);
  ~ReviewDB();
  
  //getters and setters
  
  int getTotalReviews();
  
  
  // other methods
  
  
   void insertReview(Review r);
   void printRestaurant(string restroName);
   void printCategory(string category);
   void printRecent(int number);
  
  
  
  
  private:
  
  Review reviews[50];
  int numReviews=0;
  

    
    
};