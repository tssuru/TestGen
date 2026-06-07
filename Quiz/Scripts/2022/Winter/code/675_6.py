try:
    a,b,c=0,4,2
    def f(a):
        a=2
        b=4
        c=3
        return a+b+c
    
    a,b,c=8,9,1
    print(f(b),a,b,c)
    
except: print('error')
