try:
    
    a,b,c=6,7,9
    def f(a,b=6,c=8):
        print(a,b,c,end="")
    
    f(1,c=2,b=4)
    print(a,b,c)
    
except: print('error')
