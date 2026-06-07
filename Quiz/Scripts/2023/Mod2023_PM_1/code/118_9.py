try:
    a,b,c=8,1,0
    def g(a):
        a=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=4,5,3
    print(g(b),a,b,c)
    
except: print('error')
