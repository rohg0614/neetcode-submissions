class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        last_seen={}
        left,best=0,0
        for right, char in enumerate(s):
            if char in last_seen:
                pos=last_seen[char]
                if pos>=left:
                    left=pos+1
            last_seen[char]=right
            best=max(best, right-left+1)
        return best