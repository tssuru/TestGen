try:
    a,b,c=1,8,4
    def g(b):
        global c
        a=1
        b=2
        c=1
        return a+b+c
    
    a,b,c=0,3,6
    print(g(b),a,b,c)
    
except: print('error')
