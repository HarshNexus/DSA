class trienode{
    public:
    char d;
    trienode*c[26];
    bool t;

    trienode(char ch){
        this->d=ch;
        for(int i=0;i<26;i++){
            c[i]=NULL;
        }
        t=false;
    }
};


class Trie {
public:
trienode* root;
    Trie() {
        root= new trienode('\0');
    }
    void insertutil(trienode* root,string word) {
        if(word.length()==0){
            root->t=true;
            return;
        }

        int i=word[0]-'a';
        trienode* child;
        if(root->c[i]!=NULL){
            child=root->c[i];
        }
        else{
            child= new trienode(word[0]);
            root->c[i]=child;
        }

        insertutil(child,word.substr(1));
    }
    void insert(string word) {
       insertutil(root,word);
    }
    

    bool searchutil(trienode* root, string word){
        if(word.length()==0){
            return root->t;
        }

        int i=word[0]-'a';
        trienode* child;
        if(root->c[i]!=NULL){
            child=root->c[i];
        }

        else{
            return false;

        }

        return searchutil(child,word.substr(1));
    }
    bool search(string word) {

        return searchutil(root,word);
        
    }
    bool prefixi(trienode* root, string word){
        if(word.length()==0){
            return true;
        }

        int i=word[0]-'a';
        trienode* child;
        if(root->c[i]!=NULL){
            child=root->c[i];
        }

        else{
            return false;

        }

        return prefixi(child,word.substr(1));
    }
    
    bool startsWith(string prefix) {
        return prefixi(root,prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */