
vector<char> &s;
string a="";
for(int i=0;i<n;i++){
    
    if(s[i]==" "){
        reverse(s.begin(),s.begin()+(i-1));
    }
    else{
       a+=s[i];
    }
}