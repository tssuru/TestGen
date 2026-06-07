try:
    a,b,c=5,3,4
    def g(b):
        global c
        a*=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=8,7,2
    print(g(b),a,b,c)
    
except: print('error')
