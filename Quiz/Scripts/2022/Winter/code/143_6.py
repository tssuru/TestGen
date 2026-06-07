try:
    a,b,c=7,5,1
    def g(b):
        global c
        a=5
        b=3
        c=1
        return a+b+c
    
    a,b,c=3,7,0
    print(g(b),a,b,c)
    
except: print('error')
