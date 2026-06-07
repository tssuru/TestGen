try:
    
    a,b,c=6,9,7
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(5,c=3)
    print(a,b,c)
    
except: print('error')
