try:
    a,b,c=1,2,4
    def f(b):
        a=1
        b*=2
        c=5
        return a+b+c
    
    a,b,c=6,0,5
    print(f(b),a,b,c)
    
except: print('error')
