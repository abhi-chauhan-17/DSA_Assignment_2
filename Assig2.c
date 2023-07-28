#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

#define MIN_NUM_ASCII 48
#define MAX_NUM_ASCII 57

#define MIN_ALPHA_ASCII 65
#define MAX_ALPHA_ASCII 70

int main(){
    char str[11];		//declare a array which will store characters in the form of string
    bool toss;

    srand(time(NULL));
 	int length = rand() % 8 + 3;	//Generates a random length between 3 to 10
    
    printf("The Randomly Generated Character is: ");
	
	int i;
    for (i=0;i<length;i++)		//loop to store and print random characters in each index of array
    {
	toss = rand() % 2;			//it will choose the number will numerical or alphabet and it is random in each turn
	if(toss==true)
        str[i] = rand() % ((MAX_ALPHA_ASCII - MIN_ALPHA_ASCII) + 1) + MIN_ALPHA_ASCII;		//if toss is true than str store random alphabet from ASCII value 65-70
    else
        str[i] = rand() % ((MAX_NUM_ASCII - MIN_NUM_ASCII) + 1) + MIN_NUM_ASCII;	//if toss is false than str store random numerical from ASCII value 48-57
	
	
    printf("%c", str[i]);			//it will print the the alphanumerical string that is store in str 
	}
}
