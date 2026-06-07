try:
    a,b,c=4,2,0
    def g(b):
        global c
        a=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=3,6,8
    print(g(b),a,b,c)
    
except: print('error')
