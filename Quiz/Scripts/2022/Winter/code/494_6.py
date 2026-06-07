try:
    a,b,c=0,1,5
    def g(a):
        global c
        a=2
        b+=3
        c=5
        return a+b+c
    
    a,b,c=9,2,7
    print(g(b),a,b,c)
    
except: print('error')
