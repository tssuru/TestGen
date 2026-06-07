try:
    a,b,c=1,6,0
    def f(b):
        a-=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=7,0,2
    print(f(b),a,b,c)
    
except: print('error')
