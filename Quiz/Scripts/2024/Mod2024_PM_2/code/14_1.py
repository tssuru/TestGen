try:
    a,b,c=2,7,6
    def g(b):
        global c
        a-=4
        b=3
        c=2
        return a+b+c
    
    a,b,c=1,5,8
    print(g(b),a,b,c)
    
except: print('error')
