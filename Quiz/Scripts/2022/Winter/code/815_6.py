try:
    a,b,c=3,0,6
    def g(a):
        global c
        a-=3
        b=1
        c=2
        return a+b+c
    
    a,b,c=1,7,2
    print(g(b),a,b,c)
    
except: print('error')
