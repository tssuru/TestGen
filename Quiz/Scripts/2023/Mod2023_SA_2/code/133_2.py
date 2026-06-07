try:
    a,b,c=0,2,7
    def f(b):
        a=5
        b-=5
        c=4
        return a+b+c
    
    a,b,c=1,9,5
    print(f(b),a,b,c)
    
except: print('error')
