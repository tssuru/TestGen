try:
    
    a,b,c=6,7,9
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(1,c=3,b=1)
    print(a,b,c)
    
except: print('error')
