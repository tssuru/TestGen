try:
    a,b,c=2,6,7
    def g(a):
        a-=5
        b=1
        c=3
        return a+b+c
    
    a,b,c=0,8,4
    print(g(b),a,b,c)
    
except: print('error')
