
#include"netflix.h"

using namespace std;



void set_netflix_info(netflix &movie){
   cout<< "Please enter the name of the movie."<<endl;
   getline(cin,movie.name);
   cout<<"Please enter the ratin of the movie."<<endl;
   cin>> movie.rating;
   
}

void print_netflix_info(netflix movie){
   cout<<"Your movie is: "<<movie.name<<endl;
   cout<<"The rating of this movie is: "<<movie.rating<<endl;
}

