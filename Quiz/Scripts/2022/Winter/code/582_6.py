try:
    a,b,c=4,2,0
    def g(a):
        a*=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=5,6,1
    print(g(b),a,b,c)
    
except: print('error')
