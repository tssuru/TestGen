try:
    a,b,c=1,2,8
    def f(b):
        a=5
        b=2
        c=3
        return a+b+c
    
    a,b,c=7,5,6
    print(f(b),a,b,c)
    
except: print('error')
