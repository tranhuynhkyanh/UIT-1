#include <bits/stdc++.h>

using namespace std;

#define MAX 300

void XoaKhoangTrang(char *s){
    //xoa ' '  dau (neu co)
    while(s[0] == ' '){
        for(int i = 0; i < strlen(s); i++) s[i] = s[i + 1];
        s[strlen(s) - 1] = '\0';
    }
    //xoa ' ' thua
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == ' ' && (s[i + 1] == ' ' || s[i + 1] == '.' || (s[i - 1] == '.' && s[i + 1] != ' ')))
            while(s[i] == ' '){
                for(int j = i; j < strlen(s) - 1; j++) s[j] = s[j + 1];
                s[strlen(s) - 1] = '\0';
            }
    }
}

void ThemKhoangTrang(char *s){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '.' && i < strlen(s) - 1){
            for(int j = strlen(s) - 1; j >= i + 1; j--) s[j + 1] = s[j];
            s[i + 1] = ' ';
        }
    }
}

void Chuanhoa(char *s){
    char s2[MAX];
    strcpy(s2, s);
    XoaKhoangTrang(s2);
    ThemKhoangTrang(s2);
    strcpy(s, s2);
}

int main(){
	char s[MAX];
	cin.get(s, MAX);
	char s1[MAX];
	strcpy(s1,s);
    Chuanhoa(s1);
    cout<<s<<endl<<s1<<endl;;
    return 0;
}
