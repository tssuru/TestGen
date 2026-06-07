try:
    a,b,c=2,8,5
    def g(b):
        global c
        a-=5
        b=4
        c=5
        return a+b+c
    
    a,b,c=1,8,7
    print(g(b),a,b,c)
    
except: print('error')
