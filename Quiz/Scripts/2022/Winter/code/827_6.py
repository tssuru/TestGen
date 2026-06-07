try:
    a,b,c=8,0,7
    def g(a):
        global c
        a=1
        b-=4
        c=2
        return a+b+c
    
    a,b,c=1,6,4
    print(g(b),a,b,c)
    
except: print('error')
