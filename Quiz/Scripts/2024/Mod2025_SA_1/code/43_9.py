try:
    a,b,c=9,6,2
    def f(a):
        a*=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=8,8,4
    print(f(b),a,b,c)
except: print('error')
