try:
    a,b,c=8,3,7
    def g(a):
        a-=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=9,1,5
    print(g(b),a,b,c)
    
except: print('error')
