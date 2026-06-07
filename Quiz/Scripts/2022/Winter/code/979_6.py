try:
    a,b,c=2,3,0
    def f(b):
        a=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=4,1,5
    print(f(b),a,b,c)
    
except: print('error')
