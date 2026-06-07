try:
    a,b,c=3,2,6
    def f(b):
        a=2
        b*=1
        c=5
        return a+b+c
    
    a,b,c=9,7,1
    print(f(b),a,b,c)
    
except: print('error')
