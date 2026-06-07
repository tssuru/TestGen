try:
    a,b,c=9,0,5
    def f(b):
        a*=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=2,6,8
    print(f(b),a,b,c)
    
except: print('error')
