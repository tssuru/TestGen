try:
    a,b,c=4,9,8
    def g(a):
        global c
        a=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=3,5,7
    print(g(b),a,b,c)
    
except: print('error')
