try:
    a,b,c=5,7,8
    def f(b):
        a=1
        b*=3
        c=1
        return a+b+c
    
    a,b,c=6,4,0
    print(f(b),a,b,c)
    
except: print('error')
