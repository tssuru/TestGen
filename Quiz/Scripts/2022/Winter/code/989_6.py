try:
    a,b,c=8,0,9
    def g(a):
        global c
        a=3
        b-=4
        c=5
        return a+b+c
    
    a,b,c=2,6,4
    print(g(b),a,b,c)
    
except: print('error')
