try:
    a,b,c=4,5,1
    def g(b):
        global c
        a=4
        b=2
        c=1
        return a+b+c
    
    a,b,c=3,8,6
    print(g(b),a,b,c)
    
except: print('error')
