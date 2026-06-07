try:
    a,b,c=4,7,6
    def f(b):
        a=3
        b=5
        c=2
        return a+b+c
    
    a,b,c=0,1,5
    print(f(b),a,b,c)
except: print('error')
