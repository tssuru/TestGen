try:
    a,b,c=8,1,6
    def f(b):
        a-=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=5,1,6
    print(f(b),a,b,c)
    
except: print('error')
