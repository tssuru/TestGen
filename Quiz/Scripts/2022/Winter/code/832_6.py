try:
    a,b,c=0,5,5
    def g(a):
        global c
        a=5
        b+=2
        c=4
        return a+b+c
    
    a,b,c=3,0,4
    print(g(b),a,b,c)
    
except: print('error')
