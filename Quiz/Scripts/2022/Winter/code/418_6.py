try:
    a,b,c=6,1,5
    def g(a):
        a-=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=3,4,8
    print(g(b),a,b,c)
    
except: print('error')
