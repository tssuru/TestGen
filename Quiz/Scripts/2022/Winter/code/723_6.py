try:
    a,b,c=9,8,4
    def g(a):
        global c
        a-=4
        b=5
        c=5
        return a+b+c
    
    a,b,c=0,2,8
    print(g(b),a,b,c)
    
except: print('error')
