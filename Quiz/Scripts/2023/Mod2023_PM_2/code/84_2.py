try:
    a,b,c=7,2,8
    def g(a):
        global c
        a*=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=1,0,5
    print(g(b),a,b,c)
    
except: print('error')
