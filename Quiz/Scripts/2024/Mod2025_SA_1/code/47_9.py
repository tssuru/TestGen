try:
    a,b,c=8,3,7
    def f(b):
        a+=2
        b=4
        c=3
        return a+b+c
    
    a,b,c=0,2,6
    print(f(b),a,b,c)
except: print('error')
