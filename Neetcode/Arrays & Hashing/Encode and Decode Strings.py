"""
Design an algorithm to encode a list of strings to a string. The encoded string is then sent over the network and is decoded back to the original list of strings.

Please implement encode and decode

"""


class Solution:
    def encode(self, strs: str):
        e = ""
        for s in strs:
            e = e + str(len(s)) + ":" + s
        return e

    def decode(self, str):
        i = 0
        strs = []
        while i < len(str):
            if str[i].isdigit() and str[i + 1] == ":":
                strs.append(str[i + 2 : i + 2 + int(str[i])])
            i += 1
        return strs


def test_encode_decode():
    strs = ["we", "say", ":", "yes"]
    sol = Solution()
    assert strs == sol.decode(sol.encode(strs))


if __name__ == "__main__":
    test_encode_decode()
