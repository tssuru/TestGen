try:
    
    a,b,c=8,7,6
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(3,c=4,b=1)
    print(a,b,c)
    
except: print('error')
