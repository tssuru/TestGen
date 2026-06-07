try:
    
    a,b,c=8,9,7
    def f(a,b=6,c):
        print(a,b,c,end="")
    
    f(5,c=4,b=1)
    print(a,b,c)
    
except: print('error')
