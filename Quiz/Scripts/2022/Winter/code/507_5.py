try:
    
    a,b,c=6,7,9
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(2,4,a=3)
    print(a,b,c)
    
except: print('error')
