try:
    a,b,c=5,2,6
    def f(b):
        a+=4
        b=5
        c=2
        return a+b+c
    
    a,b,c=8,0,9
    print(f(b),a,b,c)
    
except: print('error')
