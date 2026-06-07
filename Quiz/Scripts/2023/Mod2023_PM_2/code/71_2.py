try:
    a,b,c=3,1,8
    def g(b):
        global c
        a=2
        b*=4
        c=3
        return a+b+c
    
    a,b,c=4,7,2
    print(g(b),a,b,c)
    
except: print('error')
