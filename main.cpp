#include<iostream>
#include<string.h>
#include<vector>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

using namespace std;

int main()
{
	string str;
    while(1)
	{
		cout << "$";
		getline(cin, str);
        if(str == "exit")
		{
			break;
		}
	}
	return 0;
}	
