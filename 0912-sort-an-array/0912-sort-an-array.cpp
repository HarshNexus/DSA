class Solution {
    private:
    void merge(vector<int>& nums,int s,int e){
        int mid=s+(e-s)/2;
        int len1=mid-s+1;
        int len2=e-mid;
        int *first=new int[len1];
        int *second=new int [len2];

        int k=s;
        for(int i=0;i<len1;i++){
            first[i]=nums[k++];
        }
        k=mid+1;
        for(int i=0;i<len2;i++){
            second[i]=nums[k++];
        }
        k=s;
    int i1=0;
    int i2=0;

        while(i1<len1&&i2<len2){
            if(first[i1]<second[i2]){
                nums[k++]=first[i1++];
            }
            else{
                nums[k++]=second[i2++];
            }
        }
        while(i1<len1){
            nums[k++]=first[i1++];
        }
        while(i2<len2){
            nums[k++]=second[i2++];
        }
    }

    void mergesort(vector<int>& nums,int s,int e){
        if(s>=e) return ;
        int mid=s+(e-s)/2;
        mergesort(nums,s,mid);
        mergesort(nums,mid+1,e);
        merge(nums,s,e);

    }
public:
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
    
};