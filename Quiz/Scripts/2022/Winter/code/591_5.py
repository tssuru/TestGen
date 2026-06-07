try:
    
    a,b,c=8,7,9
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(1,c=5)
    print(a,b,c)
    
except: print('error')
