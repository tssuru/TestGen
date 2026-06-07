try:
    a,b,c=5,6,0
    def g(a):
        a*=1
        b=4
        c=5
        return a+b+c
    
    a,b,c=8,1,3
    print(g(b),a,b,c)
    
except: print('error')
