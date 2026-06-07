try:
    a,b,c=4,2,1
    def g(b):
        global c
        a=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=0,7,0
    print(g(b),a,b,c)
    
except: print('error')
