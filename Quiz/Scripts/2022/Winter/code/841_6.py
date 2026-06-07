try:
    a,b,c=8,2,5
    def f(b):
        a-=5
        b=3
        c=1
        return a+b+c
    
    a,b,c=4,6,9
    print(f(b),a,b,c)
    
except: print('error')
