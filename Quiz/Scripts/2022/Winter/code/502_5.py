try:
    
    a,b,c=8,9,7
    def f(a,b=6,c=7):
        print(a,b,c,end="")
    
    f(1,c=5,b=0)
    print(a,b,c)
    
except: print('error')
