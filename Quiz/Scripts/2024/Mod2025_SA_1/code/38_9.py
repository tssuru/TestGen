try:
    a,b,c=2,1,4
    def f(a):
        a=1
        b*=4
        c=3
        return a+b+c
    
    a,b,c=3,2,9
    print(f(b),a,b,c)
except: print('error')
