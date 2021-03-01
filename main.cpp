/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "Review.h"
#include "ReviewDB.h"
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    ReviewDB db;
    
    int choice =0;
    
    bool stopLoop = false;
    
    while(stopLoop)
    
    {
    
        cout<<"Welcome to Yelp-like Website\n1. Insert customer review\n2. Print reviews by restaurant category\n3. Print reviews by restaurant name\n4. Print most recent reviews\n5. Exit the application\n";
        int choice = 0;
        
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
        {
        
            case 1: {
            
            string name="", restro="", type = "";
            float deliverycost =0.0; 
            vector<int> ratings;
            
            cout<<"Enter name of the reviwer: ";
            cin>>name;
            
            cout<<"\n\nEnter name of the restaurant: ";
            cin>>restro;
            
            cout<<"\n\nEnter restaurant type: ";
            cin>>type;
            
            cout<<"\n\nEnter delivery cost of the restaurant: ";
            cin>>deliverycost;
            
            cout<<"\n\nOut of 1-10 enter your rating for restaurant's delivery: ";
            int temp1=0;
            cin>>temp1;
            ratings.push_back(temp1);
            int temp2=0;
            cout<<"\n\nOut of 1-10 enter your rating for restaurant's food quality: ";
            cin>>temp2;
            ratings.push_back(temp2);
            int overall = (temp1+temp2) /2;
            ratings.push_back(overall); }
            break;
        
            case 2: break;
        
            case 3: break;
            
            case 4: break;
            
            case 5: break;
            
            case 6: break;
        
        }
    }
    // vector<int> ratings;
    // ratings.push_back(10);
    // ratings.push_back(8);
    // ratings.push_back((ratings[0]+ratings[1])/2);
    
    // Review r1("Kinal", "La Huerta", "Mexican", 2.99, ratings);
    // db.insertReview(r1);
    
    // Review r2("Abhi", "La Huerta", "Mexican", 8.99, ratings);
    // db.insertReview(r2);
    
    // Review r3("Banu", "El Matador", "Mexican", 4.99, ratings);
    // db.insertReview(r3);
    
    // Review r4("Abhi", "Dominos", "American", 4.99, ratings);
    // db.insertReview(r4);
    
    // Review r5("Banu", "Pizza hut", "American", 5.99, ratings);
    // db.insertReview(r5);
    
    // Review r6("Abhi", "Gusanos", "Italian", 3.99, ratings);
    // db.insertReview(r6);
    
    // Review r7("Teja", "Renzos", "Italian", 5.99, ratings);
    // db.insertReview(r7);
    
    // Review r8("Bhak", "McDonalds", "Indian", 3.99, ratings);
    // db.insertReview(r8);
    
    // //db.printCategory("Mexican");
    // db.printRecent(2);
    
    
    return 0;
    
    
}
