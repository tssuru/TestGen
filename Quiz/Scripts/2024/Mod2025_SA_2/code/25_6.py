try:
    def f(s):
        for i in range(len(s)):
            s[i]+=1
        return
    
    s=[1,2,3]
    f(s)
    print(s)
except: print('error')
