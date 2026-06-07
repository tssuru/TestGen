try:
    a,b,c=7,6,4
    def f(a):
        a=4
        b*=5
        c=4
        return a+b+c
    
    a,b,c=2,7,6
    print(f(b),a,b,c)
    
except: print('error')
