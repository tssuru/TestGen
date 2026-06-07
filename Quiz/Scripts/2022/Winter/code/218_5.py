try:
    
    a,b,c=7,7,9
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(b=5,c=3,c=0)
    print(a,b,c)
    
except: print('error')
