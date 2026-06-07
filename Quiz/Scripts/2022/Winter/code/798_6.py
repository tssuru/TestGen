try:
    a,b,c=4,3,2
    def g(a):
        global c
        a=5
        b+=4
        c=2
        return a+b+c
    
    a,b,c=6,8,7
    print(g(b),a,b,c)
    
except: print('error')
