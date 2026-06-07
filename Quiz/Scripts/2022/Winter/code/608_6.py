try:
    a,b,c=9,0,6
    def g(a):
        global c
        a=2
        b+=4
        c=3
        return a+b+c
    
    a,b,c=1,3,7
    print(g(b),a,b,c)
    
except: print('error')
