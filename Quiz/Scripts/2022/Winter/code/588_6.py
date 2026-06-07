try:
    a,b,c=8,0,3
    def g(a):
        a=2
        b-=5
        c=3
        return a+b+c
    
    a,b,c=4,8,0
    print(g(b),a,b,c)
    
except: print('error')
