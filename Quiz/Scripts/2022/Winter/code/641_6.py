try:
    a,b,c=6,8,4
    def f(b):
        a=5
        b*=4
        c=1
        return a+b+c
    
    a,b,c=2,5,1
    print(f(b),a,b,c)
    
except: print('error')
