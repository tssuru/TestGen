try:
    a,b,c=9,0,4
    def g(a):
        a-=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=3,9,2
    print(g(b),a,b,c)
    
except: print('error')
