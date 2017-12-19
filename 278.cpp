// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1, r=n, m;
        while (l<r){
        	m = l+(r-l)/2; //if use(l+r)/2 may exceed the range of Integer;
        	if (isBadVersion(m))
        		r = m;
        	else 
        		l = m+1;
        }
        return l;
    }
};