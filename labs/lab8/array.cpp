#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;

int** create_array(int rows, int col){

	 int **arry;
	 arry = new int *[rows];
	 for (int k =0; k<rows; k++){
	    arry[k]= new int [col];
	 }
         return arry;
}
void print_matrix(int **arry,int rows, int col){

	 int num;
	 srand(time(NULL));
	 for (int q = 0; q< rows; q++){
	    for(int w = 0; w< col; w++){
	       num = rand()%50+1;
	       arry[q][w] = num;
	       if (arry[q][w] <= 9){
		  cout<<"0"<<arry[q][w]<< " ";
	       }
	       else{
		  cout<<arry[q][w]<< " ";
	       }

	    }
	    cout<<endl;
	 }
}
int main(int argc,char *argv[]){
   int rows, col;
   for (int i = 0; i < argc; i++){
      if (!strcmp(argv[i], "-test")){


      }
      else {
	 cout<<"Please enter the number of rows you would like."<<endl;
	 cin>>rows;
	 cout<<"Please enter the number of columns you would like."<<endl;
	 cin>>col;
	 cout<<"You entered "<<rows<<" rows"<<endl;
	 cout<<"You entered "<<col<< " columns"<<endl;
	
	 int **arry;
	 arry = create_array(rows,col);
         cout<<"Your matrix is: "<<endl;
	 print_matrix(arry,rows,col);
      }
   }
}


	 
  
