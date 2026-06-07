try:
    a,b,c=2,3,8
    def g(a):
        a+=2
        b=1
        c=2
        return a+b+c
    
    a,b,c=6,0,9
    print(g(b),a,b,c)
    
except: print('error')
