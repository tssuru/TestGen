try:
    a,b,c=7,1,2
    def g(b):
        global c
        a=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=8,5,6
    print(g(b),a,b,c)
    
except: print('error')
