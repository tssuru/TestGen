try:
    
    a,b,c=6,6,7
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(4,c=1,b=3)
    print(a,b,c)
    
except: print('error')
