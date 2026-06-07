try:
    
    a,b,c=6,7,9
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(a=0,5,c=3)
    print(a,b,c)
    
except: print('error')
