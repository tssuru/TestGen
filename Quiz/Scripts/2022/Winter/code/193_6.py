try:
    a,b,c=1,5,3
    def g(a):
        a-=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,7,8
    print(g(b),a,b,c)
    
except: print('error')
