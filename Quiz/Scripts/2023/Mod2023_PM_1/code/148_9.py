try:
    a,b,c=3,5,7
    def f(a):
        a=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=9,1,6
    print(f(b),a,b,c)
    
except: print('error')
