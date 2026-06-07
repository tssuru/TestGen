try:
    a,b,c=8,6,3
    def g(a):
        a=1
        b-=4
        c=2
        return a+b+c
    
    a,b,c=5,7,8
    print(g(b),a,b,c)
    
except: print('error')
