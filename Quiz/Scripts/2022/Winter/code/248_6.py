try:
    a,b,c=7,6,4
    def f(b):
        a=4
        b*=3
        c=5
        return a+b+c
    
    a,b,c=2,1,0
    print(f(b),a,b,c)
    
except: print('error')
