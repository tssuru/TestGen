try:
    def f(s):
        s1=s
        for i in range(len(s)):
            s1[i]+=1
        return s1
    
    s=[1,2,3]
    f(s)
    print(s)
    
except: print('error')
