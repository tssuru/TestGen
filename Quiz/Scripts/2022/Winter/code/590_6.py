try:
    a,b,c=9,6,8
    def g(b):
        global c
        a=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=1,8,4
    print(g(b),a,b,c)
    
except: print('error')
