try:
    a,b,c=2,8,7
    def g(a):
        global c
        a=1
        b-=2
        c=4
        return a+b+c
    
    a,b,c=6,0,8
    print(g(b),a,b,c)
    
except: print('error')
