#include<bits/stdc++.h>
using namespace std;
int main (){


string s1;
cin>>s1;
int i=0;
while(s1[i]!=0){
if(s1[i]>='a'&&s1[i]<='z'){
    s1 [0]=toupper(s1[0]);
}
i++;
}
cout <<s1<<endl;





return 0;    
}
