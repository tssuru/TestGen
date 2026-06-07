try:
    def f(s1):
        s=s1[:]
        for i in range(len(s)):
            s[i]+=1
    
    s=[1,2,3]
    f(s)
    print(s)
    
except: print('error')
