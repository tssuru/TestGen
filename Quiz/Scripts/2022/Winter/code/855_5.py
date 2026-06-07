try:
    
    a,b,c=6,9,7
    def f(a,b=8,c=8):
        print(a,b,c,end="")
    
    f(1,b=5)
    print(a,b,c)
    
except: print('error')
