try:
    a,b,c=0,8,6
    def g(b):
        global c
        a=3
        b=2
        c=1
        return a+b+c
    
    a,b,c=9,4,5
    print(g(b),a,b,c)
    
except: print('error')
