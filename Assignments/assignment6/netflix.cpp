/****************************************************************
 ** Program Filename: netflix.cpp
 ** Author: Megan McCormick
 ** Date: 3/15
 ** Description: Takes input from the user and prints back the info.
 ** Input: Movie info
 ** Output: Movie info
 ****************************************************************/
#include<iostream>
#include<string>

using namespace std;

struct netflix{
   string name;
   int stars;
   string *cast;
   string rating;
};

/******************************************************************
 ** Function: create_arry
 ** Description: Creates a dynamic arry
 ** Parameters: int n
 ** Pre-Conditions: None
 ** Post-Conditions: Dynamic array
 *****************************************************************/
string* create_arry(int n){
   string *arry;
   arry = new string[n];
   return arry;

}

/******************************************************************
 ** Function: set_netflix_info() 
 ** Description: Gets info for netflix
 ** Parameters: struct netflix &movie, int &n
 ** Pre-Conditions: empty netflix and n=0
 ** Post-Conditions: netflix with values and n gets value
 *****************************************************************/
void set_netflix_info(netflix & movie, int &n){
   cout << "Please enter the name of the movie."<<endl;
   getline(cin,movie.name);
   movie.stars = 0;
   while(movie.stars<1){
      cout<<"Please enter how many stars the movie has."<<endl;
      cin>>movie.stars;
      if(cin.fail()){
	 cin.clear();
	 cin.ignore();
	 cout<<"Only enter an integer, stop trying to break everything"<<endl;
      }
   }
   while(n<1){
      cout<<"How many cast members are there?"<<endl;
      cin >> n;
      if(cin.fail()){
	 cin.clear();
	 cin.ignore();
	 cout<<"Only enter integers. You need to stop."<<endl;
      }
   }
   movie.cast=create_arry(n);
   cin.ignore();
   for(int i = 0; i < n; i++){
      cout<<"Please enter cast member "<< i+1<<endl;
      getline(cin,movie.cast[i]);
   }
   cout<<"Please enter the rating of the movie."<<endl;
   cin>> movie.rating;
}

/******************************************************************
 ** Function: print_netflix_info()
 ** Description: Prints netflix
 ** Parameters: struct netflix movie, int n
 ** Pre-Conditions: none
 ** Post-Conditions: print netflix info
 *****************************************************************/
void print_netflix_info(netflix movie, int n){
   cout<<"Your movie entry is :"<<endl;
   cout<<"Title: "<<movie.name<<endl;
   cout<<"Stars: "<<movie.stars<<endl;
   cout<<"Cast: ";
   for (int j=0; j<n; j++){
      if(j<n-1){
	 cout<< movie.cast[j]<< ", ";
      }
      else{
	 cout<<movie.cast[j]<<endl;
      }
     
   }
   cout<<"Rating: "<<movie.rating<<endl;
   delete[] movie.cast;
}
int main(){
   
   char answer;
   netflix movie;

   do{
      int n =0;
      set_netflix_info(movie,n);
      print_netflix_info(movie,n);
      cout<<"Would you like to enter a movie (y or n)"<<endl;
      cin>>answer;
      cin.ignore();

   }while(answer =='y');

}




