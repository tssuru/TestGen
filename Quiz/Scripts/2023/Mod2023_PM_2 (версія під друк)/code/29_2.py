try:
    a,b,c=7,9,0
    def g(a):
        global c
        a*=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=1,5,4
    print(g(b),a,b,c)
    
except: print('error')
