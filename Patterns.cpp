#include<iostream>
#include<conio.h>
using namespace std;
void pattern1(int x){
    for (int i = 0 ; i < x ; i++ ){
        for(int j = 0 ; j <= i ; j++){
            cout<<"*";
        }
    cout<<"\n";
    }
}

void pattern8(int x){
    for(int i = x ; i >0 ; i--){
        for(int j = 0 ; j < x-i; j++){
            cout<<" ";
        }
        for(int k = 0 ; k < 2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern9(int n){
    for(int i {0} ; i < n ; i++){
        for(size_t j {0} ; j < n-i-1 ; j++){
            cout<<" ";
        }
        for(int k = 0 ; k < 2*i+1 ; k++){
            cout<<"*";
        }

        cout<<endl;
    }
        for(int i = n ; i >0 ; i--){
        for(int j = 0 ; j < n-i; j++){
            cout<<" ";
        }
        for(int k = 0 ; k < 2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    int start;
    for(int i = 0 ; i < n ; i++){
    start = 1 ;
    if(i%2 != 0) start = 0;
    for(int j = 0 ; j <= i ; j++){
        cout<<start;
        start = 1 - start;
    }
        cout<<endl;
    }
}
void pattern12(int n){
    int spaces = 2*n-2;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++ ){
            cout<<j;
        }
        for(int k = 0 ; k < spaces ; k++){
            cout<<" ";
        }


        for(int j = i ; j > 0  ; j-- ){
            cout<<j;
        }
        spaces -= 2;
        cout<<endl;
    }
}
void pattern13(int n){
    int x = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <=i ; j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }
        //alphabets
        char ch = 'A';
        int break_point = (2*i-1)/2;
        for(int k = 0 ; k < 2*i+1 ; k++){
            cout<<ch;
            if(k<= break_point) ch++;
            else ch--;
        }
        for(int j = 0 ; j <= n-i-1 ; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n){
   char ch1 = 'E';
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j <= i ; j++){
            char ch2 = ch1 + j;
            cout<<ch2<<" ";
        }
        ch1--;
        cout<<"\n";
    }
}
void pattern19(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= n-i-1 ; j++){
            cout<<"*";
        }
        for(int k = 0 ; k < 2*i ; k++){
            cout<<" ";
        }
        for(int j = 0 ; j <= n-i-1 ; j++){
            cout<<"*";
        }
        cout<<endl;
}
        for(int i = 5 ; i > 0 ; i-- ){
        for(int j = 0 ; j <= n-i ; j++){
            cout<<"*";
        }
        for(int k = 0 ; k < 2*i-2;  k++){
            cout<<" ";
        }
        for(int j = 0 ; j <= n-i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern20(int n){
            for(int i = 5 ; i > 0 ; i-- ){
        for(int j = 0 ; j <= n-i ; j++){
            cout<<"*";
        }
        for(int k = 0 ; k < 2*i-2;  k++){
            cout<<" ";
        }
        for(int j = 0 ; j <= n-i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= n-i-1 ; j++){
            cout<<"*";
        }
        for(int k = 0 ; k < 2*i ; k++){
            cout<<" ";
        }
        for(int j = 0 ; j <= n-i-1 ; j++){
            cout<<"*";
        }
        cout<<endl;
}

}

void pattern21(int n){
    for(int i = 0 ; i < n ; i++){
        for( int j = 0 ; j < n ; j++){
           if(i == 0 || j == 0 || i== n-1 || j == n-1){
            cout<<"*";
           }
           else cout<<" ";
        }
        cout<<endl;
    }
}
void pattern22(int n){
    for(int i=0 ; i < 2*n - 1 ; i++){
        for(int j= 0 ; j < 2*n - 1 ; j++){
            int top = i;
            int right = (2*n - 2) - j;
            int bottom = (2*n-2)-i;
            int left = j;
            int distance  = n - min(min(left,right),min(top,bottom));
            cout<<distance;
        }
        cout<<endl;
    }
}
void pattern23 (int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j= 0 ; j < n ; j++){
            if(i == j){
                cout<<"=";
            }
            else cout<<"0";
        }
        cout<<endl;
    }
}
int main(){
    int x = 4;
    pattern22(x);
    getch();
}

