try:
    a,b,c=5,1,3
    def g(a):
        global c
        a=4
        b=5
        c=2
        return a+b+c
    
    a,b,c=2,0,8
    print(g(b),a,b,c)
    
except: print('error')
