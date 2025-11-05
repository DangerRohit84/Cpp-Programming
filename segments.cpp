#include<bits/stdc++.h>
using namespace std;

class segmentTree{
    private:
        vector<int>SegTree;
    public:
        segmentTree(int n){
            SegTree.resize(n);
        }
        void BuildSegTree(int Index, int start, int end , vector<int>&A)
        {
            if(start==end) SegTree[Index]=A[start];
            int mid=(start+end)/2;
            BuildSegTree(2*Index+1,start, mid, A);
            BuildSegTree(2*Index+2,mid+1,end, A);
        }
        int RangeSum(int Ql,int Qr,int start,int end,int index)
        {
            // no over lap
            if(Ql>end || Qr <start) return 0;

            // complete over lap
            if(Ql <= )
        }
};


int main()
{
}