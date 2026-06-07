try:
    a,b,c=7,0,2
    def g(a):
        global c
        a-=5
        b=5
        c=2
        return a+b+c
    
    a,b,c=7,5,8
    print(g(b),a,b,c)
    
except: print('error')
