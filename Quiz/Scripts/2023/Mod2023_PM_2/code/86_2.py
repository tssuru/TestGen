try:
    a,b,c=2,5,9
    def f(b):
        a=5
        b+=1
        c=4
        return a+b+c
    
    a,b,c=6,7,3
    print(f(b),a,b,c)
    
except: print('error')
