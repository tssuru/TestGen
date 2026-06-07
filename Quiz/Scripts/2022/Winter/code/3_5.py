try:
    
    a,b,c=6,7,9
    def f(a,b=8,c):
        print(a,b,c,end="")
    
    f(a=1,4,a=3)
    print(a,b,c)
    
except: print('error')
