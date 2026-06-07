try:
    a,b,c=3,1,8
    def g(a):
        global c
        a=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=4,0,6
    print(g(b),a,b,c)
    
except: print('error')
