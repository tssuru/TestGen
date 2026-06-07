try:
    a,b,c=5,7,8
    def f(a):
        a*=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=9,6,3
    print(f(b),a,b,c)
    
except: print('error')
