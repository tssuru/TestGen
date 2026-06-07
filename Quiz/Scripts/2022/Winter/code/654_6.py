try:
    a,b,c=5,3,4
    def g(b):
        global c
        a-=3
        b=4
        c=4
        return a+b+c
    
    a,b,c=8,8,5
    print(g(b),a,b,c)
    
except: print('error')
