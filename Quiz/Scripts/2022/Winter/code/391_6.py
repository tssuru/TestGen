try:
    a,b,c=6,7,1
    def f(a):
        a+=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=3,5,1
    print(f(b),a,b,c)
    
except: print('error')
