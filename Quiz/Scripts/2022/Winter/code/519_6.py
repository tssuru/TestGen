try:
    a,b,c=5,4,1
    def f(a):
        a*=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,0,8
    print(f(b),a,b,c)
    
except: print('error')
