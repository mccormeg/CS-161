#include<iostream>

using namespace std;

#define COLS 3

int** create_board(int rows){
   int **arry;
   arry = new int *[rows];
   for (int k =0;k<rows;k++){
      arry[k] = new int [COLS];
   }
   return arry;
}
void print_board(int **arry, int rows){
   int num=0;
   for (int q=0; q<rows; q++){
      num += 1;
      for (int w = 0; w<COLS; w++){
	 if (w = 0){
	    arry[q][w] = num;
	 }
	 else {
	    arry[q][w] = 0;
	 }
	 cout<<arry[q][w];
      }
      cout<<endl;
   }
}
void move(int disks, int **arry,int to_col){
   for(int i =0; i<rows; i++){
      for(int j = 0; j<COLS; j++){
	 if (arry[i][j]== disks){
	    for (int k=0; k<rows;k++){
		if (arry[k][to_col] != 0){
		   arry[k-1][to_col]= arry[i][j];
		   arry[i][j] =0;
		}
		else {
		  
	    }
	    else if (arry)
	 }
      }
   }
}

void towers(int disks, int arry[][COLS], int from_col, int to_col, int spare){
   if(disks >=1){
      towers(disks-1,arry,from_col,spare,to_col);
	  move(disks,arry,to_col);
	  print_board
   }
}
void move_disk(int disks, int arry[][COLS], int from_col, int to_col, int spare){


int main(){
   int **arry, rows;
   cout<<"Please enter the number of disks you would like to use."<<endl;
   cin >> rows;
    arry = create_board(rows);
    print_board(arry,rows);








}
