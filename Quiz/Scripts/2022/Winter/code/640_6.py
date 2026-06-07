try:
    a,b,c=8,2,0
    def f(b):
        a=3
        b=1
        c=4
        return a+b+c
    
    a,b,c=4,3,9
    print(f(b),a,b,c)
    
except: print('error')
