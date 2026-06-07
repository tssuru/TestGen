try:
    a,b,c=3,5,4
    def f(b):
        a+=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=9,8,2
    print(f(b),a,b,c)
    
except: print('error')
