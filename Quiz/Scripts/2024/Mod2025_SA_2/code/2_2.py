try:
    a,b,c=4,7,8
    def f(b):
        a*=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=9,6,5
    print(f(b),a,b,c)
except: print('error')
