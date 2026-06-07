try:
    a,b,c=2,5,0
    def g(a):
        global c
        a-=4
        b=3
        c=5
        return a+b+c
    
    a,b,c=3,8,9
    print(g(b),a,b,c)
    
except: print('error')
