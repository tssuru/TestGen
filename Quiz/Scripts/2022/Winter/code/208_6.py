try:
    a,b,c=3,2,4
    def f(b):
        global c
        a+=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=7,8,5
    print(f(b),a,b,c)
    
except: print('error')
