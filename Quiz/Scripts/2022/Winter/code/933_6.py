try:
    a,b,c=8,6,8
    def g(a):
        a=2
        b=2
        c=3
        return a+b+c
    
    a,b,c=1,5,4
    print(g(b),a,b,c)
    
except: print('error')
