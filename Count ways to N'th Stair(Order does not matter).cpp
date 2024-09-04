class Solution{
	public:
		int nthStair(int n){
		    //  Code here
		    return (n==1||n==2)? n: (n/2)+1;
		}
};
