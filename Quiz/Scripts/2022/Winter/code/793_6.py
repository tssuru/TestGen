try:
    a,b,c=0,7,9
    def g(b):
        global c
        a=3
        b+=2
        c=1
        return a+b+c
    
    a,b,c=6,2,1
    print(g(b),a,b,c)
    
except: print('error')
