try:
    a,b,c=7,1,2
    def g(a):
        global c
        a-=4
        b=1
        c=2
        return a+b+c
    
    a,b,c=9,7,2
    print(g(b),a,b,c)
    
except: print('error')
