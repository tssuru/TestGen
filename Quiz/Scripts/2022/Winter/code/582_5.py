try:
    
    a,b,c=8,7,9
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(3,4)
    print(a,b,c)
    
except: print('error')
