class MedianFinder {
    priority_queue<int , vector<int>, greater<int>> mini;
    priority_queue<int,vector<int>> maxi;

    int signum(int a, int b) {
        if (a == b)
            return 0;
        else if (a > b)
            return 1;
        else
            return -1;
    }

    double m;
public:
    MedianFinder() {
        m=0;
    }
    
    void addNum(int num) {
         switch(signum(maxi.size(),mini.size())){

            case 0:
            if(num>m){
                mini.push(num);
                m=mini.top();
            }
            else{
                maxi.push(num);
                m=maxi.top();
            }
            break;

            case 1:
            if(num>m){
                mini.push(num);
               
            }
            else{
                mini.push(maxi.top());
                maxi.pop();
                maxi.push(num);
                
            }
            m = (maxi.top() + mini.top()) / 2.0;  
            break;

            case -1:

            if(num>m){
                maxi.push(mini.top());
                mini.pop();
                mini.push(num);
                
            }
            else{
                
                maxi.push(num);
                
            }
            m = (maxi.top() + mini.top()) / 2.0;
            break;
         }
    }
    
    double findMedian() {
         return m;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */