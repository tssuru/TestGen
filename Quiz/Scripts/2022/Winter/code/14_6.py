try:
    a,b,c=9,1,4
    def g(b):
        global c
        a*=5
        b=4
        c=2
        return a+b+c
    
    a,b,c=3,5,6
    print(g(b),a,b,c)
    
except: print('error')
