try:
    a,b,c=1,6,9
    def f(b):
        a=5
        b*=2
        c=3
        return a+b+c
    
    a,b,c=4,8,5
    print(f(b),a,b,c)
    
except: print('error')
