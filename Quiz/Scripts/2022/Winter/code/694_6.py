try:
    a,b,c=9,7,2
    def g(a):
        global c
        a=1
        b+=2
        c=2
        return a+b+c
    
    a,b,c=5,8,0
    print(g(b),a,b,c)
    
except: print('error')
