try:
    a,b,c=2,0,8
    def g(a):
        a=2
        b=1
        c=5
        return a+b+c
    
    a,b,c=9,6,4
    print(g(b),a,b,c)
    
except: print('error')
