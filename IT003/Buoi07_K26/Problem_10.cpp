/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

#define fast_io     ios_base::sync_with_stdio(false)

//###INSERT CODE HERE -

char* strcpy(char *destination, char *source){
	char *pointer = destination;
	while (*source != '\0'){
		*destination = *source;
		destination++;
		source++;
	}
	*destination = '\0';
	return pointer;
}

int strcmp(char *a, char *b){
	while (*a!='\0')
	{
		if (*a != *b)
			break;
		a++;
		b++;
	}
	return* a < *b ? -1 :1;
}

void swap(char *a, char *b){
	char *temp=new char[100];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

void select_sort(char **mang, int n){
	int min_index;
	for (int i = 0; i < n - 1; i++)
	{
		min_index = i;
		for (int j = i + 1; j < n; j++)
			if (strcmp(mang[j],mang[min_index])<0)
				min_index = j;
		swap(mang[min_index], mang[i]);
	}
}

int main(){
	fast_io;cin.tie(0);
	int n;
	cin >> n;
	char **mang = new char*[n];
	fflush(stdin);
	cin.ignore();
	for (int i = 0; i < n; i++){
		mang[i] = new char[100];
		cin.getline(mang[i], 256);
	}
	select_sort(mang, n);
	for (int i = 0; i < n; i++){
		cout << mang[i] << endl;
	}
}
