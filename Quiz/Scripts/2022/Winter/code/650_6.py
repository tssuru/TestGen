try:
    a,b,c=3,1,3
    def f(b):
        a=3
        b*=3
        c=1
        return a+b+c
    
    a,b,c=5,1,0
    print(f(b),a,b,c)
    
except: print('error')
