try:
    
    a,b,c=6,9,7
    def f(a,b=8,c=7):
        print(a,b,c,end="")
    
    f(5,c=0,b=5)
    print(a,b,c)
    
except: print('error')
