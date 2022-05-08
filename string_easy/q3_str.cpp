// we are iterating over the haystack and checking if the needle matches it.
class Solution {
public:
    int strStr(string haystack, string needle) {
        int nsize = needle.size();
        int hsize = haystack.size();
        if(nsize == 0 ){
            return 0;
        }
        if(nsize>hsize){
            return -1;
        }
        
        for (int i = 0; i <= hsize-nsize; i++) {
            int j = 0;
            for (; j < nsize; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == nsize) {
                return i;
            }
        }
        
        return -1;
    }
};