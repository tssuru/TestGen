try:
    a,b,c=7,3,6
    def f(a):
        a+=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=1,9,8
    print(f(b),a,b,c)
    
except: print('error')
