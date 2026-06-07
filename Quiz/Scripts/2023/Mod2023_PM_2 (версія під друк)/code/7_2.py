try:
    a,b,c=7,4,2
    def f(b):
        a+=4
        b=5
        c=2
        return a+b+c
    
    a,b,c=9,0,8
    print(f(b),a,b,c)
    
except: print('error')
