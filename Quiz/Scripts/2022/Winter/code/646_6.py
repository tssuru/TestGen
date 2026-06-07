try:
    a,b,c=4,6,5
    def f(b):
        a=4
        b+=2
        c=3
        return a+b+c
    
    a,b,c=9,7,1
    print(f(b),a,b,c)
    
except: print('error')
