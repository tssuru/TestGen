try:
    a,b,c=2,8,9
    def g(a):
        a-=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=1,3,4
    print(g(b),a,b,c)
    
except: print('error')
