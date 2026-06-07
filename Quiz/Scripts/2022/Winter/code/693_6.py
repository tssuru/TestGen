try:
    a,b,c=4,3,8
    def f(b):
        a*=3
        b=4
        c=5
        return a+b+c
    
    a,b,c=0,1,6
    print(f(b),a,b,c)
    
except: print('error')
