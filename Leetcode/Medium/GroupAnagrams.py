class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hm = {}
        for s in strs:
            _s = "".join(sorted(s))
            print(_s)
            if _s in hm:
                hm[_s].append(s)
            else:
                hm[_s] = [s]
        grams = []
        for k in hm:
            grams.append(hm[k])
        return grams
