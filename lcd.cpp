#include<iostream>
#define ROWS 7
#define COLS 4
#define SPACE ' '
#define HORIZONTAL '-'
#define VERTICAL '|'
using namespace std;

void clear_array(char digit[ROWS][COLS]);
void print_array(char digit[ROWS][COLS]);
void print_top(char digit[ROWS][COLS]);
void print_bottom(char digit[ROWS][COLS]);
void print_middle(char digit[ROWS][COLS]);
void print_top_left(char digit[ROWS][COLS]);
void print_top_right(char digit[ROWS][COLS]);
void print_bottom_left(char digit[ROWS][COLS]);
void print_bottom_right(char digit[ROWS][COLS]);

int main(){
   
	char digit[ROWS][COLS];
	clear_array(digit);
	print_top(digit);
	print_bottom(digit);
	print_middle(digit);
	print_top_left(digit);
	print_top_right(digit);
	print_bottom_left(digit);
	print_bottom_right(digit);
	print_array(digit);


}

void print_top(char digit[ROWS][COLS]){
    int row =0;

	 for(int j=1;j < COLS-1; j++){
			digit[row][j] = HORIZONTAL;
	 }
}

void print_top_left(char digit[ROWS][COLS]){
    int col =0;
	 int middle = ROWS/2;

	 for(int j=1;j < middle; j++){
			digit[j][col] = VERTICAL;
	 }
}

void print_top_right(char digit[ROWS][COLS]){
    int col =COLS-1;
	 int middle = ROWS/2;

	 for(int j=1;j < middle; j++){
			digit[j][col] = VERTICAL;
	 }
}

void print_bottom_left(char digit[ROWS][COLS]){
    int col =0;
	 int middle = ROWS/2;

	 for(int j=middle+1;j < ROWS -1; j++){
			digit[j][col] = VERTICAL;
	 }
}

void print_bottom_right(char digit[ROWS][COLS]){
    int col =COLS-1;
	 int middle = ROWS/2;

	 for(int j=middle+1;j < ROWS -1; j++){
			digit[j][col] = VERTICAL;
	 }
}

void print_bottom(char digit[ROWS][COLS]){
    int row =ROWS-1;

	 for(int j=1;j < COLS-1; j++){
			digit[row][j] = HORIZONTAL;
	 }
}

void print_middle(char digit[ROWS][COLS]){
    int row = ROWS/2 ;

	 for(int j=1;j < COLS-1; j++){
			digit[row][j] = HORIZONTAL;
	 }
}

void clear_array(char digit[ROWS][COLS]){
     
	  for(int i=0 ; i < ROWS; i++)
	  	for(int j=0 ; j < COLS; j++)
			digit[i][j] = SPACE;
}

void print_array(char digit[ROWS][COLS]){

     cout << "Printing digitstart" << endl << endl;
	  for(int i=0 ; i < ROWS; i++){

	  	for(int j=0 ; j < COLS; j++){
		  cout << digit[i][j];
		}
		cout << std::endl;

	  }
	  cout << endl;
     cout << "Printing digit-end" << endl;
}
