#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void)
{
    char *result = NULL;
    int avgtemp=0;
    int counter=0;
    int newtemp=0;
char CityName[25]={""};
    FILE *fr;
    fr = fopen("part3.txt", "r");
    if (fr == NULL) {
	printf("I couldn't open the file! \n");
	exit(0);
    }
    char buffer[150];
    while (fgets(buffer, 150, fr)!= NULL)
    {
	printf("Temperature: ");
	result = strtok(buffer, " ");
	newtemp = atoi(result);
	avgtemp=avgtemp+newtemp;
	printf("%s\n", result);
	printf("City Name :");
	result = strtok(NULL, ",");
	printf("%s\n", result);
	CityName[counter]=*result;
	printf("Place :");
	result = strtok(NULL, ",");
	printf("%s\n", result);
	counter++;
    }
    fclose(fr);
    printf(" \n");
    printf("AverageTemp: %d \n",(avgtemp/counter));
    printf("City Name: %s",CityName[0]);
    return 0;
}
