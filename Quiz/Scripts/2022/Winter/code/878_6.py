try:
    a,b,c=6,1,7
    def f(a):
        a+=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=4,2,3
    print(f(b),a,b,c)
    
except: print('error')
