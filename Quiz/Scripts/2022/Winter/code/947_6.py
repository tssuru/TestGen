try:
    a,b,c=7,4,6
    def f(a):
        a+=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=1,6,2
    print(f(b),a,b,c)
    
except: print('error')
