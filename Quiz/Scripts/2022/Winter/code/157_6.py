try:
    a,b,c=7,3,0
    def g(a):
        global c
        a-=3
        b=1
        c=1
        return a+b+c
    
    a,b,c=6,3,5
    print(g(b),a,b,c)
    
except: print('error')
