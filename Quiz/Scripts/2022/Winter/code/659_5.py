try:
    
    a,b,c=9,7,6
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(1,c=5)
    print(a,b,c)
    
except: print('error')
