try:
    a,b,c=8,3,7
    def g(a):
        a=1
        b*=2
        c=3
        return a+b+c
    
    a,b,c=6,0,1
    print(g(b),a,b,c)
    
except: print('error')
