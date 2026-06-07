try:
    a,b,c=4,5,0
    def g(a):
        a*=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=2,1,5
    print(g(b),a,b,c)
    
except: print('error')
