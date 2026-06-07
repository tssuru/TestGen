try:
    def f(s):
        for el in s:
            el+=1
        return s
    
    s=[1,2,3]
    s=f(s)
    print(s)
except: print('error')
