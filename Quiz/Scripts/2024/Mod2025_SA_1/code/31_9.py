try:
    a,b,c=0,3,1
    def g(a):
        a-=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=2,5,8
    print(g(b),a,b,c)
except: print('error')
