try:
    a,b,c=9,1,4
    def g(b):
        global c
        a-=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=2,3,7
    print(g(b),a,b,c)
    
except: print('error')
