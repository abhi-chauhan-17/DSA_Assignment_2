#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SCALING_FACTOR 8
#define SHIFTING_VALUE 3

char* generate_random_alphanumeric_string() {
    int length = rand() % SCALING_FACTOR + SHIFTING_VALUE; // Generates a random length between 3 to 10
    char characters[] = "0123456789ABCDEF";	//Create a array of character 1-9 & A-F
    int characters_length = sizeof(characters) - 1;	//stores character_length for Scaling_factor for giving random characters
    
    char* random_string = (char*)malloc((length + 1) * sizeof(char));	//Create Memory space for random_string size of length+1 for characters
    int i;
    for (i = 0; i < length; i++) {					//loop to store random characters in different index of array random_string 
        random_string[i] = characters[rand() % characters_length];	//this function will store random Characters from array characters for scaling_factor character_length
    }
    
    random_string[length] = '\0'; // Null-terminate the string
    
    return random_string;	//returning a random string
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    char* random_alphanumeric_string;	//declare a character pointer random_alphanumeric_string 
    random_alphanumeric_string = generate_random_alphanumeric_string();		//calling of function generate_random_alphanumeric_string
    printf("Random Alphanumeric String: %s\n", random_alphanumeric_string);		//printing the random string by random_alphanumeric_string

    free(random_alphanumeric_string); // Free the allocated memory

    return 0;
}
