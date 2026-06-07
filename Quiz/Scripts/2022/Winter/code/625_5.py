try:
    
    a,b,c=8,9,7
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(3,c=5,b=4)
    print(a,b,c)
    
except: print('error')
