try:
    a,b,c=0,7,1
    def g(a):
        global c
        a+=2
        b=5
        c=2
        return a+b+c
    
    a,b,c=7,2,5
    print(g(b),a,b,c)
    
except: print('error')
