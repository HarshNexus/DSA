class trienode{
    public:
    char d;
    trienode* arr[26];
    bool t;
    int c;

    trienode( char d){
        this ->d=d;
        for(int i=0;i<26;i++){
            arr[i]=NULL;
        }
        this->t=false;
        this->c=0;
    }
};
class trie{
    public:
    trienode*root;
    trie(){                             
        root=new trienode('\0');
    }

    void insertutil(trienode*root,string word){
        if(word.length()==0){
            root->t=true;
            return ;
        }
        trienode* child;
        int i=word[0]-'a';
        if(root->arr[i]!=NULL){
            child=root->arr[i];
        }
        else{
            child= new trienode(word[0]);
            root->arr[i]=child;
            root->c++;
        }
        insertutil(child,word.substr(1));
    }

    void insert(string word){
        insertutil(root,word);
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";   
     int count=0;
     trie*t=new trie();
     for(int i=0;i<strs.size();i++){
        t->insert(strs[i]);
     }   
    string s=strs[0];
    string ans="";
    trienode*root=t->root;
    if(root->t)
    return "";
     for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(root->c==1){
            ans.push_back(ch);
            int j=ch -'a';
            root=root->arr[j];

        }
        else{
            break;
        }
        if(root->t==true) break;
     }
     return ans;
    }
};