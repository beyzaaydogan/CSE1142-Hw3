// Author Beyza AYDOĞAN. #150117030  All rights reserved. 2019

#include <stdio.h>
#include <math.h>
#define  ROW 32
#define  COLUMN 63

void printTriangle(int row, int column, char triangle[][COLUMN]);
void createTriangle(int size, int starterRow, int starterCol, char triangle[][COLUMN]);
int getSizeOfTriangle(int k,int totalRows);
void  createTotalTriangle(int size, int starterRow, int starterCol,char triangle[][COLUMN]);

int i,j;

int main(){
	int iterationNum;
	char triangle[ROW][COLUMN]; 
	for(i=0;i<ROW;i++){	// create a two dimensional array with underscores("_")
		for(j=0;j<COLUMN;j++){
			triangle[i][j]='_';
		}

	}
	printf("%s\n","Enter the iteration num: " );
	scanf("%d",&iterationNum);
	if(0<=iterationNum&&iterationNum<5){
	int size = getSizeOfTriangle(iterationNum,ROW);
	createTotalTriangle(size, 0, (COLUMN-1)/2, triangle);
	printTriangle(ROW, COLUMN, triangle);
	}
	else 
		printf("%s\n","Iteration number is wrong.Please enter 0,1,2,3 or 4" );
}


void printTriangle(int row, int column, char triangle[][COLUMN]){	// Prints the two dimensional array
	
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%c",triangle[i][j] );

		}
		printf("\n");
	}
		
	}


void createTriangle(int size, int starterRow, int starterCol,char triangle[][COLUMN]){	//creates a triangle below of a triangle

	for(i=0;i<size;i++){
		for(j=0;j<=i;j++){
			triangle[i+starterRow][starterCol+j]='1';
			triangle[i+starterRow][starterCol-j]='1';
		
		}
			
	}


}

int getSizeOfTriangle(int k,int totalRows){//calculates the size of a triangle with iteration number(k) and total ROW number(totalRows)

	int x = log(totalRows)/log(2);
	int result = x-k;
	return pow(2,result);

}



void  createTotalTriangle(int size, int starterRow, int starterCol,char triangle[][COLUMN] ){ // creates the pattern recursively

	int newRow = starterRow + size;
	int newColLeft = starterCol-size;
	int newColRight = starterCol+size;
	if(newRow<ROW){		
		if(triangle[newRow-1][newColLeft-1]=='_'){
			createTotalTriangle(size,newRow,newColLeft,triangle);
		}
	
		if(triangle[newRow-1][newColRight+1]=='_'){
			createTotalTriangle(size,newRow,newColRight,triangle);
			
		}

	}
	createTriangle(size,starterRow,starterCol,triangle);
}

