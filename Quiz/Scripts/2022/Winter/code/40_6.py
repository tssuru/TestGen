try:
    a,b,c=5,0,6
    def g(b):
        global c
        a=4
        b=3
        c=1
        return a+b+c
    
    a,b,c=8,4,7
    print(g(b),a,b,c)
    
except: print('error')
