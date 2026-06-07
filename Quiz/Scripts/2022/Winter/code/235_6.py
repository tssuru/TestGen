try:
    a,b,c=5,8,1
    def g(b):
        global c
        a=1
        b=5
        c=2
        return a+b+c
    
    a,b,c=0,7,3
    print(g(b),a,b,c)
    
except: print('error')
