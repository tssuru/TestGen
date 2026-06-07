try:
    a,b,c=6,0,3
    def g(b):
        global c
        a=5
        b=3
        c=4
        return a+b+c
    
    a,b,c=1,2,8
    print(g(b),a,b,c)
except: print('error')
