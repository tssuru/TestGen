try:
    
    a,b,c=8,9,7
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(4,a=5)
    print(a,b,c)
    
except: print('error')
