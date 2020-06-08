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

void quickSort(char **word, int left, int right){
    if (left > right) return;
    char *mid = word[(left+right)/2];
    char temp[right+1];
    int i= left;
    int j = right;
    while(i <= j){
        while((strcmp(word[i], mid) < 0) && (i < right)){
            i++;
        }
        while((strcmp(word[j],mid) > 0) && (j > left)){
            j--;
        }
        if(i <= j){
            strcpy(temp, word[i]);
            strcpy(word[i], word[j]);
            strcpy(word[j], temp);
            i++;
            j--;
        }
    }
    if(left<j) quickSort(word,left,j);
    if(i<right) quickSort(word, i,right);
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
	quickSort(mang, 0, n);
	for (int i = 0; i < n; i++){
		cout << mang[i] << endl;
	}
	return 0;
}
