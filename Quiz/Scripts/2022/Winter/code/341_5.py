try:
    
    a,b,c=8,7,6
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(b=4,c=0,3)
    print(a,b,c)
    
except: print('error')
