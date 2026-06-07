try:
    a,b,c=2,3,1
    def g(a):
        a=3
        b+=2
        c=1
        return a+b+c
    
    a,b,c=6,0,8
    print(g(b),a,b,c)
    
except: print('error')
