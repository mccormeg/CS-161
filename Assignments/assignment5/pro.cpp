/*********************************************************
 **Filename: pro.cpp
 **Author: Megan McCormick
 **Date: 3/4/15
 **Description: Takes rows and columns and creates an array, then prints 
 ** back the matrix, the greatest product, the shape and the starting point.
 ** Will also take in a test file and create an array.
 **Input: rows and columns
 **Output: Matrix, greatest product, starting point, and shape
*********************************************************/
#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;
/**********************************************************
 ** Function: create_array()
 ** Description: Makes an array.
 ** Parameters: rows, col
 ** Pre-Conditions: ints
 ** Post-Conditions: 2-D dynamic array.
***********************************************************/
int** create_array(int rows, int col){

	 int **arry;
	 arry = new int *[rows];
	 for (int k =0; k<rows; k++){
	    arry[k]= new int [col];
	 }
         return arry;
}
/**********************************************************
 ** Function: print_matrix()
 ** Description: Prints matrix
 ** Parameters: **arry, rows, col
 ** Pre-Conditions: pointer, rows, and col
 ** Post-Conditions: a printed array
***********************************************************/
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
/**********************************************************
 ** Function: prod1()
 ** Description: Calculates the greatest product of 4 numbers
 ** in the array. 
 ** Parameters: row,col,&starx,&stary,&type
 ** Pre-Conditions: Array
 ** Post-Conditions: Greatest product
***********************************************************/
int prod1(int **arry,int row, int col,int &starx,int &stary,int &type, int &total){

   //product vertical
   int prod;
   for(int i=0; i<row-3;i++){
      for (int j= 0; j<col; j++){
	prod = arry[i][j]*arry[i+1][j]*arry[i+2][j]*arry[i+3][j];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 1;
	}
	else{
	   total = total;
	}
	
      }
   }
   //product horizontal
   for(int i=0; i<row;i++){
      for (int j= 0; j<col-3; j++){
	prod = arry[i][j]*arry[i][j+1]*arry[i][j+2]*arry[i][j+3];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 2;
	}
	else{
	   total = total;
	}
	
      }
   }
  
   //product diagonal forward
 
   for(int i=0; i<row-3;i++){
      for (int j= 0; j<col-3; j++){
	prod = arry[i][j]*arry[i+1][j+1]*arry[i+2][j+2]*arry[i+3][j+3];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 3;
	}
	else{
	   total = total;
	}
	
      }
   
   }
}
/**********************************************************
 ** Function: prod2()
 ** Description: Calculates the greatest product of 4 numbers
 ** in the array. 
 ** Parameters: row,col,&starx,&stary,&type
 ** Pre-Conditions: Array
 ** Post-Conditions: Greatest product
***********************************************************/
int prod2(int **arry,int row, int col,int &starx,int &stary,int &type, int &total){
   //product diagonal backwards
   int prod;
   for(int j=3; j<col;j++){
      for (int i= 0; i<row-3; i++){
	prod = arry[i][j]*arry[i+1][j-1]*arry[i+2][j-2]*arry[i+3][j-3];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 4;
	}
	else{
	   total = total;
	}
	
      }
   }

  // product square
  
   for(int i=0; i<row-1;i++){
      for (int j= 0; j<col-1; j++){
	prod = arry[i][j]*arry[i+1][j]*arry[i][j+1]*arry[i+1][j+1];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 5;
	}
	else{
	   total = total;
	}
	
      }
   }
   // product L
   for(int i=0; i<row-2;i++){
      for (int j= 0; j<col-1; j++){
	prod = arry[i][j]*arry[i+1][j]*arry[i+2][j]*arry[i+2][j+1];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 6;
	}
	else{
	   total = total;
	}
	
      }
   }
}
 
/**********************************************************
 ** Function: prod3()
 ** Description: Calculates the greatest product of 4 numbers
 ** in the array. 
 ** Parameters: row,col,&starx,&stary,&type
 ** Pre-Conditions: Array
 ** Post-Conditions: Greatest product
***********************************************************/

int prod3(int **arry,int row, int col,int &starx,int &stary,int &type, int &total){
   // product L  fliped up
  int prod;
   for(int i=0; i<row-2;i++){
      for (int j= 0; j<col-1; j++){
	prod = arry[i][j]*arry[i+1][j]*arry[i+2][j]*arry[i][j+1];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 14;
	}
	else{
	   total = total;
	}
	
      }
   }
   // product L turned 180 degrees
   for(int i=0; i<row-2;i++){
      for (int j= 0; j<col-1; j++){
	prod = arry[i][j]*arry[i][j+1]*arry[i+1][j+1]*arry[i+2][j+1];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 15;
	}
	else{
	   total = total;
	}
	
      }
   }

   // product L fliped horazontally and turned 90 degrees clockwise
  
   for(int i=0; i<row-1;i++){
      for (int j= 0; j<col-2; j++){
	prod = arry[i][j]*arry[i+1][j]*arry[i+1][j+1]*arry[i+1][j+2];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 16;
	}
	else{
	   total = total;
	}
	
      }
   }
   // product L fliped vertically and turned 90 degrees clockwise
   for(int i=0; i<row-1;i++){
      for (int j= 0; j<col-2; j++){
	prod = arry[i][j]*arry[i][j+1]*arry[i][j+2]*arry[i+1][j+2];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 17;
	}
	else{
	   total = total;
	}
	
      }
   }
}
  
/**********************************************************
 ** Function: prod4()
 ** Description: Calculates the greatest product of 4 numbers
 ** in the array. 
 ** Parameters: row,col,&starx,&stary,&type
 ** Pre-Conditions: Array
 ** Post-Conditions: Greatest product
***********************************************************/

int prod4(int **arry,int row, int col,int &starx,int &stary,int &type, int &total){
   //Product backwards L
  int prod;
   for(int i=0; i<row-2;i++){
      for (int j= 1; j<col; j++){
	prod = arry[i][j]*arry[i+1][j]*arry[i+2][j]*arry[i+2][j-1];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 7;
	}
	else{
	   total = total;
	}
	
      }
   }
   //Product L 90 degrees clockwise
   for(int i=0; i<row-1;i++){
      for (int j= 0; j<col-2; j++){
	prod = arry[i][j]*arry[i+1][j]*arry[i][j+1]*arry[i][j+2];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 8;
	}
	else{
	   total = total;
	}
	
      }
   }


   //Product L 90 degrees counter-clockwise
  
   for(int i=1; i<row-1;i++){
      for (int j= 0; j<col-2; j++){
	prod = arry[i][j]*arry[i][j+1]*arry[i][j+2]*arry[i-1][j+2];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 9;
	}
	else{
	   total = total;
	}
	
      }
   }
}
 
/**********************************************************
 ** Function: prod5()
 ** Description: Calculates the greatest product of 4 numbers
 ** in the array. 
 ** Parameters: row,col,&starx,&stary,&type
 ** Pre-Conditions: Array
 ** Post-Conditions: Greatest product
***********************************************************/
int prod5(int **arry,int row, int col,int &starx,int &stary,int &type, int &total){
   //Product zig-zag 90 degrees counter-clockwise
   int prod;
   for(int i=0; i<row-1;i++){
      for (int j= 0; j<col-3; j++){
	prod = arry[i][j]*arry[i][j+1]*arry[i+1][j+1]*arry[i+1][j+2];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 10;
	}
	else{
	   total = total;
	}
	
      }
   }


   //Product zig-zag
  
   for(int i=0; i<row-3;i++){
      for (int j= 1; j<col-1; j++){
	prod = arry[i][j]*arry[i+1][j]*arry[i+1][j-1]*arry[i+2][j-1];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 11;
	}
	else{
	   total = total;
	}
	
      }
   }
   //Product backwards zig-zag
   for(int i=0; i<row-3;i++){
      for (int j= 0; j<col-1; j++){
	prod = arry[i][j]*arry[i+1][j]*arry[i+1][j+1]*arry[i+2][j+1];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 12;
	}
	else{
	   total = total;
	}
	
      }
   }
   //Product zig-zag 90 degrees clockwise
   for(int i=0; i<row-1;i++){
      for (int j= 0; j<col-2; j++){
	prod = arry[i][j]*arry[i][j+1]*arry[i+1][j+1]*arry[i+1][j+2];
	if (prod>total){
	   total = prod;
	   starx = i;
	   stary = j;
	   type = 13;
	}
	else{
	   total = total;
	}
      }
   }
}

/**********************************************************
 ** Function: prod()
 ** Description: Calculates the greatest product of 4 numbers
 ** in the array. by calling all the other functions
 ** Parameters: row,col,&starx,&stary,&type
 ** Pre-Conditions: Array
 ** Post-Conditions: Greatest product
***********************************************************/
int prod(int **arry, int rows, int col, int &starx, int &stary, int &type){
   int total=0;
   prod1(arry,rows,col,starx,stary,type,total);
   prod2(arry,rows,col,starx,stary,type,total);
   prod3(arry,rows,col,starx,stary,type,total);
   prod4(arry,rows,col,starx,stary,type,total);
   prod5(arry,rows,col,starx,stary,type,total);
   return total;
}



/**********************************************************
 ** Function: userin()
 ** Description: Gets user input and error checks
 ** Parameters: &row, &col
 ** Pre-Conditions: ints
 ** Post-Conditions: user inputed int
***********************************************************/
void userin(int &rows, int &col){
	while(rows<=1){
	 cout<<"Please enter the number of rows you would like."<<endl;
	 cin>>rows;
	 if(cin.fail()){
	    cin.clear();
	    cin.ignore();
	    cout<<" Only enter and integer, stop trying to break everything."<<endl;
	 }
	}
	while(col<=1){
	 cout<<"Please enter the number of columns you would like."<<endl;
	 cin>>col;
	 if(cin.fail()){
	    cin.clear();
	    cin.ignore();
	    cout<<"Only enter integers. Stop breaking things."<<endl;
	 }
	}
}
/**********************************************************
 ** Function: print_type()
 ** Description: Prints type and starting point of greatest 
 ** product,
 ** Parameters: type
 ** Pre-Conditions: int type
 ** Post-Conditions: Prints type
***********************************************************/
void print_type(int type,int starx,int stary){

	 if (type ==1){
	    cout<<"The type is vertical starting at ("<<starx<<","<<stary<<")"<<endl;
	 }
	 else if (type == 2){
	    cout<<"The type is horazontal starting at ("<<starx<<","<<stary<<")"<<endl;
	 }
	 else if (type == 3){
	    cout<<"The type is diagonal starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 4){
	    cout<<"The type is backwards diagonal starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 5){
	    cout<<"The type is square starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 6){
	    cout<<"The type is L starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 7){
	    cout<<"The type is a backwards L starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 8){
	    cout<<"The type is a L turned 90 degrees clockwise starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 9){
	    cout<<"The type is a L 90 degrees counter-clockwise starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 10){
	    cout<<"The type is a zig-zag 90 degrees counter-clockwise starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type ==11){
	    cout<<"The type is a zig-zag starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 12){
	    cout<<"The type is a backwards zig-zag starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 13){
	    cout<<"The type is a zig-zag turned 90 degrees clockwise starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 14){
	    cout<<"The type is a L flipped vertically  starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 15){
	    cout<<"The type is a L turned 180 degrees clockwise starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 16){
	    cout<<"The type is a L flipped horazontally and turned 90 degrees clockwise starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 else if (type == 17){
	    cout<<"The type is a L flipped vertically and turned 90 degrees clockwise starting at ("<<starx<<","<<stary<<")"<<endl;

	 }
	 
}
int main(int argc,char *argv[]){
   int rows=0, col=0, starx,stary,type,total;
   // Tests if there is an argument in comand line
   if(argc==2){
      //Tests if the argument is test
      if (!strcmp(argv[1], "-test")){
	 int **a;
	 cin >> rows;
	 cin>> col;
	 //Creates and fills array from .txt file
	 a = create_array(rows,col);
	 for (int i=0; i<rows; i++){
	    for(int j=0; j<col;j++){
	       cin>>a[i][j];
	       cout<<a[i][j]<<" ";
	    }
	    cout<<endl;
	 }
	 cout<<"Your greatest product is "<< prod(a,rows,col,starx,stary,type)<<endl;
	 print_type(type,starx,stary);


      }
      else{
	 cout<<"You did not enter -test. Stop trying to break things, try again."<<endl;
      }
   }
      else {
	 //Calling of functions
	 userin(rows,col);
	 cout<<"You entered "<<rows<<" rows"<<endl;
	 cout<<"You entered "<<col<< " columns"<<endl;
	
	 int **arry;
	 arry = create_array(rows,col);
         cout<<"Your matrix is: "<<endl;
	 print_matrix(arry,rows,col);
	 cout<<"Your greatest product is "<<prod(arry,rows,col,starx,stary,type)<<endl;
	 print_type(type,starx,stary);
      }
}



	 
  
