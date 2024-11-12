#include <bits/stdc++.h>
using namespace std;

void p1(int n){       //star block              
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void p2(int n){    //right number triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< j<<" ";
        }
        cout<<endl;
    }
}

void p3(int n){    //right star triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void p4(int n){     //inverted right number triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+2;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void p5(int n){     //inverted right star triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void p6(int n){    //star triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p7(int n){    //inverted star triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p8(int n){    //incremental right triangle
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}

void p9(int n){    //right letter triangle
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void p10(int n){    //inverted right letter triangle
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+(n-i-1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void p11(int n){    //repeating right letter triangle
    for(int i=0;i<n;i++){
        char c='A'+i;
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

void p12(int n){    // letter triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char c='A';
        int bp=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<c;
            if(j <= bp){
                c++;
            }
            else{
                c--;
            }
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p12r(int n){    // inverted letter triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        char c='A';
        int bp=(2*n-(2*i+1))/2;
        for(int j=1;j<=2*n-(2*i+1);j++){
            cout<<c;
            if(j <= bp){
                c++;
            }
            else{
                c--;
            }
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p13(int n){    //number triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int c=1;
        int bp=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<c;
            if(j <= bp){
                c++;
            }
            else{
                c--;
            }
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p14(int n){    // inverted number triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        int c=1;
        int bp=(2*n-(2*i+1))/2;
        for(int j=1;j<=2*n-(2*i+1);j++){
            cout<<c;
            if(j <= bp){
                c++;
            }
            else{
                c--;
            }
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void p15(int n){     //star square 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void p16(int n){       //decreasing number square
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int t=i;
            int l=j;
            int r=(2*n-2)-j;
            int d=(2*n-2)-i;
            cout<<(n-min(min(t,d),min(l,r)));
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    p14(n);
}